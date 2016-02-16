#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   /* Ingresar un numero entero entre 50-100,
    luego preguntar si desea continuar.
    al final del ciclo debera de presentar
    el promedio de los numeros entre 80-100.
    y cual fue el numero mayor. */

    int num,mayor=0,suma=0,conta=0,contaPar=0;
    double promedio;
    char resp;
    do
    {  do
        { cout<<"Ingresar un numero entre 50-100..>";
          cin>>num;
        }while ((num<50) or  (num>100));
        _flushall();
        do
        {   cout<<"Desea continuar ...:";
            cin.get(resp);
            _flushall();
       } while ((toupper(resp) !='S') and  (toupper(resp) !='N'));
       suma = suma + num;
       if (num>mayor)
       {  mayor = num;
       }
       conta++;
       if (num%2==0)
       {
           contaPar++;
       }
    } while ((toupper(resp)=='S'));
    promedio= suma/conta;
    cout<<"Promedio "<<promedio<<"\n";
    cout<<"Mayor es "<<mayor<<"\n";

    return 0;
}
