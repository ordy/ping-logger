#ifndef ELEMPING_H
#define ELEMPING_H

#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

//ABSTRACT BASE CLASS
class ElemPing{
public:
    ElemPing(void);
    ElemPing(string);
    ElemPing(const ElemPing&);
    virtual ~ElemPing(void);
    string dataLine;
    //the pure virtual function
    virtual void todefine()=0;
    void set_size(int);
    void set_time(int);
    void set_ttl(int);
    void set_ip(string);
    int get_size();
    int get_time();
    int get_ttl();
    string get_ip();
protected:
    string ip;
    int size;
    int time;
    int ttl;
};

#endif // ELEMPING_H
