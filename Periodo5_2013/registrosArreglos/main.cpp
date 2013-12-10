#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct empleados
{ char nombre[30];
  int ventas,comis;
};
const int tam=5;
empleados emple[tam];
empleados emplemax;

empleados mayorempleado(empleados emple[])
{   empleados auxmayor;
    auxmayor.comis=0;
    for (int i=0;i<tam;i++)
    {
        if (auxmayor.comis<emple[i].comis)
            auxmayor=emple[i];
    }
    return auxmayor;

}
void ingreso(empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        cout<<"Ingresar el nombre del empleado...:";
        cin.getline(emple[i].nombre,30);
        cout<<"Ventas del empleado....:";
        cin>>emple[i].ventas;
        _flushall();
    }
}
void calcular(empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        emple[i].comis= emple[i].ventas * 0.05;

    }


}
void presentar(empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        cout<<"El empleado "<<emple[i].nombre<<" Gano "
        <<emple[i].comis<<" de comisión "<<"\n";

    }
}
int main()
{
    ingreso(emple);
    calcular(emple);
    presentar(emple);
    emplemax= mayorempleado(emple);
    cout<<"Empleado que tiene la mayor comisión es "
        <<emplemax.nombre<<" Con la comisión "<<emplemax.comis;
    return 0;
}
