#include "Jugador.h"
#include <iostream>
using namespace std;
Jugador::Jugador()
{
    Name="Pepito";
    Number=999;
    Position="Aguatero";
    Agressivity=0;
    //ctor
}


Jugador::Jugador(string x,int y,string z,int a)
{
    Name=x;
    Number=y;
    Position=z;
    Agressivity=a;
    //dtor
}
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
