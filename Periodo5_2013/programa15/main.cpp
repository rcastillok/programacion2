#include <iostream>

using namespace std;

int main()
{  int num,cifra,suma,maxi,mini,prom;
    int contador=0;
    int par,impar;
    par=0; impar=0;

    cout<<"ingresar un numero Entero....:";
    cin>>num;
    suma=0;
    cout<<"numero al revez..:";
    maxi=0;
    mini=9;
   while (num>0)
   {
       cifra= num % 10;
       cout<<cifra;
       num= num/10;
       suma+=cifra;

       if ((cifra%2)==0)
         par++;
       else
        impar++;


       if (cifra>maxi)
            maxi= cifra;

       if (cifra<mini)
            mini= cifra;

       contador ++;

   }
    prom= suma / contador;
    cout<<"\n";
    cout<<"Numero de cifras pares es "<<par<<"\n";
    cout<<"Numero de cifras impares es "<<impar<<"\n";
    cout<<"Suma de las cifras "<<suma<<"\n";
    cout<<"Cifra mayor es "<<maxi<<"\n";
    cout<<"Cifra Menor es "<<mini<<"\n";
    cout<<"Promedio de las cifras "<<prom<<"\n";
    return 0;
}
