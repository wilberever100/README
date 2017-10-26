#ifndef INTEGER_H
#define INTEGER_H
#include <iostream>
using namespace std;

class Integer
{
    public:
        int val=10;
        Integer(int val=0){
        this->val=val;
        cout<<"Constructor with arg "<<val<<endl;
    //ctor
}


};

#endif // INTEGER_H
