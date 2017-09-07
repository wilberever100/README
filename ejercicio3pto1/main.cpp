#include <iostream>

using namespace std;

int main()
{
    int nro=600851475143, vrf=2,divide=2,mayor;
    for(int x=2;x<nro;x=x+1){
        if (nro%x==0){
            bool primo=true;
            for(int y=2;y<x;y=y+1){
                if (x%y){
                    primo=false;
                    break;
                }
            }
            if (primo)
                mayor=x;
        }
    }

    cout << mayor << endl;
    return 0;
}
