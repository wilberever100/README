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


int len(char *ptr){
    char *prim=ptr;
    while(*ptr!='\0'){
        ptr++;
    }
    return ptr-prim;
}
void strcpy(char *s,char *t){
    int i;
    i=0;
    while(*(s+i)=*(t+i)!='\0')
        i++;
}
void ptrcpy(char *s,char *t){
    while((*s++ = *t++));
}

int main()
{
    char str[]="ciencia";

    char *ptr;
    char pa[10];
    ptr=str;
    int a[]={1,2,3,4,5};
    /*int *ptr=&a[0];
    for(int i=0;i<=4;i++){
        cout<<*(ptr+i)<<endl;
    }

    sumaptr(ptr,5);*/
    ptrcpy(pa,ptr);
    cout<<pa<<endl;
    return 0;
}
