#include "log2xml.hpp"

Log2xml::Log2xml() : ElemPing(){
;}

Log2xml::~Log2xml(){
;}

Log2xml::Log2xml(string ligne) : ElemPing(ligne){
;}

Log2xml::Log2xml(Log2xml &cpy_log) : ElemPing(cpy_log){
;}

bool objComp(Log2xml* pobj1, Log2xml* pobj2){
    return (*pobj1) < (*pobj2);
}

bool operator<(Log2xml& obj1, Log2xml& obj2){
    return obj1.get_time() < obj2.get_time();
}

void Log2xml::displayvect(vector<string>& text_out, int& min, int& max, int& avg, vector<Log2xml*>& v_lines){;
    char buffer[10];
    string line;
    vector<Log2xml*>::iterator itera=v_lines.begin();
    line  = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
            "<pinglog>\n  <commande>\n    <date>\n      <jour>";
    line += itoa((*itera)->XMLtime.day,buffer,10);
    line += "</jour>\n      <mois>";
    line += itoa((*itera)->XMLtime.month,buffer,10);
    line += "</mois>\n      <annee>";
    line += itoa((*itera)->XMLtime.year,buffer,10);
    line += "</annee>\n    </date>\n    <temps>\n      <heure>";
    line += itoa((*itera)->XMLtime.hour,buffer,10);
    line += "</heure>\n      <minute>";
    line += itoa((*itera)->XMLtime.minute,buffer,10);
    line += "</minute>\n      <seconde>";
    line += itoa((*itera)->XMLtime.second,buffer,10);
    line += "</seconde>\n    </temps>";
    text_out.push_back(line);
    while(itera != v_lines.end()){
        avg  += (*itera)->get_time();
        line  = "    <ligne>\n      <adresseip>";
        line += (*itera)->get_ip();
        line += "</adresseip>\n      <size>";
        line += itoa((*itera)->get_size(),buffer,10);
        line += "</size>\n      <time>";
        line += itoa((*itera)->get_time(),buffer,10);
        line += "</time>\n      <ttl>";
        line += itoa((*itera)->get_ttl(),buffer,10);
        line += "</ttl>\n    </ligne>";
        text_out.push_back(line);
        ++itera;
    }
    line  = "    <minimum>";
    min   = (*min_element(v_lines.begin(),v_lines.end(),objComp))->get_time();
    line += itoa(min,buffer,10);
    line += "</minimum>\n"
            "    <maximum>";
    max   = (*max_element(v_lines.begin(),v_lines.end(),objComp))->get_time();
    line += itoa(max,buffer,10);
    line += "</maximum>\n"
            "    <moyenne>";
    avg  /= v_lines.size();
    line += itoa(avg,buffer,10);
    line += "</moyenne>\n"
            "  </commande>\n"
            "</pinglog>";
    text_out.push_back(line);
}

ifstream& operator>>(ifstream& entree, Log2xml& paquet){
    short bytepos, timepos, ttlpos, lineSize;
    getline(entree,paquet.dataLine);
    if (paquet.dataLine.find("TTL") != string::npos){
        //Data Extraction
        bytepos=paquet.dataLine.find("byte");
        timepos=paquet.dataLine.find("time");
        ttlpos=paquet.dataLine.find("TTL");
        lineSize=paquet.dataLine.size();
        paquet.set_ip(paquet.dataLine.substr(11,bytepos-13));
        paquet.set_size(atoi((paquet.dataLine.substr(bytepos+6,timepos - bytepos-7)).c_str()));
        paquet.set_time(atoi((paquet.dataLine.substr(timepos+5,ttlpos  - timepos-8)).c_str()));
        paquet.set_ttl(atoi((paquet.dataLine.substr(ttlpos +4,lineSize- ttlpos +4)).c_str()));
    }
    return entree;
}

ofstream& operator<<(ofstream& sortie, vector<Log2xml*>& v_lines){
    double moyenne=0;
    vector<Log2xml*>::iterator itera=v_lines.begin();
    sortie << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" 			          << endl
           << "<pinglog>"                                 			    	  << endl
           << "  <commande>"                              			    	  << endl
           << "    <date>"                                			    	  << endl
           << "      <jour>"    << (*itera)->XMLtime.day    << "</jour>"  	  << endl
           << "      <mois>"    << (*itera)->XMLtime.month  << "</mois>" 	  << endl
           << "      <annee>"   << (*itera)->XMLtime.year   << "</annee>" 	  << endl
           << "    </date>"													  << endl
           << "    <temps>"                                                   << endl
           << "      <heure>"   << (*itera)->XMLtime.hour   << "</heure>"     << endl
           << "      <minute>"  << setfill('0') << setw(2)
                                << (*itera)->XMLtime.minute << "</minute>"    << endl
           << "      <seconde>" << setfill('0') << setw(2)
                                <<(*itera)->XMLtime.second << "</seconde>"    << endl
           << "    </temps>"                                                  << endl;
    while(itera != v_lines.end()){
        moyenne+= (*itera)->get_time();
        sortie << "    <ligne>"                                                 << endl
               << "      <adresseip>" << (*itera)->get_ip()   << "</adresseip>" << endl
               << "      <size>"      << (*itera)->get_size() << "</size>"      << endl
               << "      <time>"      << (*itera)->get_time() << "</time>"      << endl
               << "      <ttl>"       << (*itera)->get_ttl()  << "</ttl>"       << endl
               << "    </ligne>"                                                << endl;
        ++itera;
    }
    sortie << "    <minimum>"
           << (*min_element(v_lines.begin(),v_lines.end()))->get_time()
           << "</minimum>" << endl
           << "    <maximum>"
           << (*max_element(v_lines.begin(),v_lines.end()))->get_time()
           << "</maximum>" << endl
           << "    <moyenne>" << setprecision(2) << fixed
           << (moyenne)/(v_lines.size())
           << "</moyenne>" << endl
           << "  </commande>" << endl
           << "</pinglog>";
    return sortie;
}
