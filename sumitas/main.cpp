#include <iostream>

using namespace std;

int main()
{
    int primo,cont;
    cont=0;
    cout << "Ingrese un nro" << endl;
    cin >> primo;
	for(int verif=2; cont<=0 && primo>verif; verif=verif+1)
        if(primo%verif==0)
            cont=cont+1;
    if (cont>0)
        cout << "No es primo" << endl;
    else
        cout << "Es primo" << endl;
    return 0;
}
