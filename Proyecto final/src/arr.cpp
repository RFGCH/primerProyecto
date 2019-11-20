#include "arr.h"

template <class T>
arr<T>::arr()
{
    tam=0;arr = new T [0];
}
template<class T>
arr<T>::arr(T *a, int s){
    tam = s;
    arr = new T [s];
    for(int i=0;i<tam;i++)
        arr[i]=a[i];
}
template<class T>
arr<T>::~arr()
{
        delete [] arr;
}
template<class T>
void arr<T>::size_arr(int t){
    T *aux = new T [tam=t];
    for(int i=0;i<t;i++)
        aux[i]=arr[i];
    delete [] arr;
    arr = aux;
}
template<class T>
void arr<T>::insertar(T a,int p = tam+1){
    size_arr(tam+1);
    for(int i=tam; i>p ; i--)
        arr[i+1]=arr[i];
    arr[p-1]=a;
}
template<class T>
void arr<T>::elimp(int p = tam+1){
    for(int i = p-1;i<tam; i++)
        arr[i]=arr[i+1];
    size_arr(tam-1);
}
