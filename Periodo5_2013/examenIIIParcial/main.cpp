#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct cadenas
{
    char nombre[30];
    char nombreRevez[30];
    int nVocales;
} ;
cadenas arreglo[5];

void ingreso(cadenas arreglo[])
{
    for (int i=0;i<5;i++)
    {
        cout<<"Ingrese el nombre ["<<i<<"]: ";
        cin.getline(arreglo[i].nombre,30);
        _flushall();
    }
}

int contarVocales (cadenas arreglo[])
{ int contador=0;
int i=0;

   int nl=strlen(arreglo[i].nombre);

      for (int l=0; l<nl; l++)
      {
          switch (arreglo[i].nombre[l])
          {
              case 'a':
              case 'e':
              case 'i':
              case 'o':
              case 'u':
              case 'A':
              case 'E':
              case 'I':
              case 'O':
              case 'U':
                contador ++;
                  break;
              default :
                  break;
          }
      }return contador;
}

void revez (char cad1[], char cad2[])
{ int largo=strlen(cad1);


}

void calcular (cadenas arreglo[])
{
   for (int i=0; i<5; i++)
   {
       arreglo[i].nVocales=contarVocales(arreglo);
   }
}

void presentar (cadenas arreglo[])
{
    for (int i=0; i<5; i++)
    {
        cout<<"El nombre ["<<i<<"] : "<<" Tiene "<<arreglo[i].nVocales<<" vocales"<<"\n";
    }
}
int main()
{
    ingreso(arreglo);
    calcular(arreglo);
    presentar(arreglo);
    return 0;
}
