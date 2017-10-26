#include "Departamento.h"
#include "Empleado.h"
Departamento::Departamento()
{
    a = " ";
}

Departamento::Departamento(string g)
{
    a = g;
}
Departamento::Aumentar(string s)
{
    if(s = a){
        setSalary(sal+1);
    }
}
