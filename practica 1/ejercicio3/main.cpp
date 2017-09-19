#include <iostream>

using namespace std;
void invertirR(int arr[],int n,int i){
    int a,b;
    a=arr[n-1];
    b=arr[i];
    arr[n-1]=b;
    arr[i]=a;
    i++;
    invertirR(arr,n-1,i);
}
int main()
{

    int arr[5]={1,2,3,4,5};
    invertirR(arr,5,0);
    for(int i=0;i<5;i++){
         cout << arr[i] << endl;
    }

}
//Recursividad de la 2
