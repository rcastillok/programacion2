#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
Ingresar un numero divisible entre 5, validarlo
luego preguntar si desea continuar , al final presentar la
suma de los numeros.
*/
int main()
{  int num,suma;
 char resp;
    suma=0;
    do
    {
        do
        {
            cout<<"Numero divisible entre 5..:";
            cin>>num;

        }while  (num%5!=0);// validar que el numero sea divisible
                   // entre 5


        suma = suma + num;

        _flushall();
       do
       {
           cout<<"Desea Continuar S/N..:";
           cin.get(resp);

           _flushall();
       }while ((resp !='S') and  (resp !='N'));

   }while (resp !='N');
   cout<<"Suma de los numeros div 5..:"<<suma<<"\n";
}
