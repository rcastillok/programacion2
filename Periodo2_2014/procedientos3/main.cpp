#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
En un procedimiento ingresar el nombre , las horas
y el turno (validar que el tueno sea 1,2,3).
Luego calcular el pxh, pago de horas, ihss y tp.
usando un procedimiento.
Presentar los datos usando otro procedimiento.
*/
char nombre[30];
int horas,turno;
double pxh,pb,ihss,tp;
char resp;

void pedirsino(char &resp)
{   _flushall();
    do
       {
           cout<<"Desea Continuar S/N..:";
           cin.get(resp);

           _flushall();
       }while ((resp !='S') and  (resp !='N'));
       cout<<"\n\n";

}

void ingreso(char nombre[],int &horas,int &turno)
{
    cout<<"Ingresar su nombre..:";
    cin.getline(nombre,30);
    cout<<"Horas trabajadas ...:";
    cin>>horas;
    do
    {
        cout<<"ingrer el turno 1,2,3..:";
        cin>>turno;
    }while ((turno<1) or (turno>3));
}
void calcular (int horas,int turno,double &pxh,
               double &pb,double &ihss,double &tp)
{
    switch (turno)
    {
        case 1:
            pxh=100;
            break;
        case 2:
            pxh=130;
            break;
        default:
             pxh=150;
            break;
    }
    pb= pxh * horas;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss= 0.035 * pb;
    }
    tp = pb - ihss;

}
void presentar(double pxh, double pb, double ihss,
               double tp)
{
    cout<<"Pago por Hora es ...:"<<pxh<<"\n";
    cout<<"Pago bruto..:"<<pb <<"\n";
    cout<<"Seguro Social...:"<<ihss <<"\n";
    cout<<"Total a pagar..: "<<tp <<"\n";

}
int main()
{  do
    {   ingreso(nombre,horas,turno);
        calcular(horas,turno,pxh,pb,ihss,tp);
        presentar(pxh,pb,ihss,tp);
        pedirsino(resp);
    } while (resp!='N');

}
