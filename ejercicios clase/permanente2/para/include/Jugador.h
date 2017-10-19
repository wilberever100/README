#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "Equipo.h"
using namespace std;

class Jugador
{
    public:
        string Name, Position;
        int Number, Agressivity;

        Jugador();
        Jugador(string x, int y, string z, int a);
        void setName(string n);
        void setPosition(string pos);
        void setNumber(int numr);
        void setAgressivity(int agres);
        string getName();
        void print();
        void printf();



};

#endif // JUGADOR_H
