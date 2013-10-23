#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y presentar el promedio de los pares e impares
luego y el numero mayor de los 5 numeros ingresados.

*/
int main()
{  int numero,cpar,cimpar,contador,mayor,menor;
   double prompares,promimpares;
    int sumap,sumai;
    sumap=0;
    sumai=0;
    contador =0;
    cimpar=0;
    cpar=0;
    mayor =0;
    menor = 1000000;

    while(contador<5)
        {   cout<<"Ingresar un numero >";
            cin>>numero;
            if ((numero % 2)==0)
            {
                sumap+=numero;// sumap=sumap+numero
                cpar++;
            }
            else
            {
                sumai+=numero;
                cimpar++;
            }
            contador ++;
            if (numero>mayor)
            {
                mayor=numero;
            }
            if (numero<menor)
            {
                menor=numero;
            }


        }//fin de ciclo

        cout<<"Numero Mayor es ...:"<<mayor<<"\n";
        cout<<"Numero Menor  es ...:"<<menor<<"\n";
        if (sumap!=0)
        {
               prompares=sumap/cpar;
        }
        else
        {
            prompares=0;
        }

        if (sumai!=0)
        {
               promimpares=sumai/cimpar;
        }
        else
        {
            promimpares=0;
        }

        cout<<"Promedio pares "<<prompares<<"\n";
        cout<<"Promedio de impares es "<<promimpares<<"\n";
    return 0;
}
