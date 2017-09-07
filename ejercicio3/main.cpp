#include <iostream>

using namespace std;

int main()
{
    int nro=600851475143, vrf=2,divide=2,mayor,cont=0;
    bool primo=true;
    while (divide <nro){

        if(nro%divide==0){
            while(cont==0&&vrf<divide){
                if (divide%vrf==0)
                    cont=cont+1;
                vrf=vrf+1;

            }
            if(cont==0)
            mayor=divide;

        }


        vrf=2;
        cont=0;
        divide=divide+1;
    }
    cout << "El mayor divisor primo es "<< mayor << endl;
    return 0;

}
int nro=600851475143, vrf=2,divide=2,mayor;
    bool primo=true;
    while (divide <nro){

        if(nro%divide==0){
            primo=true;
            while(vrf<divide){

                if (divide%vrf==0){
                    primo=false;
                    break;
                }
                vrf =vrf+1;
            }
            if (primo==true){
                mayor=divide;
            }
        }


        vrf=2;

        divide=divide+1;
    }
