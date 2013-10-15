#include <iostream>

using namespace std;
//ingresar un numero y determinar si es positivo negativo o cero
int main()
{   int numero;
    cout << "Ingresar un numero ....>" ;
    cin>> numero;

    if (numero>0)
    {
        cout<<"EL NUMERO ES POSITIVO"<<"\n";
    }
    else if (numero<0)
    {
       cout<<"EL NUMERO ES NEGATIVO"<<"\n";
    }
    else
        {
          cout<<"EL NUMERO ES CERO"<<"\n";
        }

    return 0;
}
