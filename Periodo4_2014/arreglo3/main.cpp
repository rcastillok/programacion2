#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/*
Función del ihss de un sueldo
el pago por hora para un empleado
turno      pxh
1       120
2       150
3       180

*/

using namespace std;
struct empleado
{
    char nombre[30];
    int horas, turno;// validar que el turno sea 1,2,3
    double pxh,pb,ihss,tp;
};
int const n=5;
empleado emple[n];
empleado maxemple;

void ingreso(empleado emple[],int n)
{  int i;
   for(i=0;i<n;i++)
   {
       cout<<"Ingresar Nombre del empleado ";
       cin.getline(emple[i].nombre,30);
       cout<<"Horas trabajadas...:";
       cin>>emple[i].horas;
       do
       {  cout<<"Turno de trabajo ...:";
          cin>>emple[i].turno;

       }while(!(( emple[i].turno>=1) and (emple[i].turno<=3)));
       _flushall();
   }

}
double seguro(double pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035 * pb;
}

double pagoxhora(int turno)
{
    switch (turno)
    {
    case 1:
        return 120;
        break;
    case 2 :
        return 150;
        break;
    default:
        return 180;
        break;
    }

}
void calcular (empleado emple[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
        emple[i].pxh= pagoxhora(emple[i].turno);
        emple[i].pb= emple[i].pxh * emple[i].horas;
        emple[i].ihss= seguro(emple[i].pb);
        emple[i].tp = emple[i].pb- emple[i].ihss;
   }

}
void presentar_reg(empleado emple)
{
            cout<<"Empleado ..:"<<emple.nombre <<"\n";
            cout<<"Pago Por hora "<<emple.pxh <<"\n";
            cout<<"Pago Bruto "<<emple.pb <<"\n";
            cout<<"Ihss "<<emple.ihss <<"\n";
            cout<<"Total Pagar "<<emple.tp<<"\n\n";

}
void presentar (empleado emple[],int n)
{
   int i;
   for(i=0;i<n;i++)
         {  presentar_reg(emple[i]);
         }
}
empleado MayorEmple(empleado emple[],int n)
{ int i;
  empleado xmax;
  xmax=emple[0];
   for(i=0;i<n;i++)
   {
       if (xmax.tp<emple[i].tp)
        xmax=emple[i];
   }
   return xmax;

}


int main()
{   ingreso(emple,n);
    calcular(emple,n);
    presentar(emple,n);
    maxemple=MayorEmple(emple,n);
    cout<<"******El Mejor empleado es ******";
    presentar_reg(maxemple);




}
