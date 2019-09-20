#include <iostream>

using namespace std;
int divisores(){
    a = 1000000;
    int c=0;
    while(a){
        if (a%5 || a%3){
            c+= a
        }     
        a--;
    }
return c;
}

int main()
{
    int a;
    cout << "Ingrese su primer numero a comparar:";
    cin >> a;
    
    int b;
    cout << "Ingrese su segundo numero a comparar:";
    cin >> b;
    
    int c;
    cout << "Ingrese su tercer numero a comparar:";
    cin >> c;
    
    if (a < b){
        if (a < c){
            cout << a << "es el menor";
        }
        else{
            cout << c << "es el menor";
        }
     else{
         if (c < b){
            cout << c << "es el menor";
         }
         else{
            cout << b << "es el menor";
         }
             
    
    return 0;
}
