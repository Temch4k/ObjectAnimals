#include <iostream>
#include "Dog.h"
#include "Fish.h"
#include "Horse.h"
#include "Lizard.h"
#include "Monkey.h"
#include "Animal.h"
#include "functions.h"

using namespace std;
int main()
{
    //creates all of our different animal objects that we call later on
    Dog dog;
    Fish fish;
    Horse horse;
    Lizard liz;
    Monkey monkey;

    //makes all of the animals to read through the file and virtual functions
    dog.readFromFile();
    fish.readFromFile();
    horse.readFromFile();
    liz.readFromFile();
    monkey.readFromFile();

    checkAnimals(dog,fish,horse,liz,monkey);

    //calls onto the functions to print out the origial animals
    cout<<"ORIGINAL ANIMALS:" <<endl;
    printAnimals(dog,fish,horse,liz,monkey);

    //calls onto the function to edit all of the animals
    editAnimals(dog,fish,horse,liz,monkey);

    //updates all of the animals
    cout<<"UPDATED ANIMALS:"<<endl;
    printAnimals(dog,fish,horse,liz,monkey);
    return 0;
}