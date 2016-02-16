#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
GENERAR 10 NUMEROS ALEATORIOS, PRESENTARLOS EN LA
PANTALLA.AL FINAL PRESENTAR EL NUMERO MAYOR
Y EL PROMEDIO DE LOS 10 NUMEROS.
GENERAR LOS NUMEROS ENTE 30-80
*/
int main()
{   srand(time(0));
    int i;
    int numero,maxi=0,contar=0,suma=0,promedio;

    for (i=1;i<=10;i++)
    {    numero =50 + rand() % (100-50);
        cout<<"valor de Numero "<<i<<" es "<<numero<<"\n";
        if (numero>maxi)
        {
            maxi=numero;
        }
        contar++;
        suma+=numero; //suma = suma + numero;
    }
    promedio=suma/contador;
    cout<<"Promedio "<<promedio<<"\n";
    cout<<"Numero Mayor es "<<maxi<<"\n"
   system("PAUSE");
    return 0;
}
