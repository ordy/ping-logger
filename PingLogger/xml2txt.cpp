#include "xml2txt.hpp"

Xml2txt::Xml2txt() : ElemPing(){
;}

Xml2txt::~Xml2txt(){
;}

Xml2txt::Xml2txt(string ligne) : ElemPing(ligne){
;}

Xml2txt::Xml2txt(Xml2txt &cpy_xml) : ElemPing(cpy_xml){
;}

bool objComp(Xml2txt* pobj1, Xml2txt* pobj2){
    return *pobj1 < *pobj2;
}

bool operator<(Xml2txt& obj1, Xml2txt& obj2){
    return obj1.get_time() < obj2.get_time();
}

void Xml2txt::displayvect(vector<string>& text_out, int& min, int& max, int& avg, vector<Xml2txt*>& v_lines){;
    string line;
    vector<Xml2txt*>::iterator itera;
    text_out.push_back("ADRESSE IP;SIZE;TIME;TTL");
    //Read all the ping lines
    for(itera=v_lines.begin();itera != v_lines.end();++itera){
        avg  += (*itera)->get_time();
        line  = (*itera)->get_ip();
        line += ";";
        line += to_string((*itera)->get_size());
        line += ";";
        line += to_string((*itera)->get_time());
        line += ";";
        line += to_string((*itera)->get_ttl());
        text_out.push_back(line);
    }
    line  = "MINIMUM;--;";
    min   = (*min_element((v_lines.begin()),(v_lines.end()),objComp))->get_time();
    line += to_string(min);
    line += ";--";
    text_out.push_back(line);
    line  = "MAXIMUM;--;";
    max   = (*max_element((v_lines.begin()),(v_lines.end()),objComp))->get_time();
    line += to_string(max);
    line += ";--";
    text_out.push_back(line);
    line  = "MOYENNE;--;";
    avg  /= v_lines.size();
    line += to_string(avg);
    line += ";--";
    text_out.push_back(line);
}
//Data extraction
ifstream& operator>>(ifstream& entree, Xml2txt& paquet){
    short closetag, opentag;
    getline(entree,paquet.dataLine);
    closetag = paquet.dataLine.find_first_of(">");
    opentag = paquet.dataLine.find_last_of("<");
    if(paquet.dataLine.find("adresseip") != string::npos)
        paquet.set_ip(paquet.dataLine.substr(closetag+1, opentag-closetag-1));
    else if(paquet.dataLine.find("size") != string::npos)
        paquet.set_size(atoi(paquet.dataLine.substr(closetag+1,opentag-closetag-1).c_str()));
    else if(paquet.dataLine.find("time") != string::npos)
        paquet.set_time(atoi(paquet.dataLine.substr(closetag+1,opentag-closetag-1).c_str()));
    else if(paquet.dataLine.find("ttl") != string::npos)
        paquet.set_ttl(atoi(paquet.dataLine.substr(closetag+1,opentag-closetag-1).c_str()));
    return entree;
}

ofstream& operator<<(ofstream& sortie, vector<Xml2txt*>& v_lines){
    double moyenne=0;
    vector<Xml2txt*>::iterator itera;
    sortie << "ADRESSE IP;SIZE;TIME;TTL\n";
    for(itera=v_lines.begin();itera != v_lines.end();++itera){
        moyenne+= (*itera)->get_time();
        sortie << (*itera)->get_ip()   << ";"
               << (*itera)->get_size() << ";"
               << (*itera)->get_time() << ";"
               << (*itera)->get_ttl()  << "\n";
    }
    sortie << "MINIMUM;--;"
           << (*min_element(v_lines.begin(),v_lines.end()))->get_time() << ";--\n"
           << "MAXIMUM;--;"
           << (*max_element(v_lines.begin(),v_lines.end()))->get_time() << ";--\n"
           << "MOYENNE;--;" << (moyenne)/(v_lines.size()) << ";--";
    return sortie;
}
