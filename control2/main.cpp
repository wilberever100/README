#include <iostream>

using namespace std;

void invertir(int arr[],int n){

        int a,b;
        for(int i=0;i<n;i++,n--){
            a=arr[n-1];
            b=arr[i];
            arr[n-1]=b;
            arr[i]=a;
        }
        //return arr;
}



int main()
{

    int arr[5]={1,2,3,4,5};
    invertir(arr,5);
    for(int i=0;i<5;i++){
         cout << arr[i] << endl;
    }
    invertirR(arr,5);
    for(int i=0;i<5;i++){
         cout << arr[i] << endl;
    }
    return 0;
}

//Invertir el arreglo con una funci�n que reciba un arreglo de enteros y su tama�o e invierta los elementos de dicho arreglo
