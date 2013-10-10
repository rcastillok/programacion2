#include <iostream>

using namespace std;
/*
Ingresar las horas trabajadas , el pago por hora y calcular el salario
una deducción del 5% del salario y el total a pagar que es el sueldo
restando las deducciones.
*/
int main()
{   int horas;
    double pxh,salario,deduccion,tp;

    cout << "Ingresar las horas ...>" ;
    cin >> horas;

    cout<<"Ingresar el pago por hora...>";
    cin >> pxh;

    salario= horas * pxh;

    deduccion = salario * 0.05;

    tp= salario - deduccion;

    cout<<"Salario "<<salario<<"\n";
    cout<<"Deducción "<<deduccion<<"\n";
    cout<<"Total a pagar "<<tp<<"\n";
    return 0;
}
