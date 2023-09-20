#include<iostream>
#include "BrazoRobotico.h"


int main(){
        BrazoRobotico Brazo(0.0,0.0,0.0,false);
        Brazo.mover(45.9,23.18,5.0);
        Brazo.coger();
        return 0;
}
