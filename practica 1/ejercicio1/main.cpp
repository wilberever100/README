#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Ingrese el tamaño del array :";
	cin>>n;
	int A[n][n];
	int len=n,k=1,p=0,i;

	while(k<=n*n)
	{
		for(i=p;i<len;i++)
		{
			A[p][i]=k;
			k=k+1;
		}
		for(i=p+1;i<len;i++)
		{
			A[i][len-1]=k;
			k=k+1;
		}
		for(i=len-2;i>=p;i--)
		{
			A[len-1][i]=k;
			k=k+1;
		}
		for(i=len-2;i>p;i--)
		{
			A[i][p]=k;
			k=k+1;
		}
		p++,len=len-1;

	}
	if(!n%2)
	{
		A[(n+1)/2][(n+1)/2]=n*n;
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
//Implementar un programa que imprima el contenido de un arreglo de dos dimensiones de forma espiral. Por ejemplo suponga que el arreglo contiene los siguientes valores 1-24 1-6 7-12 13-18 19-24
//La salida debe ser 1-6 12 18 24-19 13  ESPIRAl
