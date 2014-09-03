#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int const npar=3
struct alumnos
{   char nombre[30];
    int parcial[npar];
    double promedio;
    char obs[15];
};
int const n=5;

alumnos alumno[n];

void ingreso (alumnos alumno[],int n,int npar)
{
    int i ,k;
    for (i=0;i<n;i++)
    {
        cout<<"Ingresar el nombre del alumno...:";
        cin.getline(alumno[i].nombre,30);
        for (k=0;k<npar;k++)
        {
            cout<<"Ingresar el Parcial "<<k<<"...:";
            cin>>alumno[i].parcial[k];
        }

    }
}
double calpromedio(int parcial[],int npar)
{   double suma=0;
    for (k=0;k<npar;k++)
        {
            suma+=parcial[k];
        }
    return suma/npar;
}
void calcular (alumnos alumno[],int n,int npar)
{
    int i ,k;
    for (i=0;i<n;i++)
    {
        alumno[i].promedio=calpromedio( alumno[i].parcial,npar);
        if (alumno[i].promedio>60 )
        {
          strcpy( alumno[i].obs,"Aprobado");
        }
        else
        {
          strcpy( alumno[i].obs,"Reprobado");
        }
    }

}
void presentar(alumnos alumno[],int n)
{
    int i ,k;
    for (i=0;i<n;i++)
    {
    cout<<alumno[i].nombre<<" Promedio "<<alumno[i].promedio<<" Obs "<<alumno[i].obs<<"\n";
    }
}
int main()
{
    ingreso(alumno,n,npar);
    calcular(alumno,n,npar);
    presentar(alumno,n);
}
