#include <iostream>
#include "Complejo.h"
using namespace std;

int main()
{
    Complejo x(1,3);
    Complejo y(2,4);
    Complejo z;
    z=x+y;
    z.print();
    return 0;
}
