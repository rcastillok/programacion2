#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//generar 10 numeros y contar cuantos son divisibles entre 5 , el numero
//mayor y menor.( generar entre 200 y 500)
int main()
{
   int num,cd5;
   int conta=0;
   int mayor,menor;
   srand(time(0));// generar una nueva semilla

   mayor=0; cd5=0; menor=500;
   while (conta<10)
   {
        num = 200 + rand()%(501-200);
        if (num % 5 ==0)
        {
            cd5++;
        }

        if (num>mayor)
        {
            mayor= num;
        }

        if (num<menor)
        {
            menor = num;
        }
        cout<<cd5<<"===>"<<num<<"\n";

        conta++;

   }
   cout<<"Numero divisibles entre 5 "<<cd5<<"\n";
   cout<<"Menor "<<menor<<"\n";
   cout<<"Mayor  "<<mayor<<"\n";

}
