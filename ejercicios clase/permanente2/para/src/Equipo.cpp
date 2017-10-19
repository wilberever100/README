#include "Equipo.h"
#include "Jugador.h"
#include <iostream>
using namespace std;
Jugador formacion[1];


Equipo::Equipo(string nom,int can)
{

    nombre=nom;
    cantidad=can;
    int i=0;
    while(i++<cantidad){
        formacion[i]=Jugador();
    }

    //ctor
}

void Equipo::jugadores(){

    int i=0;
    while(i++<cantidad){
        formacion[i].printf();
    }

}

    //dtor

/*jugador1="Gallese";
    jugador2="Zambrano";
    jugador3="El mudo";
    jugador4="Ramos";
    jugador5="Yotún";
    jugador6="Cueva";
    jugador7="Carrillo";
    jugador8="Sergio Peña";
    jugador9="Hurtado";
    jugador10="Guerrero";
    jugador11="Ruidíaz";*/
