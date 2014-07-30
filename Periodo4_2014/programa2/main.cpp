#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Ingresar las horas trabajadas y el pago por hora del empleado
luego determinar su pago de horas , la deuducción del Rap que
 es el 1.5% del ingreso , presentar el total a pagar.
*/

int main()
{  int horas,pxh,phoras,rap,totalp;

   cout<<"Ingresar las horas trabajadas...:";
   cin>>horas;

   cout<<"Ingresar el Pago por Hora...:";
   cin>>pxh;

   phoras = pxh * horas;

   rap = phoras * 0.015;

   totalp = phoras - rap;

   cout<<"Pago total de horas es "<<phoras<<"\n";
   cout<<"Deducción del RAP ..."<<rap<<"\n";
   cout<<"Total a pagar es ....:"<<totalp<<"\n";

    system("PAUSE");


}
