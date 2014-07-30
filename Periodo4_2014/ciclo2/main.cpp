#include <iostream>

using namespace std;
/*
Ingresar  nota acumulada y examen del alumno , calcular la nota final,
luego presentar si esta aprobado o reprobado, ;luego de finalizar el ciclo
presentar cuantos aprobados y reprobados hay.
Hacerlo para 5 alumnos.
*/
int main()
{
    int na,ne,nf,capr,crep,c;

    c=0; capr=0;crep=0;

    while (c<5)
    {
        cout<<"Nota Acumulada :";
        cin>>na;
        cout<<"Nota Examen :";
        cin>>ne;
        nf= na + ne;
        cout<<"Nota Final  "<<nf<<"\n";

        if (nf>=60)
        {   capr++;
            cout<<" Estado Aprobado"<<"\n";
        }
        else
        {   crep++;
            cout<<" Estado Reprobado"<<"\n";
        }
        c++;
    }
    cout<<" Aprobados"<<capr<<"\n";
    cout<<" Reprobados"<<crep<<"\n";



}
