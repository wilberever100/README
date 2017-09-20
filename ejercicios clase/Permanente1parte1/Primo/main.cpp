#include <iostream>

using namespace std;

int main()
{
    int primo,vrf=2,cont=0;
    cout << "Ingrese un nro" << endl;
    cin >> primo;
    while(cont==0&&vrf<primo){
        if (primo%vrf==0)
            cont=cont+1;
        vrf=vrf+1;

              }
    if(cont==0)
        cout << "Es primo" << endl;
    else
        cout << "No es primo" << endl;
    return 0;
}
