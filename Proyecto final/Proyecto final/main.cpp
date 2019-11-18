#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

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
    system("cls");
}

void pedido(string nick){
}
void Maquinas(string nick){
    system("cls");
    ifstream leer("Datos//maquinas.txt");
    if(leer.eof()){
        cout << "\n  ***No hay maquinas que mostrar***" << endl;
    }
    while(!leer.eof()){
        string codigo,resumen;
        getline(leer,codigo);
        cout << "\n ---- " << codigo << " ---   \n"<< endl;
        getline(leer,resumen);
        cout << " " << resumen << "...\n" << endl;
    }
    cout << "\n Ingrese cualquier tecla... ";
    string opc;
    cin >> opc;
}

void Perfil(string nick){
    ifstream leer("Datos//users.txt");
    string usuario;
    while(nick != usuario){
        getline(leer,usuario);
    }
}

void Usuarios(){
    system("cls");
    ifstream leer("Datos//users.txt");
    while(!leer.eof()){
        string registro;
        getline(leer,registro);
        cout << "\n   Nombre: " << registro << endl;
        getline(leer,registro);
        cout << "   Puesto: " << registro << endl;
        getline(leer,registro);
    }
    string opc;
    cout << "\n Ingrese cualquier tecla... ";
    cin >> opc;
}

string Menu(string nick){
    while(true){
        system("cls");
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
        else if(opc == "4"){
            system("cls");
            return ".";
        }
        else
            cout << "\n  ***Reingrese un valor valido***" << endl;
    }
}

void ingresar(){

    system("cls");
    ifstream ingresar("Datos//users.txt");

    if(!ingresar){system("cls");cout << "\n  ***No se a podido acceder a el archivo users***" << endl;return;}

    string nick,pass,registro;

    cout << "\n ------  Ingreso  ------" << endl;
    cout << "\n   Nick: ";
    cin >> nick;
    int leng = nick.length();

    if(leng > 8 || leng < 3){system("cls");cout << "\n  ***Nick de entre 3 a 8 de longitud***" << endl;return;}

    cout << "\n   Password: ";
    cin >> pass;
    leng = pass.length();

    if(leng > 8 || leng < 3){system("cls");cout << "\n  ***Password de entre 3 a 8 de longitud***" << endl;return;}

    while (!ingresar.eof()){
        getline(ingresar,registro);
        if(nick==registro){
            getline(ingresar,registro);
            getline(ingresar,registro);
            if(pass==registro){
                system("cls");
                Menu(nick);
                return;
            }
            system("cls");
            cout << "\n  ***Contraseña incorrecta***" << endl;
            return;
        }
        getline(ingresar,registro);
    }
    system("cls");
    cout << "\n  ***Usted no esta registrado***" << endl;
    return;

    ingresar.close();

}

void registrarse(){

    system("cls");
    ofstream registrar("Datos//codigofacilito.txt");
    ifstream leer("Datos//users.txt");

    if(!registrar){system("cls");cout << "\n  ***No se a podido acceder a el archivo users***" << endl;return;}

    string nick,pass,puesto,registro;

    cout << "\n ------  Registro  -----" << endl;
    cout << "\n   Nick: ";
    cin >> nick;
    cout << "\n   Puesto: ";
    cin >> puesto;
    cout << "\n   Password: ";
    cin >> pass;

    while (!leer.eof()){
        getline(leer,registro);
        if(registro==nick){
            leer.close();
            registrar.close();
            remove("Datos//codigofacilito.txt");
            system("cls");
            cout << "\n  *** El nick ya esta registrado*** " << endl;
            return;
        }
        registrar<<registro + "\n";
    }

    registrar << nick+"\n";
    registrar << puesto+"\n";
    registrar << pass;
    system("cls");

    leer.close();
    registrar.close();

    remove("Datos//users.txt");
    rename("Datos//codigofacilito.txt","Datos//users.txt");

}
void bienvenido(){
    system("color F0");
    string opcion;
    while(true){
        cout << "\n ------  M  C  M  ------" << endl;
        cout << "\n   1.- Ingresar" << endl;
        cout << "\n   2.- Registrarse" << endl;
        cout << "\n   3.- Opciones" << endl;
        cout << "\n   4.- Salir" << endl;
        cout << "\n   Ingresar su opcion: ";
        cin >> opcion;
        if(opcion == "1")
            ingresar();
        else if(opcion == "2")
            registrarse();
        else if(opcion == "3")
            opciones();
        else if(opcion == "4"){
            system("cls");
            cout << "\n\n  Gracias por usar MCM\n" << endl;
            return;
        }
        else{
            system("cls");
            cout <<"\n  ***Reingrese una opcion valida de entre 1 y 4***" << endl;
        }
    }
}


int main()
{

    bienvenido();

    return 0;
}
