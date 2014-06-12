#include <iostream>

using namespace std;
/* Ingresar 5 numeros a un arreglo de enteros ,
luego elaborar una función para devolver el numero
mayor, una función para delvolver el numero de pares
que hay en el arreglo.
una función que devuelva el menor.
*/
const int tam=4;
int numero[tam];
void ingresar(int numero[])
{
    for (int i =0; i<=tam; i++)
    {
        cout<<"Ingresar el numero["<<i<<"]..:";
        cin>>numero[i];
    }
}
int menor (int numero[])
{  int menorx=numero[0];
    for (int i =0; i<=tam; i++)
    {
        if (numero[i]< menorx)
            menorx= numero[i];
    }
    return menorx;

}
int mayor (int numero[])
{  int maxi=0;
    for (int i =0; i<=tam; i++)
    {
        if (numero[i]>maxi)
            maxi= numero[i];
    }
    return maxi;

}
int pares(int numero[])
{
    int xpar=0;
    for (int i =0; i<=tam; i++)
    {
        if (numero[i]%2==0)
            xpar++;
    }
    return xpar;
}

int main()
{  int xmax=0;
   int cpar=0;
   int cmin=0;
   ingresar(numero);
   xmax= mayor(numero);
   cout<<"Numero mayor del areglo es "<<xmax<<"\n";
   cpar= pares(numero);
   cout<<"Numero pares es "<<cpar<<"\n";
   cmin= menor(numero);
   cout<<"Numero menor "<<cmin<<"\n";
}
