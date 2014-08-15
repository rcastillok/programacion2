#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
/*
generar un numero entre 1-100 usando una función, luego elaborar una función
que nos devuelva la respuesta validada de S o N.
Pedir los numeros y presentar la suma.
*/
int num,suma,mayor;
char resp;

int aleatorio1_100()
{   int numx;
    srand(time(0));// generar una nueva semilla
    numx = 1 + rand()%(101-1);
    return numx;
}

char pedirrespuesta()
{  char respx;
         do
            {
               cout<<"Desea Continuar...>";
               cin.get(respx);
                _flushall();
            } while ((respx !='S') and  (respx !='N'));
        return respx;
}

void sumanum(int num , int &suma)
{
    suma +=num;
}

int maximo(int num,int mayor)
{
    if (num>mayor)
    {
        return num;

    }
    else
    {
        return mayor;
    }
}

int main()
{  suma =0;
mayor=0;
  do
  {
      num= aleatorio1_100();
      cout<<"Numero generado es "<<num<<"\n";

      resp = pedirrespuesta();
      sumanum(num,suma);
      mayor = maximo(num,mayor);

  }while (resp!='N');
  cout<<"Suma de los numeros es ..."<<suma<<"\n";
  cout<<"Mayor es "<<mayor<<"\n";

}
