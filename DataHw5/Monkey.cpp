#include "Monkey.h"

using namespace std;

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

//lets the user use monkeys age
int Monkey::getAge()
{
    return age;
}
//lets the user use monkeys wild status
bool Monkey::getWild()
{
    return wild;
}
//lets the user use monkeys home place
string Monkey::getHome()
{
    return home;
}
//lets the user see if the monkey is endangered
bool Monkey::getEnd()
{
    return endangered;
}
//lets the user change monkeys endangered status
void Monkey::setEnd(bool e)
{
    endangered=e;
}
//lets the user change monkeys home
void Monkey::setHome(string h)
{
    h=home;
}
//lets the user change if monkey is wild or not
void Monkey::setWild(bool w)
{
    wild =w;
}
//lets the user change monkeys age
void Monkey::setAge(int a)
{
    age=a;
}

//reads in all of the info from a monkey file
void Monkey::readFromFile()
{
    //makes the infile stream
    ifstream in3;
    //opens the monkey document
    in3.open("Monkey.csv");

    string temp,_name="",_color="",_age="",_wild="",_home="",_endangered="";
    int ag=-1;

    //takes in the first line of the file and checks if the file is there
    if(!getline(in3,temp))
    {
        cout <<"Sorry can't find the monkey file";
    }
    else
    {
        //until the end of the file read info
        while(!in3.eof())
        {
            getline(in3,_name,',');
            getline(in3,_color,',');
            getline(in3,_age,',');
            getline(in3,_wild,',');
            getline(in3,_home,',');
            getline(in3,_endangered);
            break;
        }
        //puts file info into monkey class
        name =_name;
        color=_color;

        //turns strings into ints
        stringstream ss(_age);

        ss>>ag;

        age=ag;

        //turns string into bool
        if(_wild=="FALSE" || "f" || "false" || "F")
        {
            wild= false;
        }
        else
        {
            wild = true;
        }

        home =_home;

        if(_wild=="FALSE" || "f" || "false" || "F")
        {
            endangered= false;
        }
        else
        {
            endangered= true;
        }

    }
}

//prints out all of the monkey info
void Monkey::print()
{
    cout<<"Monkey's name: "<<name <<endl;
    cout<<"Monkey's color: "<<color<<endl;
    cout<<"Monkey's age: "<<age<<endl;
    cout<<"Monkey's wild?: ";
    if(wild)
    {
        cout <<"Yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    cout<<"Monkey's home: "<<home<<endl;
    cout<<"Monkey's endangered?: ";
    if(endangered)
    {
        cout<<"Yes!"<<endl;
    }
    else
        cout<<"no"<<endl;
}