#include "Empresa.h"

Empresa::Empresa()
{
    Nombre = " ";
    Tama�o = 0;
    RUC = 0;
}

Empresa::Empresa(string x, int y, int z)
{
    Nombre = x;
    Tama�o = y;
    RUC = z;
}
Empresa::Empresa InsertarEmpl()
{

}
Empresa::Empresa Aumento(string p)
{
    if(p == 0){

    }
}
void Empresa::setNombre(string nom)
{
    Nombre = nom;
}
void Empresa::setTama�o(int tam)
{
    Tama�o = tam;
}
void Empresa::setRUC(int rc)
{
    RUC = rc;
}
