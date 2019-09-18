#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"

class Vector
{
public:
        Punto i,f;
        Vector();
        Vector(Punto x,Punto y);
        Vector(double x1, double y1, double x2, double y2);
        void setvaluesVEE(double x1, double y1, double x2, double y2);
        void print();
        void modificarVE(double nx, double ny);
        int modulo();

};

#endif // VECTOR_H
