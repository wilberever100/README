#include "Equipo.h"
#include "Jugador.h"
#include <iostream>
using namespace std;

string conjuntonombres[10];
Jugador formacion[10];

Equipo::Equipo()
{

    for(int i=0;i<11;i++){
        formacion[i]=Jugador();
    }

    //ctor
}

void Equipo::jugadores(){

    for(int i=0;i<11;i++){
        formacion[i].print();
    }

}

    //dtor

/*jugador1="Gallese";
    jugador2="Zambrano";
    jugador3="El mudo";
    jugador4="Ramos";
    jugador5="Yot�n";
    jugador6="Cueva";
    jugador7="Carrillo";
    jugador8="Sergio Pe�a";
    jugador9="Hurtado";
    jugador10="Guerrero";
    jugador11="Ruid�az";*/
