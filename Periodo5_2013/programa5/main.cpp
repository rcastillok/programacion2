#include <iostream>

using namespace std;
/*
se tiene que ingresar la nota del alumno y el programa deberá de
presentar la observación usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente.


*/
int main()
{   int nota;
    cout << "Ingresar la nota del alumno..>" ;
    cin>> nota;

    if (nota<60)
    {
        cout<<"Reprobado "<<"\n";
    }
    else if (nota<81)
        {
            cout<<"Bueno"<<"\n";
        }
    else if (nota<91)
        {
            cout<<"Muy Bueno********"<<"\n";
        }
    else
        {
            cout<<"****Sobresaliente****"<<"\n";
        }
    return 0;
}
