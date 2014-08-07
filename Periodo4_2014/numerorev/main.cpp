#include <iostream>

using namespace std;

int main()
{
    int numero,cifra,suma;
    numero=0; suma =0;

    cout<<"ingresar un numero ..:";
    cin>>numero;

    while (numero>0)
    {
        cifra=numero % 10;
        cout<<cifra;

        numero= numero/10;

        suma+= cifra;
    }
    cout<<"suma  "<<suma<<"\n";

}
