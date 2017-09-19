#include <iostream>

using namespace std;

int main()
{
    int suma=0, x=1;

    while (x<1000){
        if (x%3==0|x%5==0){
            suma=suma+x;
        }
        x=x+1;
    }
    cout << "La suma es: "<< suma << endl;
    return 0;
}
