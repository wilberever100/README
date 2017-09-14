#include <iostream>

using namespace std;

int main()
{
    long int arr[4][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    int i=0,j=0;



        while (i==0&&j<6){
            cout<< arr[i][j]<< endl;
            j=j+1;
        }
        j=j-1;
        while(j==5&&i<4){

            cout<< arr[i][j]<<endl;
            i=i+1;
        }
        i=i-1;
        while(i==3&&j!=-1){
            cout<< arr[i][j]<<endl;
            j=j-1;
        }
        j=j+1;
        while(i!=0&&j==0){
            cout<< arr[i][j]<<endl;
            i=i-1;
        }
        i=i+1;
        while(i==1&&j<5){
            cout<< arr[i][j]<<endl;
            j=j+1;
        }
        j=j-1;
        while(i==2&&j!=0){
            cout<< arr[i][j]<<endl;
            j=j-1;
        }






    return 0;
}

//Implementar un programa que imprima el contenido de un arreglo de dos dimensiones de forma espiral. Por ejemplo suponga que el arreglo contiene los siguientes valores 1-24 1-6 7-12 13-18 19-24
//La salida debe ser 1-6 12 18 24-19 13  ESPIRAl
