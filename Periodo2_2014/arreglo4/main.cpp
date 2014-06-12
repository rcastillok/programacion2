#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
Generar 10 numeros comprendidos entre 1-1000, luego
contar cuantas cifras tiene cada uno de los numeros usando
una función.
*/
using namespace std;
const int tam=9;
int numero[tam];
int cifras[tam];

void ingreso(int numero[])
{    srand(time(0));
    for (int i=0; i<=tam; i++)
    {
        numero[i] = 1 + rand() % (1000-1);
    }

}

void presentar(int numero[], int cifras[])
{
    for (int i=0; i<=tam;i++)
   {
       cout<<"El numero "<<numero[i]<<" tiene "<<cifras[i]<<" cifras\n";

   }
}

int contarcifras(int numero)
{
    int cf=1;

    while (numero>10)
    {
        numero= numero /10;
        cf++;
    }
    return cf;
}

void calcular (int numero[], int cifras[])
 {
     for (int i=0; i<=tam;i++)
        {
            cifras[i]=contarcifras(numero[i]);
        }

 }
 void pres_revez(int numero[])
 {   int xnum=0;
     int xnum2;

     for (int i=0; i<=tam;i++)
        {   cout<<"Numero "<<numero[i]<<" tiene ";
            xnum2= numero[i];
            while (xnum2>=10)
                {   xnum= xnum2 % 10;
                    xnum2= xnum2 /10;
                    cout<<xnum;
                }
              cout<<xnum2<<" cifras\n";

        }

 }
int main()
{
    ingreso(numero);
    calcular(numero,cifras);
    presentar(numero,cifras);
    cout<<"\n\n\n";
    pres_revez(numero);

}
