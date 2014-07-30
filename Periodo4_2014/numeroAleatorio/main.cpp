#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//generar 10 numero aleatorios.
int main()
{  int num;
   int conta=0;
   int mayor;
   srand(time(0));// generar una nueva semilla
   cout<<"Numero Aleatorios"<<"\n";
   mayor=0;
   while (conta<10)
   {

       num = 1 + rand()%(101-1);
       // num = 30 + rand()%(41-30);
        //num = linferior + rand()%(limiteSuperior+1-limiteinferior);
       cout<<num<<"\n";
       conta++;

       if (num>mayor)
       {
           mayor =num;
       }

   }
   cout<<"Numero mayor es "<<mayor<<"\n";


}
