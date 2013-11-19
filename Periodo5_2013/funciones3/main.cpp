#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar la base y el exponenete usando un procedmiento.
luego calcular la base y el exponente usando una función.
luego preguntar si desea continuar usando una función para devolver
una respuesta s o n validada.


*/

char respuesta()
{   char resp;
    do
    {
       cout<<"Desea Continuar ...:";
       cin.get(resp);
    } while ((resp!='s') and (resp!='n'));
    return resp;
}
//procedimiento para ingresar base y expo.
void ingreso( int &base, int &expo)
{
    cout<<"Ingresar la base...:";
    cin>>base;
    cout<<"Ingrear exponenente...:";
    cin>>expo;
}

//función para calcular la potencia.
int potencia(int base,int expo)
{
    int pot=1;
    for(int i=0;i<expo;i++)
    {
        pot*=base;
    }
    return pot;
}

int main()
{ char resp;
  int base,expo,poten;
  do
  {
      ingreso(base,expo);
      poten=potencia(base,expo);
      _flushall();
      cout<<"Potencia es "<<poten<<"\n";
      resp=respuesta();

  } while (resp!='n');

    return 0;
}
