#ifndef DATAHW5_HORSE_H
#define DATAHW5_HORSE_H


using namespace std;

#include "Animal.h"
class Horse :public Animal{
private:
    string maneColor="";
    int age=-1;
    int height=-1;
public:
    string getManeColor();
    int getAge();
    int getHeight();

    void setManeColor(string mc);
    void setAge(int a);
    void setHeight(int h);

    void readFromFile();
    void print();

};


#endif //DATAHW5_HORSE_H
