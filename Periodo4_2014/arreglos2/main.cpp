#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar 5 numeros a un arreglo y calcular el factorial de cada
uno de los numeros y copiarlo a otro a arreglo.
usar una función para generar el factorial del numero.
Usar un procedimiento para ingresar, otro para calcular y para
presentar.

*/
int const n=5;
int num[n];
long facto[n];

void ingreso (int num[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"Ingresar Arreglo["<<i<<"]..:";
        cin>>num[i];
    }
}
long factorial(int numero)
{
    int i,fact;
    fact=1;
    for (i=1;i<=numero;i++)
        {
            fact= fact * i;
        }

    return fact;
}

void calcular(int num[],long facto[],int n)
{   int i;
    for (i=0;i<n;i++)
    {
        facto[i]=factorial(num[i]);
    }
}

void presentar(int num[],long facto[],int n)
{  int i;
    for (i=0;i<n;i++)
    {
        cout<<"factorial de "<<num[i]<<" es "<<facto[i]<<"\n";
    }
}

int main()
{
    ingreso(num,n);
    calcular(num,facto,n);
    presentar(num,facto,n);
}
