#include <iostream>

using namespace std;
/*
se tiene que ingresar el nombre, la nota del alumno y el programa
 deberá de presentar la observación usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente.

usar condicionas donde apliquemos el and.
*/
int main()
{   char nombre;
    int nf;
    cout<<"Nombre ";
    cin.getline(nombre,30);
    cout<<"Nota final  ";
    cin>>nf;

    if ((nf>=1) and (nf<60))
    {
         cout<<"Reprobado";
    }
        else if ((nf>=60) and (nf<=80))
        {
             cout<<"Bueno";
        }
              else if ((nf>=81) and (nf<=90))
            {
                 cout<<"Muy Bueno";
            }
             else if ((nf>=91) and (nf<=100))
                {
                    cout<<"Sobresaliente";
                }
                else
                    {
                        cout<<"Nota incorrecta";
                    }
           cout<<"\n";


    return 0;
}
