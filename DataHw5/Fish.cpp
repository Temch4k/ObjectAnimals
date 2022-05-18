#include <fstream>
#include <iostream>
#include <sstream>
#include "Fish.h"

using namespace std;
//lets the user see if fish lives in fresh water
bool Fish::getFresh()
{
    return freshWater;
}
//lets the user change waters status
void Fish::setFresh(bool f)
{
    freshWater =f;
}
//lets the user use fishs habitat
string Fish::getHab()
{
    return habitat;
}
//lets the user change fishs habitat
void Fish::setHab(string hab)
{
    habitat=hab;
}
//lets the user use if the fish is a predator or not
bool Fish::getPred()
{
    return predator;
}
//lets the user change predator status
void Fish::setPred(bool pred)
{
    predator=pred;
}

//lets the user read in info from a file
void Fish::readFromFile()
{
    ifstream in3;
    in3.open("Fish.csv");

    string temp,_name="",_color="",_habitat="",_predator="",_where="";

    //takes in the first part of the file
    //SETUP FISH
    if(!getline(in3,temp))
    {
        cout <<"Sorry can't find the fish file";
    }
    else
    {
        //reads in all of the info from a file
        while(!in3.eof())
        {
            getline(in3,_name,',');
            getline(in3,_color,',');
            getline(in3,_habitat,',');
            getline(in3,_where,',');
            getline(in3,_predator);
            break;
        }
        //sets all of that info into our fish
        name = _name;
        color = _color;

        //converts string into bool
        if(_habitat == "FALSE")
        {
            freshWater = false;
        }
        else
            freshWater = true;

        habitat = _where;

        //converts string into bool
        if(_predator=="FALSE")
        {
            predator= false;
        } else
            predator= true;
    }
}

//prints out all of the fish's info
//also converts bool's true or false into yes or no
void Fish::print()
{
    cout<<"Fish's name: "<<name<<endl;
    cout<<"Fish's color: "<<color<<endl;
    cout<<"Fish's fresh water? ";
    if(freshWater)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout <<"no"<<endl;
    }
    cout<<"Fish's habitat: "<<habitat<<endl;
    cout<<"Fish a predator?";
    if(predator)
    {
        cout <<"Yes"<<endl;
    }
    else
    {
        cout <<"no"<<endl;
    }
}