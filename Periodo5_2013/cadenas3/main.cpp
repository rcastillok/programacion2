#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
/*
ingresar 5 nombres a un arreglo ,
luego sustituir todas sus vocales por letras x.


*/

const int n=5;
char cadena[n][30];
int consonante[n];

// elaborar una función para presentar cuantas consonates
// tiene cada una de las palabras del arreglo de cadena.
// ejemplo   Rommel Tiene 4 consonantes

void ingreso(char cadena[n][30])
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresar la cadena["<<i<<"]..:";
        cin.getline(cadena[i],30);

    }

}

void cambiar(char cadena[n][30])
{   int i,l,nl;
    for(i=0;i<n;i++)
    {   nl=strlen(cadena[i]);
        for( l=0;l<nl;l++)
        {    switch (cadena[i][l])
                {
                    case 'a':
                    case 'A':
                    case 'e':
                    case 'E':
                    case 'o':
                    case 'O':
                    case 'I':
                    case 'i':
                    case 'u':
                    case 'U':
                      cadena[i][l]='X';
                      break;
                    default :
                      break;
                }
        }
    }

}
void presentar(char cadena[n][30])
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"cadena "<<cadena[i]<<"\n";


    }

}


int main()
{
  ingreso(cadena);
  cambiar(cadena);
  presentar(cadena);

    return 0;
}
