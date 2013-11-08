#include <iostream>

using namespace std;
/*
los parametros de valor no no reflejan os cambios que tienen en un
procedimiento en el main, pero los de variable si reflejan todos los cambios
que hayan sufrido en el prgrama principal.A estos se les coloca el &.

*/
void calcular(int &sueldo, int &ihss)
{
    if (sueldo>7000)
        ihss=245;
    else
        ihss=0.035 * sueldo;

    sueldo=sueldo * 1.20;

}

int main()
{
    int sueldo;
    int ihss=0;


    cout<<"Ingresar el sueldo...:";
    cin>>sueldo;

    calcular (sueldo,ihss);

    cout<<"Sueldo...:"<<sueldo<<"\n";
    cout<<"Ihss.....:"<<ihss<<"\n";

    return 0;
}
