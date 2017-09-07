#include <iostream>

using namespace std;

int main()
{
    int c,a=1, b=2, suma=0 ;

    while (b<4000000){
        if (b%2==0){
            suma=suma+b;
        }
        c=b;
        b=a+b;
        a=c;
    }
    cout << "La suma es: "<< suma << endl;
    return 0;
}

