#include "elemping.hpp"

ElemPing::ElemPing(void){
    this->dataLine.assign("emptyline");
    this->ip="0.0.0.0";
    this->size=0;
    this->time=0;
    this->ttl=0;
}

ElemPing::ElemPing(string line){
    this->dataLine.assign(line);
}

ElemPing::ElemPing(const ElemPing &cp_elem){
    this->ip=cp_elem.ip;
    this->size=cp_elem.size;
    this->time=cp_elem.time;
    this->ttl=cp_elem.ttl;
    if (!this->dataLine.empty())
        this->dataLine.clear();
    this->dataLine=cp_elem.dataLine;
}

ElemPing::~ElemPing(void){
    this->dataLine.erase();
}
//Attribute's getters and setters
void ElemPing::set_size(int p_size){
    this->size=p_size;
}

void ElemPing::set_time(int p_time){
    this->time=p_time;
}

void ElemPing::set_ttl(int p_ttl){
    this->ttl=p_ttl;
}

void ElemPing::set_ip(string p_ip){
    this->ip=p_ip;
}

int ElemPing::get_size(){
    return this->size;
}

int ElemPing::get_time(){
    return this->time;
}

int ElemPing::get_ttl(){
    return this->ttl;
}

string ElemPing::get_ip(){
    return this->ip;
}
