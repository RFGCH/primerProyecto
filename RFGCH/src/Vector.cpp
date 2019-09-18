#include "Vector.h"
#include "Punto.h"
#include <iostream>
#include <math.h>


using namespace std;

Vector::Vector(){
}


Vector::Vector(Punto x, Punto y){
    i=x;
    f=y;
}


Vector::Vector(double x1, double y1, double x2, double y2){
    i.setvalues(x1, y1);
    f.setvalues(x2, y2);
}

void Vector::setvaluesVEE(double x1, double y1, double x2, double y2){
    i.setvalues(x1, y1);
    f.setvalues(x2, y2);
}

int Vector::modulo(){
   return sqrt( (f.x-i.x)*(f.x-i.x) + (f.y-i.y)*(f.y-i.y));
}

void Vector::print(){
    i.print();
    cout << " -> " ;
    f.print();
    cout << endl;
}

void Vector::modificarVE(double nx, double ny){
    i.modificar(nx,ny);
    f.modificar(nx,ny);
}
