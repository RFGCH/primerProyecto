#include "Matriz.h"
#include <iostream>

using namespace std;

Matriz::Matriz(){
   x11=0;
   x12=0;
   x13=0;
   x21=0;
   x22=0;
   x23=0;
   x31=0;
   x32=0;
   x33=0;
}

Matriz::Matriz(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
   x11=a;
   x12=b;
   x13=c;
   x21=d;
   x22=e;
   x23=f;
   x31=g;
   x32=h;
   x33=i;
}

void Matriz::print(){
    cout << x11 << " | " << x12 << " | " << x13 << endl;
    cout << "----------" << endl;
    cout << x21 << " | " << x22 << " | " << x23 << endl;
    cout << "----------" << endl;
    cout << x31 << " | " << x32 << " | " << x33 << endl;
    cout << endl;
}

void Matriz::jugada(int x,int y){
    if (x==1 && y==1)
        x11=1;
    if (x==1 && y==2)
        x12=1;
    if (x==1 && y==3)
        x13=1;
    if (x==2 && y==1)
        x21=1;
    if (x==2 && y==2)
        x22=1;
    if (x==2 && y==3)
        x23=1;
    if (x==3 && y==1)
        x31=1;
    if (x==3 && y==2)
        x32=1;
    if (x==3 && y==3)
        x33=1;
}

void Matriz::jugadaM(int a){
    if (a==0){
        if(x11){
            x13=2;
        }
        else{
            x11=2;
        }
    }
    if(a==1){
        if(x11==2){
            x22 = 2;
        }
        else{
            x33=2;
        }
    }
}
