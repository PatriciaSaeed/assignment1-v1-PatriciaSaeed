#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED

class bird : public animal{

private :
    float wingSpan ;


public :
    bird();
    bird(float w  );
    ~bird();
    void setwingSpan();
    float getwingSpan();






};



#endif // BIRD_H_INCLUDED
