#include <iostream>

using namespace std;


 bool caracterVisceversa(char a){

    int m = static_cast<int>(a);

    if(m >= 65 && m <= 90){
        cout << "Su minuscula es: " <<  static_cast<char>(m+32) << endl;
        return true;
    }
    if(m >= 97 && m <=122){
        cout << "Su mayuscula es: " << static_cast<char>(m-32) << endl;
        return true;
    }
    return false;
}


int main()
{

    //Sexto ej
    cout <<"##Cambiar una mayuscula a minuscula y visceversa e identificar si es o no un caracter##" << endl;
    char f;
    bool g;
    cout <<"Ingrese un valor: " ;
    cin >> f;
    g = caracterVisceversa(f);
    if (!g){
        cout << "Es numero" << endl;
    }

}
