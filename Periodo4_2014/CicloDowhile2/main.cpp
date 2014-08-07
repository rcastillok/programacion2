#include <iostream>

using namespace std;
/*
Ingresar 5 numeros comprendidos entre 50-100
obtener el promedio de los numeros pares y el numero menor.
*/
int main()
{
   int num;
   int i;
   int menor,conta,suma,prom;
   menor= 101;
   for (i=0;i<5;i++)
   {
       do
       {
           cout<<"N-"<<i+1<<" Ingresar un numero entre 50-100 ";
           cin>>num;

       }while (!((num>=50) && (num<=100)));

        if (num<menor)
            menor = num;

        if (num%2==0)
        {
            conta++;
            suma+=num;
        }


   }
   if (conta>0)
     { prom= suma/conta;}
   else
     { prom=0; }
   cout<<"Numero menor...>"<<menor<<"\n";
}
