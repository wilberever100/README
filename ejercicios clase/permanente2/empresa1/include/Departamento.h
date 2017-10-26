#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Empleado.h"
#include "Empresa.h"
#include <string>
#include <iostream>
using namespace std;

class Departamento
{
    public:

        string a;
        int s;
        Departamento();
        Departamento(string a);
        void Aumentar(int s);

};

#endif // DEPARTAMENTO_H
