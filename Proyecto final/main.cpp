#include <iostream>
#include <fstream>

using namespace std;

string registro(){

    string nick,pass,registro;
    cout << "\n\t-------Ingreso------\n" << endl;
    cout << "Nick: ";
    getline(cin,nick);
    nick = "users//"+nick+".txt";

    ifstream ingresar(nick.c_str());
    if(!ingresar){
        cout << "No esta registrado\n" << endl;
        return "0";
    }
    else{
        bool exit = 1;
        while(exit){

            cout << "Password: ";
            getline(cin,pass);
            getline(ingresar,registro);
            if(registro == pass){
                cout << "Ingreasando...\n" << endl;
                return nick;
            }
            if(pass == "0"){
                exit = 0;
                return "0";
            }
            cout << "Su clave es errada\n" << endl;

        }
    }

}
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
int main()
{


    registro();
    registrarse();

    return 0;
}
