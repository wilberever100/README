#ifndef EMPLEADO_H
#define EMPLEADO_H
using namespace std;


class Empleado
{
    string name;
    int salary;
    int date;
    public:
        Empleado();
        Empleado(string a,int b,int c);
        void setName(string nam);
        void setSalary(int sal);
        void setDate(int dat);
        void print();

};

#endif // EMPLEADO_H
