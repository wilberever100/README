#ifndef FECHA_H
#define FECHA_H
using namespace std;

class fecha
{
    protected:
    int day,month,year;
    long int meses[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    public:
        fecha();
        fecha(int dia,int mes,int anio);
        void aumentar(int dias);

};

#endif // FECHA_H
