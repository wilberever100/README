#include "Empresa.h"

Empresa::Empresa()
{
    Nombre = " ";
    Tamaño = 0;
    RUC = 0;
}

Empresa::Empresa(string x, int y, int z)
{
    Nombre = x;
    Tamaño = y;
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
void Empresa::setTamaño(int tam)
{
    Tamaño = tam;
}
void Empresa::setRUC(int rc)
{
    RUC = rc;
}
