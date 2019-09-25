#include <iostream>

using namespace std;

void swap(int &a,int &b){

    int c=a;
    a=b;
    b=c;

}

void print(int arr[],int t){

    while(t--)
        cout << arr[t] << endl;

}

int suma(int arr[],int t){

    int c=0;
    while(t--)
        c += arr[t];
    return c;

}

int sumar(int arr[],int t){

    if (t==1)
        return arr[t-1];
    return arr[t-1] += sumar(arr,t-1);

}

void inv(int arr[], int t){

    for(int i=0;i<t/2;i++)
        swap(arr[--t],arr[i]);

}

void invr(int arr[], int t,int i=0){

    if (!(t/2))
        return swap(arr[t-1],arr[i]);
    return invr(arr,t-1,i+1);

}

void burbuja(int arr[],int t){

    for(int i=1;i<t;i++)
        for(int j=0;j<t-i;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);

}

void insercion(int arr[],int t){

    int c,a;
    for(int i=1;i<t;i++){
        c=arr[i];
        a=i-1;
        while(a>=0 && arr[a]>c)
            arr[a+1]=arr[a--];
        arr[a+1]=c;
    }

}

int particion(int arr[],int max,int min){

    int p=arr[max];
    int i=min-1;

    for(int j=i+1;j<=max-1;j++)
        if(arr[j]<p)
            swap(arr[++i],arr[j]);

    swap(arr[i+1],arr[max]);
    return i+1;

}

void quicksort(int arr[],int max,int min = 0){

    if(min < max){
        int p = particion(arr,max,min);
        quicksort(arr,p-1,min);
        quicksort(arr,max,p+1);
    }

}

int main()
{

    int arr[]={10,5,9,3,2,4};
    print(arr,6);
    insercion(arr,6);
    print(arr,6);
    return 0;
}
