#include <iostream>
#include <stdlib.h>

using namespace std;
//ingresar dos numeros y determinar cual es el Mayor

int main()
{
    int n1,n2,mayor;

    cout<<"Ingresar El Numero#1..:";
    cin>>n1;

    cout<<"Ingresar El Numero#2..:";
    cin>>n2;

    if (n1>n2)
    {
        mayor=n1;
    }
    else
    {
        mayor=n2;
    }

    cout<<"Mayor es "<<mayor<<"\n";

  system("PAUSE");

}
