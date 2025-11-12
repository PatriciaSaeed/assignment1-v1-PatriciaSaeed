#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class bird : public animal{

private :
    float wingSpan ;


public :
    bird();
    bird(string n , int a , bool i );
    ~bird();
    void wingSpan();
    float wingSpan();






};









#endif
