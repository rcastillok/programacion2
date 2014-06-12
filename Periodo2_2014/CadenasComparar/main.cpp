#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//comparación de cadenas
using namespace std;
const int t=4;
char nombre[t][30];

void ingresoCadenas(char nombre[t][30])
{   for(int i =0;i<=t;i++)
    {   cout<<"Ingresar el nombre ....:";
        cin.getline(nombre[i],30);
    }

}
void Comparar2(char nombre[t][30])
{   char cadcompa[30];
    cout<<"Ingresar cadena a comparar ";
    cin.getline(cadcompa,30);

    for(int i =0;i<=t;i++)
    {
    if (strcmp(nombre[i],cadcompa)==0)
        {
            cout<<"Comparación correcta con "<<nombre[i]<<"\n";

        }
    }
}
void Comparar(char nombre[t][30])
{   char cadcompa[30];
    cout<<"Ingresar cadena a comparar ";
    cin.getline(cadcompa,30);

    for(int i =0;i<=t;i++)
    {
    if (strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
        {
            cout<<"Comparación correcta con "<<nombre[i]<<"\n";
        }
    }
}
int main()
{
   ingresoCadenas(nombre);
   Comparar2(nombre);
   cout<<"\n"<<"Otro Tipo de Comparación"<<"\n";
   Comparar(nombre);


   return 0;
}
