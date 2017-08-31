#include <iostream>

using namespace std;

int main()
{
    int n, mayor, menor;
    double acumula=0.0;
    cout << "Cuántos nros va a ingresar" << endl;
    cin >> n;
    for(int cont=0,valor;n>cont;cont=cont+1){
        cout << "Ingrese un nro" << endl;
        cin >> valor;
        acumula=acumula+valor;
        if (cont==1){
            mayor=valor;
            menor=valor;
        }
        else{
            mayor= valor>mayor? valor:mayor;
            menor= valor<menor? valor:menor;
        }
    }
    cout << "El promedio es: " << acumula/n << endl;
    cout << "El máximo es: " << mayor << endl;
    cout << "El mínimo es: " << menor << endl;
    return 0;

}
