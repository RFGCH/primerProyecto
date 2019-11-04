#include <iostream>
#include <fstream>

using namespace std;
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
    cin >> nick;/*
    int leng = nick.length();
    if(leng > 8 || leng < 3){
        cout << "\n  ***Ingrese un nick de entre 3 a 8 de longitud***" << endl;
        return << ".";
    }
    cout << "\n   Password: ";
    cin >> pass;/*
    leng = pass.length();
    if(leng > 8 || leng < 3){
        cout << "\n  ***Ingrese un password de entre 3 a 8 de longitud***" << endl;
        return << ".";
    }*/
    while (!ingresar.eof()){
        getline(ingresar,registro);
        if(nick==registro){
            getline(ingresar,registro);
            if(pass==registro){
                system("cls");
                cout << "Ingreso..."<< endl;
                return nick;
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
void opciones(){
}
void pedido(string nick){
}
void menu(){
    system("color F0");
    bool running;
    int opcion;
    running = true;
    while(running){
        cout << "\n ------  M  C  M  ------" << endl;
        cout << "\n   1.- Ingresar" << endl;
        cout << "\n   2.- Registrarse" << endl;
        cout << "\n   3.- Opciones" << endl;
        cout << "\n   4.- Salir" << endl;
        cout << "\n   Ingresar su opcion: ";
        cin >> opcion;
        if(opcion == 1){
            system("cls");
            string a;
            a = ingresar();
            if(a != ".")
                pedido(a);
        }
        else if(opcion == 2){
            system("cls");
            registrarse();
        }
        else if(opcion == 3){
            system("cls");
            opciones();
        }
        else if(opcion == 4){
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

/*
void registrarse(){

    string nick,clave,user;
    cout << "\n\t------Registro------\n" << endl;
    cout << "Ingrese su nick: ";
    getline(cin,nick);
    cout << "Ingrese su clave: ";
    getline(cin,clave);
    nick = "users//"+nick+".txt";
    ofstream registrar(nick.c_str());
    registrar << clave;
    clave+="\n";
    registrar.close();
    cout << "Registrado con exito\n" << endl;
}



void editar(string &a,string &b){
    rename(a.c_str(),b.c_str());
}
void print(string nick){
    string asd;
    ifstream asf(nick.c_str());
    getline(asf,asd);
}
*/
int main()
{


    menu();

    return 0;
}
