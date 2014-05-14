#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*
Ingresar  dos numeros usando un procedimiento
luego usando otro procedimiento sumar los numeros
y presentarlos.
*/
void ingreso(int &num1,int &num2)
{
    cout<<"Ingresar numero #1..:";
    cin>>num1;
    cout<<"Ingresar numero #2..:";
    cin>>num2;

}
void sumar (int num1,int num2, int &suma)
{
    suma= num1 + num2;
}
int main()
{
    int num1,num2,suma;
    ingreso(num1,num2);
    sumar(num1,num2,suma);
    cout<<"Suma es "<<suma<<"\n";
}
