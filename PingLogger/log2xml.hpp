#ifndef LOG2XML_H
#define LOG2XML_H

#include "elemping.hpp"
#include "logtime.hpp"
//Child Class
class Log2xml : public ElemPing{
  public:
    Log2xml();
    ~Log2xml();
    Log2xml(string);
    Log2xml(Log2xml&);
    void todefine(){;}
    void displayvect(vector<string>&, int&, int&, int&, vector<Log2xml*>&);
    friend bool operator<(Log2xml&, Log2xml&);
    friend ifstream& operator>>(ifstream&, Log2xml&);
    friend ofstream& operator<<(ofstream&, vector<Log2xml*>&);
    //Composition of Logtime class
    Logtime XMLtime;
};

#endif // LOG2XML_H
