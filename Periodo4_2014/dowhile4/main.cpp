#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado, las horas de 4 dias trabajados
(usar un ciclo for para ingresar las 4 horas), luego se deberá de
presentar  el total de las horas , se determina el pago por hora usando
la zona de trabajo
Zona    Pago
A       150
B       200
C       250
determinar el salario , ihss y total pagar .
Preguntar si desea continuar ( validar respuesta )

*/
int main()
{
    char nombre[30];
    int horas,suma, pxh,pb,ihss,tp,i;
    char resp,zona;
    suma=0;

    do
    {


        cout<<"Ingresar el nombre del empleado..:";
        cin.getline(nombre,30);

        for (i=0;i<4;i++)
        {
           cout<<"Las Horas....:";
            cin>>horas;
            suma+=horas;

        }
        _flushall();
         do
            {
               cout<<"Turno .>";
               cin.get(zona);
                _flushall();
            } while ((resp !='A') and  (resp !='B')and  (resp !='C'));

        switch (zona)
        {
            case 'A':
                pxh=150;
                break;
             case 'B':
                pxh=200;
                break;
             default:
                pxh=250;
                break;
        }

        pb= suma * pxh;

        if (pb>7000)
            ihss =245;
        else
            ihss =0.035;

        tp = pb - ihss;

        do
            {
               cout<<"Desea Continuar...>";
               cin.get(resp);
                _flushall();
            } while ((resp !='S') and  (resp !='N'));


   }while (resp!='N');
}
