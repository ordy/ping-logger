#include "logtime.hpp"

Logtime::Logtime(){
    struct tm* timeinfo;
    time_t rawtime;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    this->day    = timeinfo->tm_mday;
    this->month  = 1+timeinfo->tm_mon;     //porté de tm_mon est 0-11
    this->year   = 1900+timeinfo->tm_year; //année depuis 1900 et non 0
    this->hour   = timeinfo->tm_hour;
    this->minute = timeinfo->tm_min;
    this->second = timeinfo->tm_sec;
}

Logtime::~Logtime(){
    this->day    = 0;
    this->month  = 0;
    this->year   = 0;
    this->hour   = 0;
    this->minute = 0;
    this->second = 0;
}

Logtime::Logtime(time_t rawtime){
    struct tm* timestr;
    time(&rawtime);
    timestr = localtime(&rawtime);
    this->day    = timestr->tm_mday;
    this->month  = 1+(timestr->tm_mon);     //porté de tm_mon est 0-11
    this->year   = 1900+(timestr->tm_year); //année depuis 1900 et non 0
    this->hour   = timestr->tm_hour;
    this->minute = timestr->tm_min;
    this->second = timestr->tm_sec;
}

Logtime::Logtime(Logtime &cpy_time){
    cpy_time.day    = this->day;
    cpy_time.month  = this->month;
    cpy_time.year   = this->year;
    cpy_time.hour   = this->hour;
    cpy_time.minute = this->minute;
    cpy_time.second = this->second;
}
