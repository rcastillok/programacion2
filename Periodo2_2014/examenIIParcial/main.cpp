#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;
char nombre[30];
int arreglo[4];
void ingresar(char nombre[])
{
    for (int i=0;i<4;i++)
    {
       cout<<"ingresar Nombre...:";
       cin.getline(nombre,30);
    }
}

int contarConstantes(char nombre[])
{   int suma=0;
    for(int i=0;i<strlen(nombre);i++)
    {
   switch(nombre[i])
   case 'a':
   case 'A':
   case 'e':
   case 'E':
   case 'i':
   case 'I':
   case 'o':
   case 'O':
   case 'u':
   case 'U':
       suma+=nombre[i];
       break;

    }
    return suma;
}

void calcular(char nombre)
{
  for(int i=0;i<4;i++)
    {
        arreglo[i]=contarConstantes(nombre[i]);
    }
}

void presentar(char nombre[])
{

for(int i=0;i<4;i++)
    {

cout<<nombre[i]<<"  ";
cout<<"tiene un numero deconstantes de...:"<<calcular<<"\n";
    }
}
int main()
{
    ingresar(nombre);
    contarConstantes(nombre);
    presentar(nombre);

}
