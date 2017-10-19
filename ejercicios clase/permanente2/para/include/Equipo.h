#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include "Jugador.h"
#include <iostream>
using namespace std;

class Equipo
{

    public:
        int cantidad;
        string nombre;

        Equipo(string,int);
        void jugadores();
};

#endif // EQUIPO_Hgdb
