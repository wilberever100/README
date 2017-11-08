#include "Jugador.h"
#include <iostream>
#include "Equipo.h"
using namespace std;


Jugador::Jugador()
{
    cout <<"Ingresa el nombre del jugador: ";
    cin>>Name;
    cout <<"Ingresa su dorsal: ";
    cin>>Number;
    cout <<"Ingresa su posición: ";
    cin>>Position;
    cout <<"Ingresa su agresividad: ";
    cin>>Agressivity;
    //ctor
}


/*Jugador::Jugador(string x,int y,string z,int a)
{
    Name=x;
    Number=y;
    Position=z;
    Agressivity=a;
    //dtor
}*/
void Jugador::setAgressivity(int agres){
    Agressivity=agres;
}
void Jugador::setPosition(string pos){
    Position=pos;
}
void Jugador::setName(string n){
    Name=n;
}
void Jugador::setNumber(int num){
    int Number=num;
}

void Jugador::print(){
    cout<<"El "<<Position<<" "<<Name<<" que lleva la camiseta numero "<<Number;
    if (Agressivity>5){
        cout<<" es fosforito"<< endl;
    }
    else{
        cout<<" anda calmado"<< endl;
    }
}
void Jugador::printf(){
    cout<<"Nombre: "<<Name<<endl;
    cout<<"Dorsal: "<<Number<<endl;
    cout<<"Posicion: "<<Position<<endl;
    cout<<"Agresividad: "<<Agressivity<<endl;


}
