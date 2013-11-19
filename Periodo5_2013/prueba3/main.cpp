#include <iostream>

using namespace std;
int numero,ncifras;
void ingreso(int &numero)
{
    do
    {
        cout<<"Ingresar un numero par divisible entre 5..>";
        cin>>numero;
    }while (!(((numero % 2)==0) or ((numero % 5 )==0)));

}

void contarCifras(int numero,int &ncifras)
{
    while (numero>0)
    { ncifras++;
      numero=numero/10;
    }
}

int main()
{  for (int i=0;i<5;i++)
    {   ncifras=0;
        ingreso(numero);
        contarCifras(numero,ncifras);
        cout<<numero<<"  tiene "<<ncifras<<" cifras"<<"\n";

    }

    return 0;
}
