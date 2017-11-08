#ifndef EMPRESA_H
#define EMPRESA_H
#include "Empleado.h"
#include "Departamento.h"

#include<string>

class Empresa
{
        string Nombre;
        int Tamanio;
        int RUC;
    protected:
        int departamentos;
    public:
        enum group{
            logistica,recursoshumanos,marketing,ingenieria
        };
        Empleado Empleados [3];
        Empresa();
        Empresa(string x, int y, int z);
        Empresa InsertarEmpl();
        Empresa Aumento(string p);
        void setNombre(string nom);
        void setTamanio(int tam);
        void setRUC(int rc);
        void Imprimir();
};

#endif // EMPRESA_H
