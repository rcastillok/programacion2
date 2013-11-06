#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Elaborar un programa donde ingresemos un numero , luego
preguntar si deseamos ingresar otro numero .
al finalizar presentar la suma de los numeros ingresados.
los numeros deberan estar comprendidos entre 1-100.
*/
int main()
{   int numero; char resp;
    int suma ;
    suma =0;
    do
    {  do
        {
            cout<<"Ingresar un numero entre 1-100...:";
            cin>>numero;
        //}while ((numero<1) or (numero>100));
        }while (!((numero>=1) and (numero<=100)))
        _flushall();
        do
        {
            cout<<"Desea Continuar...:";
            cin.get(resp);

        }while ((resp!='N') and (resp!='S'));
        suma+= numero;

    }while (resp!='N');
    cout<<"Final del Programa";
    cout<<"Suma de los numeros es "<<suma<<"\n";



    return 0;
}
