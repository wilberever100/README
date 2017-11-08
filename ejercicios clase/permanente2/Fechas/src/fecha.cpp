#include "fecha.h"
#include <iostream>
using namespace std;
fecha::fecha(int dia,int mes,int anio)
{
    day=dia;
    month=mes;
    year=anio;

    if(day>0&&day<=meses[month]&&month<=12){
        if(year%4==0&&(year%100!=0||year%400==0)){
            meses[2]=29;
            cout<<"Es un año bisiesto "<<endl;
        }
        else
            cout<<"No es un año bisiesto "<<endl;
    }
    else{
        cout<<"No es una fecha válida "<<endl;
    }


    //ctor
}

void fecha::aumentar(int dias)
{

    if((dias+day)<=meses[month])
        day= day+dias;
    else{
        while((dias+day)>=meses[month]){
            int resto;
            resto=meses[month]-day;
            dias=dias-resto;
            day=dias;
            dias=0;
            if (month<12)

                month=month+1;
            else
                month=1;
                year=year+1;
        }
    }

    cout<<"ahora la fecha es "<<day<<"/"<<month<<"/"<<year<<endl;
    //dtor
}
