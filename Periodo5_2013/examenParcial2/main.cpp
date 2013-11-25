#include <iostream>

using namespace std;
const int tam=5;
int numero[tam],doble[tam];
int suma100,mayordivi5;

void ingreso(int numero[])
{
    for (int i =0; i<=tam; i++)
    {
        do
        {
            cout<<"Ingresar un numero Par...:";
            cin>>numero[i];
        }while (!((numero[i])%2==0));

    }
}

int suma(int numero[])
{
    int sum=0;
    for (int i =0; i<=tam; i++)
    {
       if (numero[i]>100)
            sum+=numero[i];
    }
    return sum;
}
int mayor(int numero[])
{
    int maximo=0;
    for (int i =0; i<=tam; i++)
    {
        if (numero[i]%5==0)
        {
            if (maximo<numero[i])
                maximo=numero[i];
        }
    }
    return maximo;
}
void dobleArreglo(int numero[],int doble[])
 {
     for (int i =0; i<=tam; i++)
    {
        doble[i]=numero[i]*2;
    }
 }

void presentar(int numero[],int doble[])
 {
     for (int i =0; i<=tam; i++)
    {  cout<<"El doble del numero "<<numero[i]<<" Es "<<doble[i]<<"\n";

    }
 }

int main()
{   ingreso(numero);
    suma100=suma(numero);
    cout<<"Suma de todo el arreglo es "<<suma100<<"\n";
    mayordivi5=mayor(numero);
    cout<<"Numero mayor de los divisibles entre 5 ...:"<<mayordivi5<<"\n";
    dobleArreglo(numero,doble);
    presentar(numero,doble);

    return 0;
}
