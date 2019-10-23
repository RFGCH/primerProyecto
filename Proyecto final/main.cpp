#include <iostream>
#include <fstream>

using namespace std;

string registro(){

    string nick,pass,registro;
    cout << "Menu" << endl;
    cout << "Nick: ";
    getline(cin,nick);
    nick = "users//"+nick+".txt";

    ifstream ingresar(nick.c_str());
    if(!ingresar){
        cout << "No esta registrado" << endl;
        return "0";
    }
    else{
        bool exit = 1;
        while(exit){

            cout << "Password: ";
            getline(cin,pass);
            getline(ingresar,registro);
            if(registro == pass){
                cout << "Ingreasando..." << endl;
                return nick;
            }
            if(pass == "0"){
                exit = 0;
                return "0";
            }
            cout << "Su clave es errada" << endl;

        }
    }

}
void registrarse(){

    string nick,clave,user;
    cout << "Ingrese su nick: ";
    getline(cin,nick);
    cout << "Ingrese su clave: ";
    getline(cin,clave);
    nick = "users//"+nick+".txt";
    ofstream registrar(nick.c_str());
    registrar << clave;
    registrar.close();

}

int main()
{
    //ofstream f("Registro.txt");
    //f << "hola mundo" << endl;
   //f << "asfxvag"<< endl;
    //f << "he there"<< endl;
    //f.close();
    //cout << "Dime el nombre del fichero: ";
    //string nombre;
    //getline(cin, nombre);

    //ifstream fichero(nombre.c_str());
    //string linea;
    //int x = 1;
    //while (x--)
    //getline(fichero,linea);
    //cout << "Se ha leido: " << endl;
    //cout << linea << endl;
    //fichero.close();

    registro();
    registrarse();


    return 0;
}
