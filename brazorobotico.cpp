#include "BrazoRobotico.h"



BrazoRobotico::BrazoRobotico(double x, double y, double z,bool suje){
        this->x = x;
        this->y = y;
        this->z = z;
        this->suje = suje;
}
    double BrazoRobotico::getx(){
            return x;
    }
    double BrazoRobotico::gety(){
            return y;
    }
    double BrazoRobotico::getz(){
            return z;
    }
    bool BrazoRobotico::sisuje(){
            return suje;
    }
    void BrazoRobotico::soltar(){
            suje=false;
    }
    void BrazoRobotico::coger(){
            suje=true;
    }
    void BrazoRobotico::mover(double x_new, double y_new, double z_new){
            x += x_new;
            y += y_new;
            z += z_new;
    }
