#include "Dog.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//lets the user use dogs weight
int Dog::getWeight()
{
    return weight;
}
//lets the user change dogs height
void Dog::setWeight(int w)
{
    weight = w;
}
//lets the user use animals age
int Dog::getAge()
{
    return age;
}
//lets the user change animals age
void Dog::setAge(int a)
{
    age = a;
}
//lets the user use animals breed
string Dog::getBreed()
{
    return breed;
}
//lets the user change animals breed
void Dog::setBreed(string b)
{
    breed = b;
}

//reads from file
void Dog::readFromFile()
{
    ifstream in;
    string _name="",_weight="",_color="";

    int ag=0;
    int w=0;

    string temp;

    //opens file provided by user
    in.open("Dog.csv");

    //try block to find any bugs
    try
    {
        //set up dog
        //if can't use the file
        if (!getline(in, temp)) {
            cout << "Sorry can't find the dog file";
        } else {
            string _breed="";
            string _age="";
            //takes in all of the info from file
            while (!in.eof()) {
                getline(in, _name, ',');
                getline(in, _breed, ',');
                getline(in, _age, ',');
                getline(in, _color, ',');
                getline(in, _weight);
            }
            //puts all of the file info into animals
            name=_name;
            breed=_breed;

            //chanes strings to ints
            stringstream ss(_age);

            ss >> ag;

            age=ag;
            color=_color;
            stringstream ss2(_weight);

            ss2 >> w;

            weight=w;
        }
    }
    //if something is caught then go here
    catch (...)
    {
        cout <<"Something went wrong with the dog file"<<endl;
    }
}

//prints out the dogs info
void Dog::print()
{
    cout <<"Dog's name: "<<name<<endl;
    cout <<"Dog's color: "<<color<<endl;
    cout <<"Dog's weight: "<<weight<<endl;
    cout <<"Dog's age: "<<age<<endl;
    cout <<"Dog's breed: "<<breed<<endl;
}
