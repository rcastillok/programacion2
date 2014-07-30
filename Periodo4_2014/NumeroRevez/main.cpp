#include <iostream>

using namespace std;
//ingresar un numero y presentarlo al revez hasta de tres cifras.
int main()
{
   int numero,n;

   cout<<"Ingresar un numero..:";
   cin>>numero;

   if (numero>999)
   {
       cout<<"debe de ser numero de tres cifras o menos";
   }
   else
   {
       n=numero % 10;
       numero= numero/10;

       cout<<n;

       if (numero>0)
        {n=numero % 10;
       numero= numero/10;

       cout<<n;
        }

        if (numero>0)
        {
        n=numero % 10;
       cout<<n;}
   }
}
