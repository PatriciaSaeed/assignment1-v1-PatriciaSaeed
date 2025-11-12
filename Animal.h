#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class animal {

private :
    string name ;
    int age ;
    bool isHungry ;

public :
    animal();
    animal(string n , int a , bool i );
    ~animal();
    void display();
    void feed();
    void setname ();
    string getname();
    void setage ();
    int getage();
    void setishungry ();
    bool getisHungry();







};




#endif
