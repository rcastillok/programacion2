#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
//Ingresar una cadena de 30 letras, luego usando
//un procedimiento cambiar las vocales de la cadena
//por una X

void ingreso(char cadena[])
{
    cout<<"Ingresar Cadena de 30 letras Max...";
    cin.getline(cadena,30);
}
void cambiar (char cadena[])
{
    for (int i =0;i<strlen(cadena);i++)
    {
        switch (cadena[i])
        {           case 'a':
                    case 'A':
                    case 'e':
                    case 'E':
                    case 'o':
                    case 'O':
                    case 'I':
                    case 'i':
                    case 'u':
                    case 'U':
                      cadena[i]='X';
                      break;
                    default :
                      break;
        }
    }
}
int main()
{
    char cadena[30];
    ingreso(cadena);
    cambiar(cadena);
    cout<<"Cadena cambiada "<<cadena<<"\n";
}
