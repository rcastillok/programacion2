#include <iostream>

using namespace std;


int main()
{
    int numero;
    for (int i=0;i<5; i++)
    {
      do
        {
            cout<<"Ingresar numero entre 50-100..:";
            cin>>numero;
        } while (!((numero>=50) and (numero<=100)));
    }

}
