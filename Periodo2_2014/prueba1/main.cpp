#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
Generar  10 numeros aleatorios y contar los numeros
que son divisibles entre 5 y obtener su promedio.
Obtener el promedio de todos los numeros ingresados y
presentar la suma.
*/
int main()
{
    srand(time(0));
    int numero;
    int suma1,suma2,prom1,prom2;
    int conta,c;
    suma1=0; suma2=0;
    c=0;conta=0;
    while (c<10)
    {
        numero = 1 + rand() % (100-1);
        cout << "Numero generado es " << numero<<"\n";
        c++;
        if ((numero%5)==0)
        {
            conta++;
            suma1+=numero;
        }
        suma2+=numero;
    }
    prom2=suma2/c;

    if (conta>0)
    {
        prom1=suma1/conta;
    }
    cout<<"Promedio de divisibles entre 5..: "<<prom1<<"\n";
    cout<<"Numero de divisibles entre 5 "<<conta<<"\n";
     cout<<"Promedio general es "<<prom2<<"\n";

}
