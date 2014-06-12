#include <stdlib.h>
#include <iostream>

#include <time.h>
using namespace std;


    void ordenar_numeros(int arreglo[], int lon){
        int Temp;
         for(int i=0;i<lon;i++)
                for(int j=0;j<lon-i;j++)
                    if(arreglo[j]>arreglo[j+1])
                        {
                        Temp=arreglo[j];
                        arreglo[j]=arreglo[j+1];
                        arreglo[j+1]=Temp;
                    }


                        }


void presentar(int arreglo[], int lon)
{
    for(int i=0;i<lon;i++)
                    cout<<arreglo[i]<<endl;
}

void ingresar(int arreglo[], int lon)
{        int n;
        for(int i=0;i<lon;i++)
        {

            n=1 + rand() % (100-1);
            arreglo[i]=n;
            }

}
main()
{
        srand(time(0));
        int lon;
        cout<<"Ingresa el numero de numeros a capturar: ";
        cin>>lon;
        int arreglo[lon];
        ingresar(arreglo,lon);
        ordenar_numeros(arreglo,lon);
        cout<<endl<<"Numeros ordenados: "<<endl;
        presentar(arreglo,lon);
        system("pause");
 }
