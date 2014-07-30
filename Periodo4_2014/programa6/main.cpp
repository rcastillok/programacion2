#include <iostream>
#include <stdlib.h>

using namespace std;
/*
ingresar el nombre del alumno,la nota acumulada y examen.
calcular la nota final y ajustarla a 60 si esta entre 57-59.
detemerminar la observación con la siguiente tabla
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente
*/
int main()
{
    char nombre[30];
    int na,ne,nf;

    cout<<"Ingresar el nombre del alumno...:";
    cin.getline(nombre,30);

    cout<<"Ingresar la Nota Acumulada ";
    cin>>na;

    cout<<"Ingresar la Nota Examen  ";
    cin>>ne;

    nf = na + ne;

    if ((nf>=57) && (nf<=60))
        nf=60;


    cout<<"Nota final "<<nf<<"\n";
    if ((nf>=1) && (nf<60))
        cout<<"Reprobada";
    else if ((nf>=60) && (nf<=80))
            cout<<"Bueno";
        else if ((nf>=81) && (nf<=90))
            cout<<"Muy Bueno";
          else if ((nf>=91) && (nf<100))
                cout<<"Sobresaliente";
              else
                 cout<<"Nota Fuera de rango ";
    cout<<"\n";
    system("PAUSE");


}
