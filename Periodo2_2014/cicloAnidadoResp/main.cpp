#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar un numero entero , luego preguntar desea
continuar, al final presentar cuantos fueron numeros
pares e impares.
*/

int main()
{   int numero,cp,ci;
    char resp;
    ci=0;
    cp=0;
    do
    {
       cout<<"Ingresar un Numero:";
       cin>>numero;
       if (numero%2==0)
       {
         cp++;
       }
       else
        { ci++;
        }
      _flushall();
       do
       {
           cout<<"Desea Continuar S/N..:";
           cin.get(resp);
           _flushall();
       }while ((resp !='S') and  (resp !='N'));

    } while ((resp !='N'));
    cout<<"Contador de pares..:"<<cp<<"\n";
    cout<<"Contador de Impares..:"<<ci<<"\n";


}
