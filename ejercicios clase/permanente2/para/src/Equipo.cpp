#include "Equipo.h"
#include "Jugador.h"
#include <iostream>
using namespace std;



Equipo::Equipo(string nom,int can)
{
    nombre=nom;
    cantidad=can;
    for(int i=0;i<cantidad;i++){
        formacion[i]=Jugador();
    }

    //ctor
}

void Equipo::jugadores(){

    for(int i=0;i<cantidad;i++){
        formacion[i].print();
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
