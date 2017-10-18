#include "Complejo.h"
#include <iostream>
using namespace std;

Complejo::Complejo()
{
    R=0;
    I=0;
}

Complejo::Complejo(int x, int y)
{
    R=x;
    I=y;
}
Complejo Complejo::Sumar(Complejo J)
{
    return Complejo(R+J.R,I+J.I);
}
Complejo Complejo::Restar(Complejo J)
{
    return Complejo(R-J.R,I-J.I);

}
Complejo Complejo::Multiplicar(Complejo J)
{
    return Complejo(R*J.R-I*J.I,R*J.I+I*J.R);

}
bool Complejo::Igualdad(Complejo J)
{
    if((R=J.R)&&(I=J.I))
        return true;
    else
        return false;
}
void Complejo::ProductoEscalar(int r)
{
    R=R*r;
    I=I*r;
}
void Complejo::print()
{
    cout<<"("<<R<<","<<I<<")"<<endl;
}
