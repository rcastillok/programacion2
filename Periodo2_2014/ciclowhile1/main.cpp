#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/* estructuras de repetición
 ingresar 5 numero y presentar al final
 del ciclo la suma de los
 numeros ingresados.
*/
int main()
{  int num,suma,suma50;
   int mayor50;
   int c=0;
   suma=0;
   mayor50=0; suma50=0;
   while (c<5)
   {
       cout<<"ingresar un numero...:";
       cin>>num;
       if (num>50)
       {
           mayor50++;
           suma50= suma50 + num;
       }
       c++; //c = c + 1; estamos contando
       //las veces que se repite el ciclo
       suma = suma + num; //suma+=num;
       //sumando los numeros ingresados

   }//final del ciclo
   cout<<"La suma de los mayores a 50 es "<<suma50<<"\n";
   cout<<"Numeros mayores a 50 es...:"<<mayor50<<"\n";
   cout<<"Suma de los numeros es ...:"<<suma<<"\n";
   system("PAUSE");

}
