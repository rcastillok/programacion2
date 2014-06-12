#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;

const int t=4;
char cadena[t][30];

void ingreso(char cadena[t][30])
{  for (int i=0;i<=t;i++)
    {
        cout<<"Ingresar Cadena de 30 letras Max...";
        cin.getline(cadena[i],30);
    }
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
void cambioArreglo(char cadena[t][30])
{ for (int i=0;i<=t;i++)
    {
        cambiar(cadena[i]);
    }
}
void presentar(char cadena[t][30])
{
    for (int i=0;i<=t;i++)
    {
      cout<<"Cadena "<<i<<" ..:"<<cadena[i]<<"\n";
    }
}
int main()
{

    ingreso(cadena);
    cambioArreglo(cadena);
    presentar(cadena);

}
