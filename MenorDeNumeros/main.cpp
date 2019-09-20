#include <iostream>

using namespace std;



void separarDigitos(int a){
 int b = a/10000;
 int c = (a=a-(10000*b))/1000;
 int d = (a=a-(1000*c))/100;
 int e = (a=a-(100*d))/10;
 a = a-(10*e);
 cout<< b << "\t" << c << "\t" << d << "\t" << e << "\t" << a << endl;
}
int digitos(int a){
 int b=0;
  for (int i = 1;i<a;i=i*10){
   b++;
  }
  return b;
 }
bool palindromo(int a){
 int b = a/1000;
 a = a - b * 1000;
 a = a - 100 * (a/100);
 if(b%11==0 && b!=a){

  return false;
 }
 else{
    if((b+a)%11==0){
        return true;
    }
    else{
        return false;
    }
 }
}
int fibonacci(int a){
 int b;
 int c = 1;
 int d = 0;

 for(int i=1;i<=a;i++){
  b=d+c;
  d=c;
  c=b;
 }
 return c;
}
bool caracter(char a){

    int m = static_cast<int>(a);
    if(m > 47 && m < 58){
       return true;
    }
    else{
        return false;
    }
}
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

int binE(int a){

    int b = 0;
    int c = 1;
    while(a){

        int m = a;
        m = a-(a/10)*10;
        b += m*c;
        c *= 2;
        a /= 10;

    }
    return b;

}

int entB(int a){

    int b = 0;
    int c = 1;
    while(a){

        int m = a;
        m = a-(a/2)*2;
        b += m*c;
        c *= 10;
        a /= 2;

    }
    return b;

}

int main()
{
    //Primer ej
    cout << "##Separar los digitos de un numero##" << endl;
    int a;
    cout << "Ingresar un numero de 5 digitos: " ;
    cin >> a;
    separarDigitos(a);

    //Segundo ej
    cout << "##Hallar la cantidad de digitos##" << endl;
    int b;
    cout << "Ingresar un numero: " ;
    cin >> b;
    b = digitos(b);
    cout << "El numero de digitos es " << b << endl;

    //Tercer ej
    cout << "##Identificar si un numero de 5 digitos es palindromo##" << endl;
    int c;
    cout << "Ingrese un numero de 5 digitos: " ;
    cin >> c;
    c = palindromo(c);
    if (c){
        cout << "Es palindromo" << endl;
    }
    else {
        cout << "No es palindromo" << endl;
    }

    //Cuarto ej
    cout << "##Hallar el numero correspondiente en la serie de fibonacci" << endl;
    int d;
    cout << "Ingresar el numero de correspondecia en la serie de fibonacci: ";
    cin >> d;
    d = fibonacci(d);
    cout << "El numero correspondiente es " << d << endl;

    //Quinto ej
    cout <<"##Identificar si el valor ingresado es un numero##" << endl;
    int e;
    cout <<"Ingrese un valor: " ;
    cin >> e;
    if (e){
        cout << "Es numero" << endl;
    }
    else {
        cout << "No es numero" << endl;
    }

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

    //Segunda Tarea
  //Primer ejercicio
 
    int h;
    cout << "Ingrese un numero binario : ";
    cin >> h;
    int i;
    i = binE(h);
    cout << "Su entero es : " << i << endl;

  //Segundo ejercicio

    int j;
    cout << "Ingrese un numero entero : ";
    cin >> j;
    int k;
    k = entB(j);
    cout << "Su binario es : " << k << endl;

    return 0;
}
