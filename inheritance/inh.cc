#include "inh.h"


int main(){
    
    Base b1;
    Base b2(1,2);
    Derive d1;
    Derive d2(1,3);
    b1.printVertex();
    b2.printVertex();
    d1.printVertex();
    d2.printVertex();

    return 0;
}