#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
class Maquina{

  private:

    string nombre,codigo,clase;
    int datos,nro;

  public:

    Maquina(int nro){
        ifstream("Datos//maquinas");
        getline(leer,nombre);
        getline(leer,codigo);
        getline(leer,clase);
        getline(leer,datos);
    }
    //function get
    string getnombre()const{
        return nombre;
    }
    string getcodigo()const{
        return codigo;
    }
    string getclase()const{
        return clase;
    }
    string getresumen()const{
        return resumen;
    }
    string getdescripcion()const{
        return descripcion;
    }
    //function set
    void setnombre(string nombre){
       this -> nombre = nombre;
    }
    void setcodigo(string codigo){
        this -> codigo = codigo;
    }
    void setclase(string clase){
        this -> clase = clase;
    }
    void setresumen(string resumen){
        this -> resumen = resumen;
    }
    void setdescripcion(string descripcion){
        this -> descripcion = descripcion;
    }
    //function print
    void printr(){
        cout << "\n ---- " << nombre << " ---   \n"<< endl;
        cout << "\n  Tipo:    " << clase << endl;
        cout << "\n  Codigo:  " << codigo << endl;
        cout << "\n  Resumen: " << resumen << endl;
    }
    void print(){
        cout << "\n ---- " << nombre << " ---   \n"<< endl;
        cout << "\n  Tipo:    " << clase << endl;
        cout << "\n  Codigo:  " << codigo << endl;
        cout << "\n  Descripcion: " << resumen << endl;
    }
};
*/
void opciones(){
}
void pedido(string nick){
}
void Maquinas(string nick){
    ifstream leer("Datos//maquinas.txt");
    if(leer.eof()){
        cout << "No hay maquinas que mostrar" << endl;
    }
    while(!leer.eof()){
        string codigo,resumen;
        getline(leer,codigo);
        cout << "\n ---- " << codigo << " ---   \n"<< endl;
        getline(leer,resumen);
        cout << " " << resumen << "...\n" << endl;
    }
}
class Usuario{
};
void Perfil(string nick){
    ifstream leer("Datos//maquinas.txt");
    string usuario;
    while(nick != usuario){
        getline(leer,usuario);
    }
    Usuario nick();
}
void Usuarios(){
    ifstream leer("Datos//users.txt");
    while(!leer.eof()){
        string registro;
        getline(leer,registro);
        cout << "\n   Nombre: " << registro << endl;
        getline(leer,registro);
        cout << "   Puesto: " << registro << endl;
        getline(leer,registro);
    }
}
string Menu(string nick){
    bool run = true;
    while(run){
        string opc;
        cout << "\n ------  Bienvenido "  << nick << " ------" << endl;
        cout << "\n   1.-Revisar las maquinas" << endl;
        cout << "\n   2.-Revisar los usuarios" << endl;
        cout << "\n   3.-Perfil" << endl;
        cout << "\n   4.-Salir" << endl;
        cout << "\n   Ingrese su opcion: ";
        cin >> opc;
        if(opc == "1")
            Maquinas(nick);
        else if(opc == "2")
            Usuarios();
        else if(opc == "3")
            Perfil(nick);
        else if(opc == "3")
            run=false;
        else
            cout << "Reingrese un valor valido" << endl;
    }
}
string ingresar(){
    ifstream ingresar("Datos//users.txt");
    if(!ingresar){
        system("cls");
        cout << "\n  ***No se a podido acceder a el archivo users***" << endl;
        return ".";
    }
    string nick,pass,registro;

    cout << "\n ------  Ingreso  ------" << endl;
    cout << "\n   Nick: ";
    cin >> nick;
    int leng = nick.length();
    if(leng > 8 || leng < 3){
        system("cls");
        cout << "\n  ***Nick de entre 3 a 8 de longitud***" << endl;
        return ".";
    }
    cout << "\n   Password: ";
    cin >> pass;
    leng = pass.length();
    if(leng > 8 || leng < 3){
        system("cls");
        cout << "\n  ***Password de entre 3 a 8 de longitud***" << endl;
        return ".";
    }
    while (!ingresar.eof()){
        getline(ingresar,registro);
        if(nick==registro){
            getline(ingresar,registro);
            if(pass==registro){
                system("cls");
                cout << "Ingreso..."<< endl;
                Menu(nick);
            }
            system("cls");
            cout << "Contraseña incorrecta" << endl;
            return ".";
        }
        getline(ingresar,registro);
    }
    system("cls");
    cout << "Usted no esta registrado" << endl;
    return ".";

    ingresar.close();

}
void registrarse(){
    ifstream leer("Datos//users.txt");
    ofstream registrar("Datos//aux.txt");
    if(!leer){
        system("cls");
        cout << "\n  ***No se a podido acceder a el archivo users***" << endl;
        return;
    }
    string nick,pass,registro;
    cout << "\n ------  Registro  -----" << endl;
    cout << "\n   *Presionar 1 para ir al menu*" << endl;
    cout << "   *Presionar 2 para continuar*\n" << endl;
    cout << "   ";
    string ingreso;
    cin >> ingreso;
    if (ingreso=="1"){system("cls");return;}
    cout << "\n   Nick: ";
    cin >> nick;
    cout << "\n   Password: ";
    cin >> pass;
    cout << (!leer.eof());
    while (!leer.eof()){
        getline(leer,registro);
        if(nick==registro){
                system("cls");
            cout << "\n  ***El nombre de usuario ya esta registrado***"<< endl;
            return registrarse();
        }
    }
    while (!leer.eof()){
        getline(leer,registro);
        registrar << registro;
    }
}
void bienvenido(){
    system("color F0");
    bool running;
    string opcion;
    running = true;
    while(running){
        cout << "\n ------  M  C  M  ------" << endl;
        cout << "\n   1.- Ingresar" << endl;
        cout << "\n   2.- Registrarse" << endl;
        cout << "\n   3.- Opciones" << endl;
        cout << "\n   4.- Salir" << endl;
        cout << "\n   Ingresar su opcion: ";
        cin >> opcion;
        if(opcion == "1"){
            system("cls");
            string a;
            a = ingresar();
            if(a != ".")
                pedido(a);
        }
        else if(opcion == "2"){
            system("cls");
            registrarse();
        }
        else if(opcion == "3"){
            system("cls");
            opciones();
        }
        else if(opcion == "4"){
            system("cls");
            cout << "Gracias por usar MCM" << endl;
            running = false;
        }
        else{
            system("cls");
            cout << "***Reingrese una opcion valida de entre 1 y 4***" << endl;
        }
    }
}


int main()
{

    bienvenido();

    return 0;
}
