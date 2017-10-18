#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include "Jugador.h"
using namespace std;

class Equipo
{
    public:

        int cantidad;
        string nombre;
        Jugador formacion[11];
        Equipo(string,int);
        void jugadores();
};

#endif // EQUIPO_Hgdb
