#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado , las ventas del mes y el turno
de trabajo (1,2,3 validarlo),luego determinar el % de comisión usando
el turno
turno  %Comisión
1       5%
2       6%
3       7%
preguntar si desea continuar.

*/
int main()
{
    char nombre[30],resp;
    int turno;
    double comis,pc,ventas;
    do
    {
        cout<<"Ingresar el nombre del empleado..:";
        cin.getline(nombre,30);
        cout<<"Ventas del Mes....:";
        cin>>ventas;

        do
        {
            cout<<"Turno de trabajo...:";
            cin>>turno;
        }while (!((turno>=1) and (turno<=3)));

        switch (turno)
        {
            case 1:
                pc=0.05;
                break;
            case 2 :
                pc=0.06;
                break;
            default :
                pc=0.07;
                break;
        }
        comis= ventas * pc;
        _flushall();
        cout<<"% De Comisión :"<<pc<<"\n";
        cout<<"Comisión Ganada "<<comis<<"\n";

       do
        {
           cout<<"Desea Continuar...>";
           cin.get(resp);
            _flushall();
        } while ((resp !='S') and  (resp !='N'));


   }while (resp!='N');

}
