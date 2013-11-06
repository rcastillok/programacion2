#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{ int numero,sumad,suma,promedio,digito,xnumero,mayor,c;
 char resp;
 c=0;
 mayor=0; suma =0;
do
{
    do
    {
        cout<<"Ingresar un numero....:";
        cin>>numero;

    } while (!((numero %2 ==0) and ((numero>=1) and (numero<=200))));
    xnumero=numero;
    sumad=0;
    _flushall();

    while (xnumero>0)
    {
        digito= xnumero % 10;
        sumad+=digito;
        xnumero=xnumero/10;
    }
    cout<<"Suma de los digitos es ....:"<<sumad<<"\n";
    suma+=numero;
    c++;
    if (numero>mayor)
    {
        mayor=numero;
    }
    do
    {
        cout<<"Desea Continuar...";
        cin.get(resp);
    }while ((resp!='s')and (resp!='n'));

}while(resp!='n');
promedio=suma/c;
cout<<"Promedio...:"<<promedio<<"\n";
cout<<"mayor "<<mayor<<"\n";


    return 0;
}
