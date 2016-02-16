#include <iostream>

using namespace std;
// presentar los numeros del 1 al 10 usando while
int main()
{   int c=0;int numero;int suma=0;
    int mayor=0;
    double promedio;

    while (c<5)
    {   c++;
        cout<<"Numero # "<< c <<"...:";
        cin >> numero;
        suma = suma + numero ; //suma+=numero;
        if (numero>mayor)
        {
            mayor = numero;
        }

    };
    promedio= suma / c;
    cout<<"Promedio de los numeros ingresados "<<promedio<<"\n";
    cout<<"Numero mayor es "<<mayor<<"\n";
    cout<<"Suma de los numeros es "<<suma<<"\n";
    cout<<"Final del ciclo\n";
    return 0;
}
