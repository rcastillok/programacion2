#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct alumno
{
    char nombre[30];
    int na,ne,nf;
    char obs[15];
};

alumno alum;

void ingreso (alumno &alum)
{
    cout<<"Ingresar Nombre ...:";
    cin.getline(alum.nombre,30);
    cout<<"Nota Acumulada..:";
    cin>>alum.na;
    cout<<"Nota Examen.....:";
    cin>>alum.ne;
}

void calcular( alumno &alum)
{
    alum.nf = alum.na + alum.ne;
    if (alum.nf>=60)
         strcpy(alum.obs,"Aprobado");
    else
         strcpy(alum.obs,"Reprobado");

}
void presentar (alumno alum)
{
    cout<<"Nota Final "<<alum.nf <<"\n";
    cout<<"Observación"<<alum.obs <<"\n";

}
int main()
{
    ingreso( alum);
    calcular(alum);
    presentar(alum);


}
