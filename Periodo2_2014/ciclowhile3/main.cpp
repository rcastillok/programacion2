#include <iostream>
#include <limits>

using namespace std;
/*
Ingresar 5 numeros y presentar al final del ciclo
el numero mayor.

*/
int main()
{  int c,mayor,numero,menor;
   mayor =0;
   c=0;
   menor=100000;
   while (c<5)
   { cout<< "ingresar un numero ...>";
     cin>>numero;

     if (numero > mayor)
     {
         mayor = numero;
     }
     c++;
     if (numero<menor)
        {
            menor = numero;
        }
   }
    cout<<"Mayor de todos los numero es "<<mayor<<"\n";
     cout<<"Menor de todos los numero es "<<menor<<"\n";
}
