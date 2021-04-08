#include "log2txt.hpp"
using namespace std;

Log2txt::Log2txt() : ElemPing(){
;}

Log2txt::~Log2txt(){
;}

Log2txt::Log2txt(string ligne) : ElemPing(ligne){
;}

Log2txt::Log2txt(Log2txt &cpy_log) : ElemPing(cpy_log){
;}

bool objComp(Log2txt* pobj1, Log2txt* pobj2){
    return (*pobj1) < (*pobj2);
}

bool operator< (Log2txt& obj1, Log2txt& obj2){
    return obj1.get_time() < obj2.get_time();
}

void Log2txt::displayvect(vector<string>& text_out, int& min, int& max, int& avg, vector<Log2txt*>& cp_lines){
    string line;
    vector<Log2txt*>::iterator itera;
    text_out.push_back("ADRESSE IP;SIZE;TIME;TTL");
    for(itera=cp_lines.begin();itera != cp_lines.end();++itera){
        avg  += (*itera)->get_time();
        line  = (*itera)->get_ip();
        line += (";");
        line += to_string((*itera)->get_size());
        line += (";");
        line += to_string((*itera)->get_time());
        line += (";");
        line += to_string((*itera)->get_ttl());
        text_out.push_back(line);
    }
    line = "MINIMUM;--;";
    min = (*min_element((cp_lines.begin()),(cp_lines.end()),objComp))->get_time();
    line += to_string(min);
    line += (";--");
    text_out.push_back(line);
    line = "MAXIMUM;--;";
    max = (*max_element((cp_lines.begin()),(cp_lines.end()),objComp))->get_time();
    line += to_string(max);
    line += (";--");
    text_out.push_back(line);
    line = "MOYENNE;--;";
    avg = avg/cp_lines.size();
    line += to_string(avg);
    line += (";--");
    text_out.push_back(line);
}

ifstream& operator>>(ifstream& entree, Log2txt& paquet){
    short bytepos, timepos, ttlpos, lineSize;
    getline(entree,paquet.dataLine);
    if (paquet.dataLine.find("TTL") != string::npos){
        bytepos=paquet.dataLine.find("byte");
        timepos=paquet.dataLine.find("time");
        ttlpos=paquet.dataLine.find("TTL");
        lineSize=paquet.dataLine.size();
        paquet.set_ip(paquet.dataLine.substr(11,bytepos-13));
        paquet.set_size(atoi((paquet.dataLine.substr(bytepos+6,timepos-bytepos-7)).c_str()));
        paquet.set_time(atoi((paquet.dataLine.substr(timepos+5,ttlpos-timepos-8)).c_str()));
        paquet.set_ttl(atoi((paquet.dataLine.substr(ttlpos+4,lineSize-ttlpos+4)).c_str()));
    }
    return entree;
}

ofstream& operator<<(ofstream& sortie, vector<Log2txt*>& v_lines){
    int moyenne=0;
    vector<Log2txt*>::iterator itera;
    sortie << "ADRESSE IP;SIZE;TIME;TTL\n";
    for(itera=v_lines.begin();itera != v_lines.end();++itera){
        moyenne+= (*itera)->get_time();
        sortie << (*itera)->get_ip()   << ";"
               << (*itera)->get_size() << ";"
               << (*itera)->get_time() << ";"
               << (*itera)->get_ttl()  << "\n";
    }
    sortie << "MINIMUM;--;"
           << (*(min_element(v_lines.begin(),v_lines.end(),objComp)))->get_time() << ";--\n"
           << "MAXIMUM;--;"
           << (*(max_element(v_lines.begin(),v_lines.end(),objComp)))->get_time() << ";--\n"
           << "MOYENNE;--;"
           << moyenne/v_lines.size() << ";--";
    return sortie;
}
