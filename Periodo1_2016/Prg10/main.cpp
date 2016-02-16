#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{   srand(time(0));
    int i;
    int n,numero;
    cout<<"Ingresar numero de veces...:";
    cin>>n;
    for (i=1;i<=n;i++)
    {    numero =50 + rand() % (100-50);
        cout<<"Valor de la I es "<<i<<"  "
        <<"valor de Numero"<<numero<<"\n";
    }
   system("PAUSE");
    return 0;
}
