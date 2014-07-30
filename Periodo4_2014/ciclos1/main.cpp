#include <iostream>

using namespace std;
//ingresar 5 numeros y presentar la sumatorio al final del ciclo
//usar while.

int main()
{
    int numero;
    int contador,suma, cont100,prom;
    contador=0; suma=0; cont100=0;

    while (contador <5)
    {
        cout<<"Ingresar numero .:";
        cin>>numero;

        suma += numero;  //suma = suma + numero;

        contador ++ ;// contador = contador + 1;

        if (numero>100)
            cont100++;


    }
    prom=suma/contador;

    cout<<"Suma de los numeros es "<<suma<<"\n";
    cout<<"Numeros mayores a 100 "<<cont100<<"\n";
    cout<<"Promedio "<<promedio<<"\n";
}
