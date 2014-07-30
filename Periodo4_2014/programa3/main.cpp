#include <iostream>
#include <stdlib.h>
/*
Ingresar la Nota Acumulada y examen , luego determinar la nota final
y la observación (aprobado o reprobado).
*/

using namespace std;

int main()
{   int na,ne,nf;
    char nombre[30];

    cout<<"Nombre del alumno...:";
    cin.getline(nombre,30);
    cout<<"Nota Acumulada....:";
    cin>>na;

    cout<<"Nota Examen.......:";
    cin>>ne;

    nf= na + ne;

    cout<<"Nota Final es :"<<nf<<"\n";
    if (nf>=60)
            { cout<<"Aprobado"; }
        else
             { cout<<"Reprobado"; }
    cout<<"\n";

     system("PAUSE");
}
