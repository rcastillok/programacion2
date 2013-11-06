#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre del alumno, luego debemos de pedir
las tres notas parciales usando un ciclo, presentar el promedio,la
nota mayor de los tres parciales.
Preguntar si desea continuar, al final presentar el nombre del
alumno con la mejor nota.

*/
int main()
{
    char nombre[30];
    char resp;
    int nota, promedio, notamax, alumnomax,suma;
    char nombreMayor[30];
    char estado[15];

    alumnomax=0;
    do
    {
        cout<<"Nombre del alumno..:";
        cin.getline(nombre,30);
        suma=0;notamax=0;
        for (int i =1; i<=3;i++)
        {
            cout<<"Ingresar la nota del parcial .."<<i<<"..:";
            cin>> nota;
            suma+=nota;
            if (notamax<nota)
            {
                notamax=nota;
            }


        }
        promedio=suma/3;
        if (promedio>=60)
        {
            strcpy(estado,"Aprobado");
        }
        else
        {
            strcpy(estado,"Reprobado");
        }
        cout<<"Promedio del alumno..:"<<promedio<<"\n";
        cout<<"Nota mayor es ...:"<<notamax<<"\n";
        cout<<"Estado de la nota ..:"<<estado<<"\n";
        _flushall();
        if (alumnomax<promedio)
        {
            alumnomax=promedio;
            strcpy(nombreMayor,nombre);
        }

        do
        {
            cout<<"Desea Continuar...:";
            cin.get(resp);

        }while ((resp!='N') and (resp!='S'));
           _flushall();

    }while (resp!='N');
    cout<<"Nombre del alumno con la mejor nota "<<nombreMayor;
    cout<<" Con la Nota "<<alumnomax<<"\n";

    return 0;
}
