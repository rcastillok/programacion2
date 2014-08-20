#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int ls,li,num,mayor,suma;

void ingreso(int &ls, int &li)
{
    cout<<"Ingresar El limete inferior..:";
    cin>>li;
    do
    {
        cout<<"Ingresar El limite superior..:";
        cin>>ls;

    }while (ls<li);
}

int numero(int ls,int li)
{
    int numx;
    srand(time(0));// generar una nueva semilla
    numx = li + rand()%(ls-1);
    return numx;
}

void presenar (int num)
{
    int xnum;
    while (num>0)
    {   xnum= num % 10;
        num= num/10;
        cout<<xnum;

    }
    cout<<"\n\n";
}

int sumadiv5(int num)
{int xnum;
int c=0;
    while (num>0)
    {   xnum= num % 10;
        num= num/10;
        if (xnum % 5==0)
            c+=xnum;

    }
    return c;

}
int mayorcifra(int num)
{int xnum;
int mayor=0;
    while (num>0)
    {   xnum= num % 10;
        num= num/10;
        if (xnum>mayor)
            mayor=xnum;

    }
    return mayor;

}
int main()
{   suma=0;
    ingreso(ls,li);
     num=numero(ls,li);
     cout<<"Numero generado "<<num<<"\n";
     presenar(num);

     mayor=mayorcifra(num);
     suma= sumadiv5(num);

     cout<<"cifra mayor es "<<mayor<<"\n";
     cout<<"Suma Digitos div5 es "<<suma<<"\n";



}











































