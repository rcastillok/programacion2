#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{   int notaa,notae,notaf;
    char nombre [30];

    cout<<"Nombre del alumno....:";
    cin.getline(nombre,30);

    cout<<"Ingresar la nota Acumulada...:";
    cin>>notaa;

    cout<<"Ingresar la nota examen......:";
    cin>>notae;

    notaf=notaa + notae;
    cout<<"\n"<<nombre<<" su Nota Final es "<<notaf<<"\n";//este es un comentario
    if (notaf>=60)
    {
      cout<<"El alumno esta APROBADO\n";
    }
    else
    {
        cout<<"El alumno esta REPROBADO"<<"\n";
    }
    cout<<"\n";
     system("PAUSE");
}
