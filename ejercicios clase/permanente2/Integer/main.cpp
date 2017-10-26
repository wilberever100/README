#include <iostream>
#include "Integer.h"
using namespace std;

int *getwth(){
    int *t=new int;
    *t=8;
    return t;
}
class Point {
   public:
       int x, y;
       Point(){
           x=0;y=0; cout <<"constructor invoked"<<endl;
       }
       ~Point(){
           x=0;y=0; cout <<"destructor invoked"<<endl;
       }

};
int main()
{
    /*int numItems;
    cout<<"How many items? ";
    cin>>numItems;
    int *arr=new int[numItems];
    for(int i=0;i<numItems;i++){
        cout<<"enter item "<<i<<": ";
        cin>> arr[i];
    }
    for(int i=0;i<numItems;++i){
        cout<<arr[i]<<endl;

    }
    delete[] arr;*/

    Point *p=new Point;
    delete p;
    return 0;
}
