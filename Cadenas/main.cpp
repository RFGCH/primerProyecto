#include <iostream>
#include <vector>
using namespace std;


void swit(char &a, char &b){
    char c =a;
    a = b;
    b = c;
}
int tam_cadi(char *cad){
    int tam = 0;
    while (*cad++ != '\0')
        tam++;
    return tam;
}
int tam_cadr(char *cad){
    if(*cad == '\0')
        return 0;
    return 1+ tam_cadr(++cad);
}
void invi(char *cad){
    char *pnt = cad + tam_cadi(cad)-1;
    while (cad<=pnt)
        swap(*cad++,*pnt--);
}
void invr(char *cad, int tam = 0){
    char *pnt = cad + tam_cadr(cad) - tam-1;
    if (cad >= pnt)
        return;
    swit(*cad,*pnt);
    return invr(++cad,++tam);
}
bool pali(char *cad){
    int tam = tam_cadi(cad);
    char *pnt = cad + tam-1;
    tam /= 2;
    while (tam--)
        if(*cad++ != *pnt--)
            return 0;

    return 1;
}
bool palr(char *cad,int tam = 0){
    char *pnt = cad + tam_cadi(cad) - tam - 1;
    if (tam == tam_cadi(cad))
        return true;
    if(*cad != *pnt)
        return  false;
    return palr(++cad, ++tam);
}

int main()
{

    char i[]="holaaloh";
    cout << i << endl;
    cout << palr(i);
    return 0;
}
