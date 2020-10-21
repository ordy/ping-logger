#ifndef LOGTIME_HPP
#define LOGTIME_HPP

#include <iostream>
#include <ctime>
//Sets the current day and time
class Logtime{
public:
    Logtime();
    ~Logtime();
    Logtime(time_t);
    Logtime(Logtime&);
    friend class Log2xml;
    friend class Xml2log;
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;
};
#endif // LOGTIME_HPP
