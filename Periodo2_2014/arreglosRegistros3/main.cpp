#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Elaborar un procedimiento para ingresar el nombre
y las ventas de todos los empleados.
calcular la comisión y el seguro social usando una
función para cada uno de ellos.
la comisi se calcula así:
1-20000 3%
20001-50000 4%
50001- 5%
Hacer los calculos de todo el arreglo de registros
usando un procedimiento.
Presentar los datos usando un procedimiento.

*/
struct emple
{
    char nombre[30];
    double ventas[3];
    double sumaventa,ihss, comis,tp;
};
const int n=4;
emple emplex[n];

void ingresar(emple emplex[])
{
    for (int i =0 ; i<=n; i++)
    {   _flushall();
        cout<<"Nombre del empleado: ";
        cin.getline(emplex[i].nombre,30);
        for (int k=0;k<=3;k++)
        {
            cout<<"Ingresar la venta "<<k<<"..:";
            cin>> emplex[i].ventas[k];
        }

    }
}

double seguro(double comis)
{
    if (comis>7000)
    {
        return 245;
    }
    else
    {
        return comis * 0.035;
    }
}

double comision(double sumaventas)
{
    if (sumaventas<=20000)
    {
        return 0.03;
    }
    else if (sumaventas<=50000)
    {
        return 0.04;
    }
    else
    {
        return 0.05;
    }

}
double suma(double ventas[])
{    double xsum=0;
    for (int i =0 ; i<=3; i++)
    {  xsum+= ventas[i];
    }
    return xsum;
}

void calcular(emple emplex[])
{
    for (int i =0 ; i<=n; i++)
    { emplex[i].sumaventa= suma(emplex[i].ventas);
      emplex[i].comis= emplex[i].sumaventa *
      comision(emplex[i].sumaventa);
      emplex[i].ihss= seguro(emplex[i].comis);
      emplex[i].tp=emplex[i].comis - emplex[i].ihss;
    }
}

void presentar(emple emplex[])
{
    for (int i =0 ; i<=n; i++)
    {
        cout<<"Empleado "<<emplex[i].nombre <<"\n";
        cout<<"Total ventas "<<emplex[i].sumaventa <<"\n";
        cout<<"Comisión     "<<emplex[i].comis <<"\n";
        cout<<"Ihss         "<<emplex[i].ihss <<"\n";
        cout<<"Total a pagar "<<emplex[i].tp<<"\n";
        cout<<"\n";
    }
}

int main()
{
    ingresar(emplex);
    calcular(emplex);
    presentar(emplex);


}
