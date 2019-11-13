#include <iostream>

using namespace std;

class Poligon{

public:
    int width,height;
    Poligon():width(0),height(0) {}
    Poligon(int a,int b):width(a),height(b) {}
    int area (void){return 0;}
    void printarea(){
        cout << this ->area() << "\n" ;
    }
    void print(){
        cout << width << endl;
        cout << height << endl;
    }
};

class ArrayPoligons{

    int tam;

    void redimensionar(int t){
        Poligon *aux = new Poligon [t];
        for(int i=0;i<t;i++)
            aux[i]=arr[i];
        delete [] arr;
        arr = aux;
    }

public:
    Poligon *arr;

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
        tam++;
        redimensionar(tam);
        arr[tam-1]=a;
    }
    void insertar(Poligon a,int p){
        tam++;
        Poligon *aux = new Poligon [tam];
        for(int i = 0;i<tam;i++){
            if(i+1==p)
                i++;
            aux[i]=arr[i];
        }
        delete [] arr;
        arr=aux;
        aux[p-1]=a;
    }
    void
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
    cout << "Hello world!" << endl;
    return 0;
}
