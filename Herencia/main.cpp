#include <iostream>

using namespace std;

class Edificio{

public:
    string nombre,uso;
    int pisos,habitaciones;

    Edificio(string n,int h, string u, int p):
        nombre(n),habitaciones(h),uso(u),pisos(p)
    {}
    //fun get
    string getnombre(){
        return nombre;
    }
    int gethabitaciones(){
        return habitaciones;
    }
    string getuso(){
        return uso;
    }
    int getpiso(){
        return pisos;
    }
    //fun set
    void setnombre(string a){
        nombre = a;
    }
    void sethabi(int a){
        habitaciones = a;
    }
    void setuso(string a){
        uso = a;
    }
    void setpisos(int a){
        pisos = a;
    }

};

class Hospital:public Edificio{

public:

    int ambulancias,camillas;
    string pacientes,porcmortalidad;

    Hospital(string n, int h, string u, int p, int amb, int cam, string paci, string porc):
        ambulancias(amb),camillas(cam),pacientes(paci),porcmortalidad(porc),Edificio(n,h,u,p)
    {}
protected:
    //fun get
    int getambulancias(){
        return ambulancias;
    }
    int getcamillas(){
        return camillas;
    }
    string getpacientes(){
        return pacientes;
    }
    string getporcmortalidad(){
        return porcmortalidad;
    }

    //fun set
    void setambulancias(int a){
        ambulancias = a;
    }
    void setcamillas(int a){
        camillas = a;
    }
    void setpacientes(string a){
        pacientes = a;
    }
    void setporcmort(string a){
        porcmortalidad = a;
    }

};

int main()
{
    Hospital Santafe("SantaFe",16,"Curar a quienes sufran algun malestar fisico",3,5,4,"Atendemos en traumatologia y ginecologia","El porcentaje fe mortalidad es del 8%");
    cout << Santafe.getnombre() << endl;
    return 0;
}
