#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Ingresar el nombre del empleado, el turno y las ventas.
validar que el turno solo sea 1,2,3.(usar un procedimiento)

calcular usando un procedimiento , la comisión ganada , el ihss,
y total a pagar .

presentar los datos calculados usando un procedimiento.

*/
char nombre[30];
int ventas,turno,ihss,comision,tp;
void ingreso( char nombre[],int &turno, int &ventas)
{
    cout<<"Ingresar el nombre del empleado..:";
    cin.getline(nombre,30);

    do
    {
        cout<<"Ingresar el turno 1,2,3...:";
        cin>>turno;
    }while ((turno<1) and (turno>3));

    cout<<"Ingresar las ventas..:";
    cin>>ventas;
}

int main()
{

    return 0;
}
