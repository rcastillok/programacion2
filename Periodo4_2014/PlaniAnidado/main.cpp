#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;
/*
Ingresar el nombre del empleado, las ventas de los 7 dias de
la semana , luego pedir el turno de trabajo (1,2,3 validar el turno).

Calcular el % de comisión usando el turno

Turno                    %
comis

1                                             5%

2                                             7%

3                                             8%



El seguro
social y el total a pagar , luego preguntar si desea continuar , al final
presentar el mejor sueldo, el sueldo promedio y la suma de todos los sueldos.
*/
int main()
{ int turno,ventas,sumaventa,i,c;
  char nombre[30],resp;
  double pc,comis,ihss,tp,sumaglobal,promedio,maxsueldo;
  maxsueldo=0;sumaglobal=0;c=0;
 do
    {


          cout<<"Ingresar el nombre del empleado..>";
          cin.getline(nombre,30);
          for (i=0;i<7;i++)
          {
              cout<<"Ingresar las ventas #"<<i<<"...>";
              cin>>ventas;
              sumaventa += ventas;
          }
          do
          {   cout<<"Turno 1,2,3 ";
              cin>>turno;

          }while (!((turno>=1) and (turno<=3)));

           switch (turno)
           {
               case 1:
                pc=0.05;
                break;
               case 2:
                pc=0.07;
                break;
               default:
                pc=0.08;
                break;
           }
           comis= pc * sumaventa;
           if (comis>7000)
           {
               ihss=245;
           }
           else
            {
                ihss=0.035 * tp;
            }
           tp = comis - ihss;
           sumaglobal+= tp;
           if (maxsueldo>tp)
           {
               maxsueldo=tp;
           }

           c++;

           cout<<"Suma ventas "<<sumaventa <<"\n";
           cout<<"Porcentaje de comisión "<<pc <<"\n";
           cout<<"Comisión "<<comis <<"\n";
           cout<<"Ihss  "<<ihss <<"\n";
           cout<<"Total a pagar "<<tp <<"\n";
           do
            {
               cout<<"Desea Continuar...>";
               cin.get(resp);
                _flushall();
            } while ((resp !='S') and  (resp !='N'));

    }while (resp!='N');
    promedio = sumaglobal/c;

    cout<<"Promedio "<<promedio<<"\n";
    cout<<"Mayor Sueldo "<<maxsueldo<<"\n";
    cout<<"Suma Global "<<sumaglobal<<"\n";


}
