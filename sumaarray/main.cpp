#include <iostream>

using namespace std;
int suma(const int a[],const int n){
    int sum;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int mayor(const int a[],const int n){
    int largest;
    largest=a[0];
    for(int i=0;i<n;i++){
        if (a[i]>largest)
            largest=a[i];

    }
    return largest;
}
int menor(const int a[],const int n){
    int smallest;
    smallest=a[0];
    for(int i=0;i<n;i++){
        if (a[i]<smallest)
            smallest=a[i];

    }
    return smallest;
}
int prom( int a[], float n){
    float suma=0;

    for(int i=0;i<n;i++){
        suma+=a[i];
    }
    return suma/n;
}



int sumaR(const int a[],const int n){
        if(n==0)
            return 0;
        else
            return a[n-1]+sumaR(a,n-1);
}

int mayoR(const int a[],const int n, int mayor){
        if(n==0){
            return mayor;

        }
        else{
            if(mayor<a[n-1])
                return mayoR(a,n-1,a[n-1]);
            else
                return mayoR(a,n-1,mayor);
        }

}

int main()
{
    int res;
    int arr[4]={10,8,9,4};
    res=suma(arr,4);
    cout << "La suma es "<<res << endl;
    cout << "El mayor es "<<mayor(arr,4) << endl;
    cout << "El menor es "<<menor(arr,4) << endl;
    cout << "El promedio es "<<prom(arr,4) << endl;
    cout<<endl;
    cout << "La suma es "<<sumaR(arr,4) << endl;
    cout << "El mayor es "<<mayoR(arr,4,arr[2]) << endl;
    return 0;
}
