#include "Equipo.h"
#include "Jugador.h"
Equipo::Equipo()
{

    Jugador jugador1;
    Jugador jugador2;
    Jugador jugador3;
    Jugador jugador4;
    Jugador jugador5;
    Jugador jugador6;
    Jugador jugador7;
    Jugador jugador8;
    Jugador jugador9;
    Jugador jugador10;
    Jugador jugador11;

    //ctor
}

string Equipo::jugadoresNombres(){
    for(int i=0;i<11;i++){
        conjuntonombres[i]=jugadores[i] getName();
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
