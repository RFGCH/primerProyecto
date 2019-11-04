#include <iostream>

using namespace std;
class Empleado{
    private:
        string nombre,apellido;
        double salario;
    public:
        Empleado(){
            nombre = ".";
            apellido = ".";
            salario = 0;
        }
        Empleado(string nombre, string apellido, double salario){
            this -> nombre = nombre;
            this -> apellido = apellido;
            if(salario < 0)
                salario = 0;
            this -> salario = salario;
        }
        //Funciones get
        string getnombre(){
            return nombre;
        }
        string getapellido(){
            return apellido;
        }
        double getsalario(){
            return salario;
        }
        void reduccion10porc(){
            salario -= salario/10;
        }
        int salarioanual(){
            int aux = salario*12;
            return aux;
        }
        void print(){
            cout << "\n---"<< nombre << "---\n" << endl;
            cout << apellido << endl;
            cout << salario << endl;
        }

};
void cambio(Empleado a,Empleado b){
    Empleado aux;
    aux = a;
    a = b;
    b = aux;
}
void burbuja(Empleado *arr,int t){
    for(int i=1;i<t;i++){
        int c=0;
        Empleado *pnt=arr+1;
        for(int j=0;j<t-i;j++){
            if(arr->getapellido() > pnt->getapellido())
                swap(*arr,*pnt);
            arr++;
            pnt++;
            c++;
        }
        arr-=c;
    }
}

int main()
{
    cout << "\nExame 1." << endl;
    cout << "\n1)Empleado" << endl;
    cout << "\nDeclarando un empleado sin argumentos" << endl;
    Empleado Roberto;
    Roberto.print();
    cout << "\nDeclarando dos empleados con argumentos" << endl;
    Empleado Joseph("Joseph","Ancofk",8000);
    Empleado Ricardo("Ricardo","Betmhefr",9000);
    Joseph.print();
    Ricardo.print();
    cout << "\nSea el empleado Joseph: " << endl;
    cout << "\nSu nombre es: ";
    cout << Joseph.getnombre() << endl;
    cout << "Su apellido es: ";
    cout << Joseph.getapellido() << endl;
    cout << "Su salario es: ";
    cout << Joseph.getsalario() << endl;
    cout << "\nAutoajuste de un empleado con salario negativo" << endl;
    int salario_negativo = -1234;
    Empleado Hidalgo("Hidalgo","Cristous",salario_negativo);
    Hidalgo.print();
    cout << "\nMostrando el salario anual de Joseph y Ricardo: " << endl;
    cout << "\n--Joseph--\n" << endl;
    cout << Joseph.salarioanual() << endl;
    cout << "\n--Ricardo--\n" << endl;
    cout << Ricardo.salarioanual() << endl;
    cout << "\nBajando el sueldo en 10% a Joseph y Ricardo\n" << endl;
    Joseph.reduccion10porc();
    Ricardo.reduccion10porc();
    cout << Joseph.getsalario() << endl;
    cout << Ricardo.getsalario() << endl;
    cout << "\nSalario aunal de todos los empleados: " << endl;
    cout << "\nDe Joseph: ";
    cout << Joseph.salarioanual() << endl;
    cout << "De Ricardo: ";
    cout << Ricardo.salarioanual() << endl;
    cout << "De Roberto: ";
    cout << Roberto.salarioanual() << endl;
    cout << "De Hidalgo: ";
    cout << Hidalgo.salarioanual() << endl;
    cout << "2)Algoritmo de ordenamiento" << endl;
    cout << "\nUsando el algoritmo burbuja" << endl;
    cout << "-----Antes-----" << endl;
    Empleado a[4]={Ricardo,Joseph,Roberto,Hidalgo};
    for(int i=0;i<4;i++){
        a[i].print();
    }
    cout << "-----Despues-----" << endl;
    burbuja(a,4);
    for(int i=0;i<4;i++){
        a[i].print();
    }
    return 0;
}
