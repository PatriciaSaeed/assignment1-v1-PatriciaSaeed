#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
class mammal : public animal{

private :
    string furColor ;


public :
    mammal();
    mammal(string n , int a , bool i );
    ~mammal();
    void setfurColor ();
    string getfurColor();






};








#endif
