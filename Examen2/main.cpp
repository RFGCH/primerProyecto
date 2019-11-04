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
        void salarioanual(){
            cout << salario*12 << endl;
        }
        void print(){
            cout << "---"<< nombre << "---" << endl;
            cout << apellido << endl;
            cout << salario << endl;
        }

};
void cambio(Empleado *a,Empleado *b){
    Empleado *aux;
    *aux = *a;
    *a = *b;
    *b = *aux;
}
void ordenamiento(Empleado *a, int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i ; j++){
            if( a[j].getapellido() > a[j+1].getapellido()){
                cambio(a+j,a+j+1);
            }
        }
    }
}

int main()
{
    int alita;
    Empleado Paco("Paco","Ruperto",8000);
    Empleado Manolo("Manolo","Geronimo",7000);
    cout << "---Salario---" << endl ;
    cout << Paco.getsalario() << endl;
    cout << Manolo.getsalario() << endl;
    Paco.reduccion10porc();
    Manolo.reduccion10porc();
    cout << "---Reduccion del 10%---" << endl;
    cout << Paco.getsalario() << endl;
    cout << Manolo.getsalario() << endl;
    cout << "---Salario anual---" << endl;
    Paco.salarioanual();
    Manolo.salarioanual();
    Empleado a[2]={Paco,Manolo};
    a[0].print();
    a[1].print();
    ordenamiento(a,2);
    a[0].print();
    a[1].print();
    cin >> alita;

    return 0;
}
