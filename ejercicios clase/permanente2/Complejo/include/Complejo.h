#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
    int R;
    int I;

    public:

        Complejo();
        Complejo(int x, int y);
        Complejo Sumar(Complejo J);
        Complejo Restar(Complejo J);
        Complejo Multiplicar(Complejo J);
        bool Igualdad(Complejo J);
        void ProductoEscalar(int r);
        void print();

};

#endif // COMPLEJO_H
