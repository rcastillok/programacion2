#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct alumno
{
    char nombre[30];
    int na,ne,nf;
    char obs[15]; //observación de aprobado o reprobado

};
const int n=4;
alumno alum[n];
alumno maxalumn;

void ordenar(alumno alum[])
{
        alumno Temp;
         for(int i=0;i<n;i++)
                for(int j=0;j<n-i;j++)
                    if(alum[j].nombre[0]>alum[j+1].nombre[0])
                        {
                        Temp=alum[j];
                        alum[j]=alum[j+1];
                        alum[j+1]=Temp;
                    }


}

void ingreso(alumno alum[])
{
    for (int i=0;i<=n;i++)
    {   _flushall();
        cout<<"Ingresar el nombre del alumno..:";
        cin.getline(alum[i].nombre,30);
        cout<<"Ingresar la nota Examen ..:";
        cin>>alum[i].ne;
        cout<<"Ingresar la nota Acumulada..:";
        cin>>alum[i].na;

    }

}

void calcular (alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
        alum[i].nf= alum[i].na + alum[i].ne;
        if (alum[i].nf>=60)
        {
            strcpy(alum[i].obs,"Aprobado");
        }
        else
        {
            strcpy(alum[i].obs,"Reprobado");
        }
    }
}
void presentar1( alumno alum)
{
    cout<<"Alumno "<<alum.nombre;
    cout<<" nota Final es "<<alum.nf;
    cout<<" esta "<<alum.obs<<"\n";

}
void presentar2 (alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
        presentar1(alum[i]);
    }
}

alumno mayoralum (alumno alum[])
{   alumno temp;
    temp= alum[0];
    for (int i=0;i<=n;i++)
    {
        if (temp.nf<alum[i].nf)
        {
            temp= alum[i];
        }
    }
    return temp;
}

int main()
{
    ingreso(alum);
    calcular(alum);
    ordenar(alum);
    presentar2(alum);
    maxalumn = mayoralum(alum);
    cout<<"******** Mayor **********";
    presentar1(maxalumn);

}
