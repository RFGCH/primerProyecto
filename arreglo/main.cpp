#include <iostream>

using namespace std;

void swap(int &a,int &b){

    int c=a;
    a=b;
    b=c;

}

void print(int arr[],int t){

    while(t)
        cout << arr[--t] << endl;

}

int suma(int arr[],int t){

    int c=0;
    while(t--){
        c += arr[t];
    }
    return c;
}

int sumar(int arr[],int t){
    
    if (t==1)
        return arr[t-1];
    return arr[t-1] += sumar(arr,t-1);

}

void inv(int arr[], int t){

    for(int i=0;i<t/2;i++){
        swap(arr[--t],arr[i]);
    }
    
}

int invr(int arr[], int t,int i=0){

    int v=t/2;
    if (v==0){
        swap(arr[t-1],arr[i]);
        return 0;
    }
    invr(arr,t-1,i+1);
    return 0;


}

void burbuja(int arr[],int t){

    for (int i = 1;i<t;i++){
        for(int j = 0;j<t-i;j++){
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }

}

void insercion(int arr[],int t){

    int c,a;
    for (int i = 1; i<t;i++){
        c=arr[i];
        a=i-1;
        while(a >=0 && arr[a]>c){
            arr[a+1]=arr[a];
            a--;
        }
        arr[a+1]=c;
    }

}

int particion(int arr[],int min,int max){
    int p=arr[max];
    int i=(min-1);
    for(int j=min;j <=max-1;j++){
        if(arr[j]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[max]);
    return i+1;
}
void quicksort(int arr[],int min,int max){

    if(min < max){
        int p = particion(arr,min,max);
        quicksort(arr,min,p-1);
        quicksort(arr,p+1,max);
    }


}

int main()
{

    int arr[]={10,5,9,4,3,6,21,3,7,35,23};
    print(arr,11);
    quicksort(arr,0,11);
    print(arr,11);

    return 0;
}
