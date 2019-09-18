#ifndef MATRIZ_H
#define MATRIZ_H


class Matriz
{
    public:
        int x11,x12,x13,x21,x22,x23,x31,x32,x33;
        Matriz();
        Matriz(int a,int b, int c, int d, int e, int f, int g, int h, int i);
        void jugada (int x,int y);
        void print();
        void jugadaM (int a);
        void cambio();


};

#endif // MATRIZ_H
