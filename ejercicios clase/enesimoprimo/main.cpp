#include <iostream>

using namespace std;

int main()
{
    int enesimo,primo=2,acumula, cont;
    cout << "Ingrese un nro" << endl;
    cin >> enesimo;
    while(enesimo!=0){
        cont=0;
        for(int divide=2; divide<=primo; divide=divide+1){
            if(primo%divide==0)
                cont=cont+1;
        }
        if(cont==1)
            enesimo=enesimo-1;

        primo=primo+1;


    }

    cout << primo-1 << endl;

    return 0;
}
