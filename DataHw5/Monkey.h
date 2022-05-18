#ifndef DATAHW5_MONEKY_H
#define DATAHW5_MONEKY_H

#include "Animal.h"
#include <string>

using namespace std;

class Monkey :public Animal{
private:
    int age=-1;
    bool wild=0;
    string home="";
    bool endangered=0;
public:
    int getAge();
    bool getWild();
    string getHome();
    bool getEnd();

    void setAge(int a);
    void setWild(bool w);
    void setHome(string h);
    void setEnd(bool e);

    void readFromFile();
    void print();

};


#endif //DATAHW5_MONEKY_H
