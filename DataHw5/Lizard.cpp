#include "Lizard.h"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

//lets the user use lizards habitat
string Lizard::getHab()
{
    return habitat;
}
//lets the user use lizards status of protection
bool Lizard::getProtect()
{
    return protect;
}
//lets the user user lizards weight
int Lizard::getWeight()
{
    return weight;
}
//lets the user change lizards weight
void Lizard::setWeight(int w)
{
    weight =w;
}
//lets the user set lizards habitat
void Lizard::setHab(string ha)
{
    habitat = ha;
}
//lets the user change its protection status
void Lizard::setProtect(bool _protect)
{
    protect=_protect;
}

//reads in all of the usefull info from the given file
void Lizard::readFromFile()
{
    //makes an infile stream
    ifstream in2;
    //opens the file
    in2.open("Lizard.csv");
    //initializes all of the varialbles
    string temp="";
    string _name="";
    string _color="";
    string _weight="";
    string _habitat="";
    string _protect="";
    int w=-1;

    //if something goes wrong then try
    try {
        //SET UP LIZARD
        //reads in the first line of the file and if the file cannot be found then prints out that it cant //fine the file
        if (!getline(in2, temp)) {
            cout << "Sorry can't find the lizard file";
        } else {
            //takes in all of the info from the file
            while (!in2.eof()) {
                getline(in2, _name, ',');
                getline(in2, _color, ',');
                getline(in2, _habitat, ',');
                getline(in2, _protect, ',');
                getline(in2, _weight);
                break;
            }
            //puts in all of the info into the lizard
            name=_name;
            color=_color;
            habitat=_habitat;

            //turns a string into a bool
            if (_protect == "FALSE") {
                protect= false;
            } else
                protect= true;

            //turns string into int
            stringstream ss3(_weight);

            ss3 >> w;

            weight=w;

        }
    }
    //if something goes wrong then the code goes here
    catch (...)
    {
        cout << "Something went wrong with the lizard file" << endl;
    }
}

//prints out lizards info and turns bool into yes or no strings
void Lizard::print()
{
    cout<<"Lizard's name: "<<name<<endl;
    cout<<"Lizard's color: "<<color<<endl;
    cout<<"Lizard's habitat: "<<habitat<<endl;
    cout<<"Lizard's protected?: ";
    if(protect)
    {
        cout <<"Yes"<<endl;
    } else{
        cout<<"no"<<endl;
    }
    cout<<"Lizard's weight: "<<weight<<endl;
}