#include <iostream>

using namespace std;
/*
Se ingresa el nombre del aspirante , la edad ,experiencia,
(1 o 0), si tiene titulo(1 o 0)
luego se imprime si esta contratado o no lo esta.
si la edad esta entre 22-27 y tiene titulo se contrata o si tiene 15
años de experiencia
*/
int main()
{
    int titulo,expe,edad;
    char nombre[30];

     cout<<"Ingresar el nombre del Aspirante...:";
     cin.getline(nombre,30);

     cout<<"Tiene titulo...";
     cin>>titulo;

     cout<<"Edad...";
     cin>>edad;

     if ((((edad>1) and (edad<=27)) and (titulo==1)) or
        (expe>15))
          cout<<"Contratado";
     else
        cout<<"Vuelva ha intertarlo no esta contratado";


}
