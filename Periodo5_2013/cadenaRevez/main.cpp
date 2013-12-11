#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
const int n=4;
char cadena[n][30];
char revez[n][30];

void ingreso(char cadena[n][30])
{
    int i;
    for(i=0;i<=n;i++)
    {
        cout<<"Ingresar la cadena["<<i<<"]..:";
        cin.getline(cadena[i],30);
        _flushall();
    }
     _flushall();
}
void revezcadena(char cad1[],char cad2[])
{
    int largo=strlen(cad1);
    int i;
    int c=0;
    for(i=largo-1;i>=0;i--)
    {
        cad2[c]=cad1[i];
        c++;

    }
}
void todosrevez(char cadena[n][30],char revez[n][30])
{
    int i;
    for(i=0;i<=n;i++)
    {   revezcadena(cadena[i],revez[i]);

    }
}
void presentar(char cadena[n][30])
{
    int i;
    for(i=0;i<=n;i++)
    {
        cout<<"Cadena["<<i<<"]..:"<<cadena[i]<<"\n";

    }
}
int main()
{
    ingreso(cadena);
    todosrevez(cadena,revez);
    presentar(revez);
    return 0;
}
