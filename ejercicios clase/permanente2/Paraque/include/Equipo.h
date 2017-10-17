#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include "Jugador.h"
class Equipo
{
    public:
        string conjuntonombres[];
        Jugador jugadores[11];
        Equipo();
        Equipo(Jugador jugador1,Jugador jugador2,Jugador jugador3,Jugador jugador4,Jugador jugador5,Jugador jugador6,Jugador jugador7,Jugador jugador8,Jugador jugador9,Jugador jugador10,Jugador jugador11);
        string jugadoresNombres();
};

#endif // EQUIPO_H
