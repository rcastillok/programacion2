#include <iostream>

using namespace std;
const int tam=5;
int arreglo[5];
int doble[5];



void ingreso(int arreglo[])
{   for (int i=0;i<tam;i++)
{


    do
    {cout<<"Ingresar un numero["<<i<<"]...:" ;
        cin>>arreglo[i];
    }while(!((arreglo[i] % 2)==0));
}
}

int suma100(int arreglo[])
{ int suma=0;

for (int i=0;i<tam;i++)
        {
        if (arreglo[i]>100)
        {
        suma+=arreglo[i];

        }
}
return suma;
}

int numerodiv5(int arreglo[])

{ int numeromayor=0;

for (int i=0;i<tam;i++)
{
    do
    { if (arreglo[i]>numeromayor)
    {


    numeromayor=arreglo[i];

    }
}while(!(arreglo[i] % 5)==0);
}
return numeromayor;
}


void cambio(int arreglo[])
{


    for (int i=0;i<=tam;i++)
    {

    doble[i]=arreglo[i]*2;

    }


}
int main()

{
int numeromayor,suma;
ingreso(arreglo);
for (int i=0;i<=tam;i++)
    {
        cout<<" , "<<arreglo[i];
    }
    cout<<"\n";
numeromayor=numerodiv5(arreglo);
suma=suma100(arreglo);
cambio(arreglo);
for (int i=0;i<=tam;i++)
    {
        cout<<" , "<<doble[i];
    }
cout<<"\n";

cout<<"La suma de los numeros mayor a 100 es = "<<suma<<"\n";
cout<<"El numero mayor de los divisible entre 5 es  = "<<numeromayor<<"\n";


    return 0;
}
