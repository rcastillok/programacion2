#include <iostream>
/*
Ingresar 5 numeros a un arreglo.
los numeros deberan de estar entre 50-100.

usando una función deberá de obtener la suma de los numeros divisibles
entre 5.

crear una función para determinar el promedio de los
numeros pares

crear un procedimiento para modificar el arreglo y colocar 0 a todos
los numeros que son pares.

crear un procedimiento para presentar el arreglo.

*/
const int tam=4;
int arreglo[4];
int sumaA,promedioP;

void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
       do
       {
            cout<<"Ingresar numero...:";
            cin>>arreglo[i];

       }while(!((arreglo[i]>=50) and (arreglo[i]<=100)));

    }
}
int numerosvidisibles5(int arreglo[])
{
    int suma=0;
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i] % 5==0)
            suma += arreglo[i];
    }
    return suma;
}

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
