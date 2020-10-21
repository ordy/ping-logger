#ifndef XML2TXT_H
#define XML2TXT_H

#include "elemping.hpp"
//Child Class
class Xml2txt : public ElemPing{
  public:
    Xml2txt();
    ~Xml2txt();
    Xml2txt(string);
    Xml2txt(Xml2txt&);
    void todefine(){;}
    void displayvect(vector<string>&, int&, int&, int&, vector<Xml2txt*>&);
    friend bool operator< (Xml2txt&, Xml2txt&);
    friend ifstream& operator>> (ifstream&, Xml2txt&);
    friend ofstream& operator<< (ofstream&, vector<Xml2txt*>&);
};

#endif // XML2TXT_H
