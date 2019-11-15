#include <iostream>

using namespace std;

class Poligon{
   private:
    int width, height;
   public:
    Poligon():width(0),height(0) {} //Constructor sin argumentos
    Poligon(int a,int b):width(a),height(b) {}
    int area (void){return 0;}
    void printarea(){
    cout << this ->area() << "\n" ;
  }
};

class ArrayPoligons{

    Poligon *arr;
    int tam;

    void redimensionar(int t){
        Poligon *aux = new Poligon [tam=t];
        for(int i=0;i<t;i++)
            aux[i]=arr[i];
        delete [] arr;
        arr = aux;
    }

public:

    ArrayPoligons(){tam=0;arr = new Poligon [0];}
    ArrayPoligons(Poligon *a, int s){
        tam = s;
        arr = new Poligon [s];
        for(int i=0;i<tam;i++)
            arr[i]=a[i];
    }
    ArrayPoligons(ArrayPoligons &a){
        this -> tam = a.tam;
        arr = new Poligon [a.tam];
        for(int i=0;i<tam;i++)
            arr[i]=a.arr[i];
    }
    ~ArrayPoligons(){
        delete [] arr;
    }
    void insfnl(Poligon a){
        redimensionar(tam+1);
        arr[tam-1]=a;
    }
    void insertar(Poligon a,int p){
        redimensionar(tam+1);
        for(int i=tam; i>p ; i-- )
            arr[i+1]=arr[i];
        arr[p-1]=a;
    }
    void eliminar(){
        redimensionar(tam-1);
    }
    void elimp(int p){
       for(int i = p-1;i<tam; i++)
            arr[i]=arr[i+1];
        redimensionar(tam-1);
    }
};


int main()
{
    Poligon a(4,5);
    Poligon b(6,5);
    Poligon c[2] = {a,b};
    ArrayPoligons h(c,2);
    ArrayPoligons r = h;
    Poligon t(7,6);
    h.insertar(t,3);
    h.elimp(2);
    return 0;
}
