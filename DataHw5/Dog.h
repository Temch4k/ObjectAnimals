#ifndef DATAHW5_DOG_H
#define DATAHW5_DOG_H


#include <string>
#include "Animal.h"
using namespace std;

class Dog: public Animal{
private:
    int age=-1;
    int weight=-1;
    string breed="";

public:
    int getWeight();
    void setWeight(int w);
    int getAge();
    void setAge(int a);
    string getBreed();
    void setBreed(string c);

    void readFromFile();
    void print();
};


#endif //DATAHW5_DOG_H
