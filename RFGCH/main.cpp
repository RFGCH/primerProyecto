#include <iostream>
#include "Punto.h"
#include "Vector.h"
#include "Matriz.h"

using namespace std;

int main()
{
    int a=0;
    Matriz p;
    while (a<=4){
        int x;
        int y;
        cout << "ingrese la pos en x: ";
        cin >> x;
        cout << "ingrese la pos en y: ";
        cin >> y;
        cout << endl;
        p.jugada(x,y);
        p.print();
        p.jugadaM(a);
        p.print();
        a++;
    }
    return 0;
}
