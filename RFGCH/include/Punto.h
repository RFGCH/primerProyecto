#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
public:
        double x,y;
        Punto();
        Punto(double nx,double ny);
        void setvalues(double nx, double ny);
        void print();
        void modificar(double nx, double ny);
};

#endif // PUNTO_H
