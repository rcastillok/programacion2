#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
Ingresar el nombre del empleado las ventas y el turno.
validar el turno que sea 1,2,3.)5%,7%,6%
elaborar una función para que nos devuelva el % de las
ventas .
elaborar un procedimento para calcular la el % de comisión
el la comisión , el ihss y total a pagar.

Presentar los datos usando otro procedimiento.
*/
int pedirturno()
{ int turno;
    do
    {
        cout<<"turno 1,2,3...:";
        cin>>turno;
    }while ((turno<1) or (turno>3));
    return turno;
}
void ingreso(char nombre[],int &ventas,int &turno)
{
    cout<<"Ingresar nombre..:";
    cin.getline(nombre,30);
    cout<<"ingresar las ventas ...:";
    cin>>ventas;
    turno= pedirturno();

}
double porcomis(int turno)
{
    switch(turno)
    {
    case 1:
        return 0.05;
        break;
    case 2:
        return 0.07;
        break;
    default:
        return 0.06;
        break;

    }
}
void calcular(int turno,int ventas,double &pc,
              double &comis, double &ihss, double &tp)
              {
                  pc= porcomis(turno);
                  comis= pc * ventas;
                  if (comis>7000)
                    ihss= 245;
                  else
                    ihss = 0.035 * comis;
                  tp = comis - ihss;

              }
void presentar(double pc,
              double comis, double ihss, double tp)
{
    cout<<"% Comisión ....:"<<pc<<"\n";
    cout<<"Comisión ganada ..:"<<comis <<"\n";
    cout<<"Ihss..:"<<ihss <<"\n";
    cout<<"Total a pagar ...:"<<tp <<"\n";
}
char pedirrespuesta()
{
    char resp;
    _flushall();
    do
    { cout << "Desea Continuar....:";
      cin.get(resp);

    }while((resp!='N') and (resp!='S'));
    _flushall();
 return resp;
  }



int main()
{
    char nombre[30];
    int turno,ventas;
    double pc,comis,ihss,tp;
    char resp;
    do
        {ingreso(nombre,ventas,turno);
        calcular(turno,ventas,pc,comis,ihss,tp);
        presentar( pc, comis,  ihss,  tp);
        resp=pedirrespuesta();
    }while (resp!='N');
}

