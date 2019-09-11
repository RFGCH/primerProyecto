#include <iostream>

using namespace std;

void separarDigitos(int a){
 int b = a/10000;
 int c = (a=a-(10000*b))/1000;
 int d = (a=a-(1000*c))/100;
 int e = (a=a-(100*d))/10;
 a = a-(10*e)
 cout

int main()
{
    //Primer problema

    //int b;
    //cin >> b;
    //bool pr = true;


    //int u = 2;
    //while(u<b && pr){
    //    if (b%u == 0){
    //        pr = false;
    //        }
    //    u++;
    //}



    //for (int i = 2; (i < b) && pr ; i++){
    //    if (b%i == 0){
    //        pr = false;
    //    }
    //}


    //if (!pr){
    //    cout << "no es primo";
    //}
    //else{
    //    cout << "es primo";
    //}



    // Segundo problema



    //int b = 100;
    //int k = 0;
    //int u = 2;
    //bool pr = true;
    //while(k<b){
    //    while(u<k){
    //       if (k%u == 0){
    //            pr = false;
    //            }
    //        u++;
    //        }
    //    if (!pr){
    //        cout << k << endl;
    //        pr = true;
    //        }
    //    u = 2;
    //    k++;
    //}

    //for (b; b=0; b--)
    //    for (int i = 2;i < b; i++){
    //        if (b%i == 0){
    //            pr = true
    //            }
    //        }
    //    if (!pr){
    //       cout << b << endl;
    //        }
    //    }


    //Tercer problema
    int a;
    cin >> a;
    int b = 2;
    int c = 1;
    while (b<a){
          if(b%a == 0){
            c = c+b;
          }
          b++;
    }
    if (a==c){
       cout << "Si cumple" << endl;
       }
    


    for(int n = 2; n<a ; n++){
        if (n%a==0){
           c = c+n
        }
    if( c==a ){
        cout
    return 0;
}
