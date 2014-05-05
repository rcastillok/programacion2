#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
/*
Generar un numero random entre 1-350 y
determinar el rango en el que se
encuentra
    1-50
    51-120
    121-200
    201-

*/

int main()

{   srand(time(0));
    int numero;
    numero = 1 + rand() % (350-1);

    cout << "Numero generado es " << numero<<"\n";

    if ((numero>=1) and (numero<=50))
        {cout<<"Numero se encuentra entre 1-50";}

    else if ((numero>=51) and (numero<=120))
         {cout<<"Numero se encuentra entre 51-120";}
     else if ((numero>=121) and (numero<=200))
         {cout<<"Numero se encuentra entre 121-200";}
     else
         {cout<<"Numero mayor a  200";}
    cout<<"\n";

    system("PAUSE");

}
