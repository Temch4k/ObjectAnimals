#ifndef DATAHW5_FISH_H
#define DATAHW5_FISH_H

using namespace std;

#include "Animal.h"

class Fish : public Animal{
private:
    bool freshWater=0;
    string habitat="";
    bool predator=0;

public:
    bool getFresh();
    void setFresh(bool f);

    string getHab();
    void setHab(string hab);

    bool getPred();
    void setPred(bool pred);

    void readFromFile();
    void print();


};


#endif //DATAHW5_FISH_H
