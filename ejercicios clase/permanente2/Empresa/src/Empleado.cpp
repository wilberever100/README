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
    Name = nam;
}
void Empleado::setSalary(int sal){
    Salary = sal;
}
void Empleado::setDate(int dat){
    Date = date;
}
void Empleado::setDepartamento(string dep){
    Departamento = dep;
}
