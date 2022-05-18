
#ifndef DATAHW5_LIZARD_H
#define DATAHW5_LIZARD_H

#include <string>
#include "Animal.h"
using namespace std;

class Lizard: public Animal {
private:
    string habitat="";
    bool protect=0;
    int weight=-1;
public:
    string getHab();
    bool getProtect();
    int getWeight();

    void setHab(string ha);
    void setProtect(bool _protect);
    void setWeight(int w);
    void readFromFile();
    void print();
};


#endif //DATAHW5_LIZARD_H
