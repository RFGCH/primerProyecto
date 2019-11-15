#include "Persona.h"


Persona::Persona(string nombre,string pass):
    nombre(nombre),pass(pass){}

string Persona::getnombre(){
    return nombre;
}
string Persona::getpass(){
    return pass;
}
void Persona::setpass(string pass){
    this -> pass = pass;
}
void Persona::setnombre(string nombre){
    this -> nombre = nombre;
}
