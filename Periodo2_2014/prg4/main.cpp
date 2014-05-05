#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
INGRESAR UN NUMERO Y ESCRIBIR EN LA PANTALLA EN EL RANGO
QUE SE ENCUENTRA EL NUMERO.
RANGO
1-100
101-300
301-500
500-

*/

using namespace std;

int main()
{
    int numero;
    double num;
    srand(time(0));

   // cout<<"Ingresar un numero entero...>";
    //cin>>numero;

    num= rand();
    cout<<"Num es Rand de "<<num<<"\n";
    numero= 1 + rand() % (500-1);

    cout<<"Numero generado es ..:"<<numero<<"\n";

    if ((numero>=1) and (numero<=100))
    {
        cout<<"El numero esta en el rango de 1-100 ";
    }
    else if ((numero>=101) and (numero<=300))
    {
        cout<<"El numero esta en el rango de 101-300 ";
    }
    else if ((numero>=301) and (numero<=500))
    {
        cout<<"El numero esta en el rango de 301-500 ";
    }
    else if (numero>500)
    {
        cout<<"El numero es mayor a 500 ";
    }
    else
    {

            cout<<"El numero es negativo";
    }
    cout<<"\n";
    system("PAUSE");
}
