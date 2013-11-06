#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre , notaa, notae usando un procedimiento
luego determinar la nota final, y la observación usando un
procedimiento, presentar los datos usando otro procedimiento
*/
char nombre[30];
char obs[15];
int na,ne,nf;

void ingreso(char nombre[],int &na,int &ne)
{
    cout<<"Ingresar el nombre del alumno...:";
    cin.getline(nombre,30);
    cout<<"Ingresar la nota Examen ";
    cin>>ne;
    cout<<"Ingresar la nota acumulada ";
    cin>>na;
}
void calcular(int na,int ne,int &nf,char obs[])
{
    nf=na + ne;
    if (nf>=60)
         strcpy(obs,"Aprobado");
       else
         strcpy(obs,"Reprobado");

}
void presentar(int nf,char obs[])
{
    cout<<"Nota final del alumnos :"<<nf<<"\n";
    cout<<"Observación :"<<obs<<"\n";
}
int main()
{
    ingreso(nombre,na,ne);
    calcular(na,ne,nf,obs);
    presentar(nf,obs);

    return 0;
}
