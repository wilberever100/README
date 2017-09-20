#include <iostream>

using namespace std;

int sumaptr(int *ptr,int len){
    int y=0;
    for(int i=0;i<len;i++){
        y+=*(ptr+i);

    }
    cout<<y<<endl<<endl;
}
int conta(char arr[]){
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    return len;
}
int contaptr(char *ptr){
    int len=0;
    for(int i=0;*(ptr+i)!='\0';i++){
        len++;
    }
    return len;
}
int dimension(char *ptr){
    k=ptr;
    for(;*ptr!='\0';)
        ptr++;
    ptr-k;
    }

int main()
{
    char str[]="ciencia";
    char *ptr;
    ptr=str;
    int a[]={1,2,3,4,5};
    /*int *ptr=&a[0];
    for(int i=0;i<=4;i++){
        cout<<*(ptr+i)<<endl;
    }

    sumaptr(ptr,5);*/
    cout<<contaptr(ptr)<<endl<<endl;
    return 0;
}
