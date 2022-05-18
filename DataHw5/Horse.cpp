#include <fstream>
#include <iostream>
#include <sstream>
#include "Horse.h"

//leta the user use the color of horses mane
string Horse::getManeColor()
{
    return maneColor;
}
//lets the user use horses age
int Horse::getAge()
{
    return age;
}
//lets the user use horses height
int Horse::getHeight()
{
    return height;
}
//lets the user change horses height
void Horse::setHeight(int h)
{
    height=h;
}
//lets the user change horses mane color
void Horse::setManeColor(string mc)
{
    maneColor=mc;
}
//lets the user change horses age
void Horse::setAge(int a)
{
    age=a;
}

//reads in all of the info from the horse file
void Horse::readFromFile()
{
    //make an infile stream
    ifstream in3;
    //open that file
    in3.open("Horse.csv");

    string temp,_name="",_color="",_maneColor="",_age="",_height="";
    int ag=-1,h=-1;

    //if you cannot find the file with the same name
    if(!getline(in3,temp))
    {
        cout <<"Sorry can't find the horse file";
    }
    //takes in all of the info from a file and stores it inside of the horse
    else
    {
        while(!in3.eof())
        {
            getline(in3,_name,',');
            getline(in3,_color,',');
            getline(in3,_maneColor,',');
            getline(in3,_age,',');
            getline(in3,_height);
            break;
        }

        //saves all of the read in info
        name = _name;
        color=_color;
        maneColor=_maneColor;

        //makes strings into ints
        stringstream ss(_age);

        ss>>ag;

        age=ag;
        stringstream ss2(_height);

        ss2>>h;

       height=h;
    }
}

//prints out all of the horses new values
void Horse::print()
{
    cout<<"Horse's name: "<<name <<endl;
    cout<<"Horse's color: "<<color<<endl;
    cout<<"Horse's mane color: "<<maneColor<<endl;
    cout<<"Horse's age: "<<age<<endl;
    cout<<"Horse's height: "<<height<<endl;
}