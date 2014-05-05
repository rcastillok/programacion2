#include <iostream>

using namespace std;
/*
Ingresar un numero que este entre 50 y 100.
hacerlo 5 veces.

*/

int main()
{
    int numero;
    for (int i=0;i<5; i++)
    {
        cout<<"Ingresar numero entre 50-100..:";
        cin>>numero;
        while (!((numero>=50) and (numero<=100)))
        {
            cout<<"Ingresar numero entre 50-100..:";
            cin>>numero;
        }
    }


}
