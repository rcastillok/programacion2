#include <iostream>

using namespace std;
/*
Ingresar un numero entre 1-10 y presentar la
tabla de multiplicar de 1 a 10.
hacerlo 5 veces.

*/
int main()
{  int numero,tabla;
   for (int i=0;i<5;i++) //para hacerlo 5 veces
   {

       do // solo sirve para validar
       {
           cout<<"Ingresar numero entre 1-10...>";
           cin>>numero;
       } while (!((numero>=1) and (numero<=10)));

       for (int k=1; k<=10; k++) //para multiplicar
       {
           tabla = numero * k;
           cout<<k<<" X "<<numero<<" = "<<tabla<<"\n";
       }
       cout<<"\n\n";
   }
}
