#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
/*Una función que nos devuelva un numero 1-500.
otra función donde nos devuelva la suma de las cifras pares
del numero ingresado.
Elaborar procedimiento donde se presente las cifras del numero
con asteriscos
543
3***
4****
5*****
Hacerlo hasta que el usuario diga que no quiere continuar.
*/
int generarNumero()
{  int numx;
    srand(time(0));// generar una nueva semilla
    numx = 1 + rand()%(501-1);
    return numx;
}
int sumaCifras(int num)
{
    int c,numx;
    c=0;
    while (num>0)
    {
        numx= num % 10;
        if (num%2==0)
        {
            c+=numx;
        }

        num= num/10;

    }
    return c;
}
void presentar(int num)
{
   int c,numx,i;

    while (num>0)
    {
        numx= num % 10;
        cout<<numx<<" ";
        for (i=0; i<numx;i++)
        {
            cout<<"*";
        }
        cout<<"\n";

        num= num/10;

    }
}
char pedirrespuesta()
{  char respx;
         do
            {
               cout<<"Desea Continuar...>";
               cin.get(respx);
                _flushall();
            } while ((respx !='S') and  (respx !='N'));
        return respx;
}
int main()

{

    int num,xsuma;
    char resp;
 do{
    num=generarNumero();
    xsuma=sumaCifras(num);
    cout<<"Numero "<<num<<" suma de pares "<<xsuma<<"\n";
    presentar(num);
    resp = pedirrespuesta();
 }while (resp!='N');

}
