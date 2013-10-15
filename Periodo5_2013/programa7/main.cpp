#include <iostream>

using namespace std;
/*
Ingresar el nombre del alumno la nota acumulada y examen
y determinar la nota final .
si la nota esta entre 57-60 colocar 60.

*/

int main()
{   char nombre[30];
    int na,ne,nf;
    cout << "Nombre del alumno ...>" ;
    cin.getline(nombre,30);

    cout<< "Nota acumulada...>";
    cin>> na;

    cout<< "Nota examen...>";
    cin>> ne;

    nf= na + ne;

    if ((nf>=57)and (nf<60))
    {
        nf=60;
    }
    cout<<"Nota final es....."<<nf<<"\n";

    return 0;
}
