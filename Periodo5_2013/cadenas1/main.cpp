#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//comparación de cadenas
using namespace std;
char nombre[5][30];
void ingresoCadenas(char nombre[5][30])
{   for(int i =0;i<5;i++)
    {   cout<<"Ingresar el nombre ....:";
        cin.getline(nombre[i],30);
    }

}
void Comparar(char nombre[5][30])
{   char cadcompa[30];
    cout<<"Ingresar cadena a comparar ";
    cin.getline(cadcompa,30);

    for(int i =0;i<5;i++)
    {
    if (strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
        {
            cout<<"Comparación correcta con "<<nombre[i]<<"\n";
        }
    }
}



void Comparar2(char nombre[5][30])
{   char cadcompa[30];
    cout<<"Ingresar cadena a comparar ";
    cin.getline(cadcompa,30);

    for(int i =0;i<5;i++)
    {
    if (strcmp(nombre[i],cadcompa)==0)
        {
            cout<<"Comparación correcta con "<<nombre[i]<<"\n";

        }
    }
}
int main()
{   ingresoCadenas(nombre);
    Comparar(nombre);
    cout<<"--------------------Comparar Dos----------------"<<"\n";
    //Comparar2(nombre);



    return 0;
}
