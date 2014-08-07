#include <iostream>

using namespace std;

int main()
{
    int numero,cifra,suma,cp,ci,conta,prom;
    numero=0; suma =0; conta=0; cp=0;ci=0;

    cout<<"ingresar un numero ..:";
    cin>>numero;

    while (numero>0)
    {
        cifra=numero % 10;
        numero= numero/10;
        suma+= cifra;

        if (cifra %2==0)
        {
            cp++;
        }
        else
        {
            ci++;
        }
        conta++;
    }
    prom= suma/conta;

    cout<<"Suma...:"<<suma<<"\n";
    cout<<"Promedio :"<<prom<<"\n";
    cout<<"Contador de Pares ..:"<<cp<<"\n";
     cout<<"Contador de Impares ..: "<<ci<<"\n";

}
