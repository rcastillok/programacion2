#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
generar numeros aleatorios entre 1-500, contar cuantos son numeros
divisibles entre 5 y son pares a la vez, obtenner su promedio y presentarlo
al final, el programa finaliza si encuentra un numero mayor a 300 o
genera 10 numeros.
*/
int main()
{   int num,cn5y2,suma5y2,conta;
    double promedio;


    srand(time(0));// generar una nueva semilla
    conta=0; num=0; cn5y2=0;suma5y2=0;

    while ((conta<10) and (num<300))
    {
        num = 1 + rand()%(501-1);
        conta++;

        if ((num%5==0) and (num%2==0))
        {
            cn5y2++;
            suma5y2+=num;
        }
        cout<<"Numero "<<num<<"\n";

    }

    if (cn5y2>0)
        {
            promedio=( suma5y2/ cn5y2);
        }
        else
        {
            promedio=0;
        }
    cout<<"Promedio  ....:"<<promedio<<"\n";
    cout<<"Contador divisible 5 y 2...: "<<cn5y2<<"\n";
    cout<<"Suma de numeros divisibles entre 5 y 2...: "<<suma5y2<<"\n";


}
