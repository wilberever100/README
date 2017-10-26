#ifndef EMPRESA_H
#define EMPRESA_H
#include "Empleado.h"
#include<string>

class Empresa
{
    string Nombre;
    int Tamaño;
    int RUC;
    };
    public:
        Empleado Empleados [3];
        Empresa();
        Empresa(string x, int y, int z);
        Empresa InsertarEmpl();
        Empresa Aumento(string p);
        void setNombre(string nom);
        void setTamaño(int tam);
        void setRUC(int rc);
        void Imprimir();
};

#endif // EMPRESA_H
