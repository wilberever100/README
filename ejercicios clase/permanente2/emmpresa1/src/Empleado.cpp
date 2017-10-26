#include "Empleado.h"

Empleado::Empleado()
{
    name = " ";
    salary = 0;
    date = 0;
}

Empleado::Empleado(string a,int b,int c)
{
    name = a;
    salary = b;
    date = c;
}
void Empleado::setName(string nam){
    name = nam;
}
void Empleado::setSalary(int sal){
    salary = sal;
}
void Empleado::setDate(int dat){
   date = date;
}
void Empleado::setDepartamento(string dep){
    departamento = dep;
}
