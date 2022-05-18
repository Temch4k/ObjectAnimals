#ifndef DATAHW5_ANIMAL_H
#define DATAHW5_ANIMAL_H


using namespace std;

#include <string>

//base class for all other animal classes
class Animal{
protected:
    //variables that all other animals have too
    string name="";
    string color="";
public:
    //lets the user change any animals name
    void setName(string n)
    {
        name =n;
    }
    //lets the user change any color on any animal
    void setColor(string c)
    {
        color =c;
    }

    //lets the user use animals name
    string getName()
    {
        return name;
    }
    //lets the user get animals colors
    string getColor()
    {
        return color;
    }

    virtual void readFromFile(){};
    virtual void print(){};
};


#endif //DATAHW5_ANIMAL_H
