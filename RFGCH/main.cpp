#include <iostream>

using namespace std;

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



    int b = 100;
    int k = 0;
    int u = 2;
    while(k<b){
        while(u<k){
            if (k%u == 0 || ){
                cout << u;
                }
            u++;
        }
        k++
    }

    for (int b = 100; b=0; b--)
        for (int i = 2;i < b; i++){
            if (b%i == 0){
                cout << b << endl;
            }
        }

    return 0;
}
