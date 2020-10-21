#ifndef LOG2TXT_H
#define LOG2TXT_H

#include "elemping.hpp"
//Child Class
class Log2txt : public ElemPing{
  public:
    Log2txt();
    ~Log2txt();
    Log2txt(string);
    Log2txt(Log2txt&);
    void todefine(){;}
    void displayvect(vector<string>&, int&, int&, int&, vector<Log2txt*>&);
    friend bool operator< (Log2txt&, Log2txt&);
    friend ifstream& operator>> (ifstream&, Log2txt&);
    friend ofstream& operator<< (ofstream&, vector<Log2txt*>&);
};

#endif // LOG2TXT_H
