#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int turno,horas;
double pxh,ihss,pb,tp;
char nombre[30];
char resp;

int validar(char &resp)
{
    _flushall();
    do
    {
        cout<<"Desea continuar S/N..:";
        cin.get();
        _flushall();
    }while ((resp !='S') and (resp !='N'));

}


int turnos()
{
    _flushall();
    int turno;
    do
    {
        cout<<"ingrese el turno 1,2,3..:";
        cin>>turno;
        _flushall();
    }while ((turno<1) or (turno>3));
}

void ingresar(char &nombre, int &horas, int &turno)
{
    cout<<"Ingrese el nombre del empleado..: ";
    cin.getline(&nombre,30);
    cout<<"Ingrese las horas trabajas por el empleado..:";
    cin>>horas;
    do
    {
        cout<<"ingrese el turno 1,2,3..:";
        cin>>turno;
        _flushall();
    }while ((turno<1) or (turno>3));

}

int calcular(int horas, int turno, double &pxh, double &pb, double &ihss, double &tp)
{
    switch (turno)
    {
        case 1:
            pxh=200;
            break;
        case 2:
            pxh=150;
            break;
        default:
            pxh=180;
            break;
    }

    pb = pxh * horas;

    if (pb>7000)
    {
        ihss = 245;
    }
    else
    {
        ihss = pb*0.035;
    }

    tp = pb - ihss;


}

void presentar(double pxh, double pb, double ihss, double tp)
{
    cout<<"El pago por hora es..:"<<pxh<<"\n";
    cout<<"El pago bruto es..:"<<pb<<"\n";
    cout<<"El IHSS debitado es..:"<<ihss<<"\n";
    cout<<"El total a pagar es..:"<<tp<<"\n";
}


int main()
{
    do
    {
        ingresar(nombre[30],horas,turno);
        calcular(horas,turno,pxh,pb,ihss,tp);
        presentar(pxh,pb,ihss,tp);
        resp=validar(resp);
        _flushall();
    }while ((resp !='S') and (resp !='N'));


}
