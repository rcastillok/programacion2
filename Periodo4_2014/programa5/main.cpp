#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Ingresar el nombre del empleado,turno y las ventas, luego determinar
el porcentaje de comisi�n usando el turno de trabajo, el seguro
social usando la comisi�n y el total a pagar.

turno   por_comisi�n
1           6%
2           8%

Si el salario(comisi�n) es mayor a 7000 la deuducci�n es de
245 y sino es de 0.035% del salario.
el total a pagar es el ingreso (comisi�n ) - el ihss.


*/
int main()
{
   int turno;
   char nombre[30];
   double ventas,comis,ihss,tp;

   cout<<"Nombre del empleado :";
   cin.getline(nombre,30);

   cout<<"Ventas ..:";
   cin>>ventas;

   cout<<"Turno.....";
   cin>>turno;

   if (turno==1) //cuando se compara el signo igual en la condic�n
   {            //es Doble
       comis= 0.06 * ventas;
   }
   else
   {
       comis= 0.08 * ventas;
   }
   if (comis>7000)
   {
       ihss=245;
   }
   else
   {
       ihss=0.035 * comis;
   }

   tp= comis - ihss;
   cout<<"Comisi�n "<<comis <<"\n";
   cout<<"ihss "<< ihss<<"\n";
   cout<<"Total a pagar "<< tp<<"\n";

}
