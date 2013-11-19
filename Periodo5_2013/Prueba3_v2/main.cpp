#include <iostream>

using namespace std;
int vnumero,vncifras;
int ingreso()
{   int numero;
    do
    {
        cout<<"Ingresar un numero par divisible entre 5..>";
        cin>>numero;
    }while (!(((numero % 2)==0) or ((numero % 5 )==0)));
    return numero;
}

int contarCifras(int numero)
{   int ncifras;
    while (numero>0)
    { ncifras++;
      numero=numero/10;
    }
    return ncifras;
}

int main()
{  for (int i=0;i<5;i++)
    {   vnumero=ingreso();
        vncifras=contarCifras(vnumero);
        cout<<vnumero<<"  tiene "<<vncifras<<" cifras"<<"\n";

    }

    return 0;
}
