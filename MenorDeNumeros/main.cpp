#include <iostream>

using namespace std;

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
    
    if (a > b){
        if (a > c){
            cout << a << "es el mayor";
        }
        else{
            cout << c << "es el mayor";
        }
     else{
         if (c > b){
            cout << c << "es el mayor";
         }
         else{
            cout << b << "es el mayor";
         }
             
    
    return 0;
}
