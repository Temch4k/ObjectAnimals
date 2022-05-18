using namespace std;

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


#include "Dog.h"
#include "Lizard.h"
#include "Fish.h"
#include "Horse.h"
#include "Monkey.h"


#include "Animal.h"
#include "functions.h"

//calls the virtual functions and prints out the animals
void printAnimals(Dog dog,Fish fish, Horse horse, Lizard liz, Monkey monk)
{
    dog.print();
    cout<<endl;
    fish.print();
    cout<<endl;
    horse.print();
    cout<<endl;
    liz.print();
    cout<<endl;
    monk.print();
    cout<<endl;
}

//all of these functions with animal names edit animals like its required in the directions

//dog subtracts 10 pounds from its weight
//and if it goes under 0 then you cannot subtract weight because an animal cannot weight less than 0
void subtract10 (Dog &dog)
{
    if(dog.getWeight()-10 <=0)
    {
        cout <<"Sorry we can't subtract dog's weight, it will be smaller than 0"
               "and that's not possible"<<endl;
    }
    else
    {
        dog.setWeight(dog.getWeight()-10);
    }
}
//adds horse 1 to its height
void add1 (Horse &h)
{
    h.setHeight(h.getHeight()+1);
}
//if monkey is endangered makes it not endangered and nice versa
void changeEndangered (Monkey &m)
{
    if(!m.getEnd())
    {
        m.setEnd(true);
    }
    else if(m.getEnd())
    {
        m.setEnd(false);
    }
}
//if fish is in fresh water then changes it to fresh and vice versa
void changeFreshwater (Fish &fish)
{
    if(!fish.getFresh())
    {
        fish.setFresh(true);
    }
    else if(fish.getFresh())
    {
        fish.setFresh(false);
    }
}
//adds 1 to lizards weight
void addWeight (Lizard &liz)
{
    liz.setWeight(liz.getWeight()+1);
}
//calls all of the functions that edit animals
void editAnimals(Dog &d,Fish &f, Horse &h, Lizard &l, Monkey &m)
{
    subtract10(d);
    add1(h);
    changeEndangered(m);
    changeFreshwater(f);
    addWeight(l);
}

//checks if any of the animal info are blanks
void checkAnimals(Dog &d,Fish &f, Horse &h, Lizard &l, Monkey &m)
{
    int t=-1;
    string s="";
    //if they are blank then let the user re enter the info himself
    if((d.getWeight()==-1) || (d.getName()=="") ||(d.getBreed()=="")||(d.getAge()==-1)||(d.getColor()==""))
    {
        cout<<"Something went wrong, enter dogs weight"<<endl;
        cin>>t;
        d.setWeight(t);
        cout<<"Enter dogs name"<<endl;
        cin>>s;
        d.setName(s);
        cout<<"Enter dogs breed"<<endl;
        cin >>s ;
        d.setBreed(s);
        cout<<"Enter dogs age"<<endl;
        cin>>t;
        d.setAge(t);
        cout <<"Enter dogs color"<<endl;
        cin>>s;
        d.setColor(s);
    }
    if((f.getColor()=="") || (f.getName()=="") ||(f.getHab()==""))
    {
        cout<<"Something went wrong enter fish color"<<endl;
        cin>>s;
        f.setColor(s);
        cout<<"Enter fish name"<<endl;
        cin>>s;
        f.setName(s);
        cout<<"Enter fish habitat"<<endl;
        getline(cin,s);
        f.setHab(s);
    }
    if((h.getName()=="")||(h.getColor()=="")||(h.getAge()==-1)||(h.getHeight()==-1)||(h.getManeColor()==""))
    {
        cout<<"Something went wrong, enter horses name"<<endl;
        cin>>s;
        h.setName(s);
        cout<<"Enter horses color"<<endl;
        cin>>s;
        h.setColor(s);
        cout<<"Enter horses age"<<endl;
        cin >>t;
        h.setAge(t);
        cout<<"Enter horses height"<<endl;
        cin>>t;
        h.setHeight(t);
        cout <<"Enter horses mane color"<<endl;
        cin>>s;
        h.setManeColor(s);
    }
    if((l.getColor()=="")||(l.getName()=="")||(l.getHab()=="")||(l.getWeight()==-1))
    {
        cout <<"something went wrong, enter lizards name"<<endl;
        cin >>s;
        l.setName(s);
        cout<<"enter lizards color"<<endl;
        cin>>s;
        l.setColor(s);
        cout<<"enter lizards habitat"<<endl;
        cin >>s;
        l.setHab(s);
        cout << "enter lizards weight rounded up"<<endl;
        cin>>t;
        l.setWeight(t);
    }
    if((m.getName()=="")||(m.getColor()=="")||(m.getAge()==-1)||(m.getHome()==""))
    {
        cout <<"somethnig went wrong enter monkeys name"<<endl;
        cin >>s;
        m.setName(s);
        cout<<"enter monkeys color"<<endl;
        cin>>s;
        m.setColor(s);
        cout<<"enter monkeys age"<<endl;
        cin>>t;
        m.setAge(t);
        cout<<"enter monkeys home"<<endl;
        cin>>s;
        m.setHome(s);
    }
}