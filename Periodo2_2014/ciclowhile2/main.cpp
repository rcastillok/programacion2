#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y determinar cuantos son pares e impares
luego deberá de presentar al final el promedios
de los numeros pares e impares y los
contadores
*/

int main()
{  int cpar,cimpar,numero,c;
   int sumapar,sumaimpar;
   double propar,proimpar;
   sumaimpar=0;
   sumapar=0;
   cpar=0;
   cimpar=0;
   c=0;

   while (c<5)
   {
       cout<<"Ingresar un Numero ...>";
       cin>>numero;

       if (numero%2==0)
       {
           cpar++;
           sumapar = sumapar + numero;
       }
       else
       {
           cimpar++;
           sumaimpar +=  numero;

       }
       c++;
   }
   proimpar =  sumaimpar/cimpar;
   propar = sumapar /cpar;
   cout<<"Promedio de los pares "<<propar<<"\n";
   cout<<"Numero de pares es "<<cpar<<"\n";
   cout<<"Promedio de los impares "<<proimpar<<"\n";
   cout<<"Numero de impares es "<<cimpar<<"\n";


}
