#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x;
    double y;
    double z;
    bool suje;

public:
    BrazoRobotico(double x, double y, double z,bool suje);
    double getx();
    double gety();
    double getz();
    bool sisuje();
    void coger();
    void soltar();
    void mover(double x_new, double y_new, double z_new);
};

#endif
