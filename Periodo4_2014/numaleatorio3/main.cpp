#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
generar 10 numeros  , usted debera de indicar el limite inferior
y el superior luego deberá de obtener el promedio de los pares
e impares de los 10 numeros ingresados.

*/
int main()
{   int num,li,ls,cp,ci,sp,si,ppares,pimpares,conta;

    cout<<"Ingresar el limite inferior....:";
    cin>>li;

    cout<<"Ingresar el limite Superior....:";
    cin>>ls;

    conta=0; cp=0;ci=0;sp=0;si=0;

    srand(time(0));// generar una nueva semilla

    while (conta<10)
    {
        conta++;
        num = li + rand()%((ls+1)-li);

        if (num%2==0)
        {
            cp++;
            sp+=num;
        }
        else
        {
            ci++;
            si+=num;
        }


    }
    //calcular los promedio
    ppares= sp/cp;
    pimpares= si/ci;

    cout<<"Promedio de Impares es :"<<pimpares<<"\n";
    cout<<"Promedio de  pares es :"<<ppares<<"\n";



}
