#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado, las ventas y el turno
luego determinar el % de comisión usando el turno
ihss y total a pagar.
Turno   %Comisión
1           5%
2           7%
3           8%
*/

int main()
{
    char nombre[30];
    int ventas, turno;
    double pc,comis, ihss, tp;;
    char resp;
    do
    {    _flushall();
        cout<<"Nombre del empleado ...:";
        cin.getline(nombre,30);
        cout<<"ingresar las ventas ";
        cin>>ventas;
        do
        {
            cout<<"ingresar turno1,2,3..:";
            cin>>turno;

        } while(!((turno>=1) and (turno<=3)));
         _flushall();
         switch (turno)
         {
         case 1:
            pc=0.05;
            break;
         case 2:
            pc=0.07;
            break;
         default:
            pc=0.08;
            break;

         }
         comis = pc * ventas;
         if (comis>7000)
            ihss=245;
         else
            ihss= 0.035 * comis;

         tp=comis-ihss;
         cout<<"% comisión "<< pc<<"\n";
         cout<<"Comisión ganada "<<comis <<"\n";
         cout<<"Ihss "<<ihss <<"\n";
         cout<<"Total a pagar "<<tp <<"\n";
      do
       {
           cout<<"Desea Continuar S/N..:";
           cin.get(resp);
           _flushall();
       }while ((resp !='S') and  (resp !='N'));

    } while ((resp !='N'));




}
