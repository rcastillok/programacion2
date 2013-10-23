#include <iostream>
/*
ingresar el nombre del empleado , las horas trabajadas ,el turno ,
luego determinar  las horas normales que son las primeras 40
y las extras que son las mayores a 40.
deberá de obtener pago por hora usando el turno, luego un bono
, el pago bruto que son la suma de los pagos normales y extras.
ihss y total a pagar.

turno   pn  pe
1       100 130
2       135 140
3       140 150

bono si el empleado es de turno 1 y trabajo mas de 45 horas el
bono es de 300 y sino es de 100.

para calcular el seguo el pago bruto mayor a 7000 es 245 y
sino el pago bruto por 3.5%.


*/
using namespace std;
char nombre[30];
int horas,turno,hn,he;
double pxh,pxn,pxe,pn,pe,pb,ihss,tp,bono;

int main()
{
    cout << "Ingresar el nombre del empleado..:";
    cin.getline(nombre,30);
    cout<< "Ingresar las horas ...:";
    cin>> horas;
    cout<<"Ingresar el turno...:";
    cin>> turno;

    if (horas>=40)
    {
        hn=40;
        he=horas-40;

    }
    else
    {
        hn=horas;
        he=0;
    }
    if (turno==1)
        {
            pxn=100;
            pxe=130;
        }
            else if (turno==2)
            {
                pxn=135;
                pxe=140;
            }
                else if (turno==3)
                {
                    pxn=140;
                    pxe=150;
                }
                else
                    {
                        pxn=0;
                        pxe=0;
                    }
     pn= hn * pxn;
     pe= he * pxe;

     pb = pn + pe;

     if (pb>7000)
     {
         ihss= 245;
     }
     else
     {
         ihss= 0.035 * pb;
     }

     if ((turno==1) and (horas>40))
         {
             bono=300;
         }
         else
         {
             bono =100;
         }
     tp = pb+ bono - ihss;
     cout<< "Horas normales..:"<<hn<<"\n";
     cout<< "Horas extras..:"<<he<<"\n";
     cout<< "Pago normal "<< pn<<"\n";
     cout<< "Pago Extra "<<pe <<"\n";
     cout<< "Pago Bruto "<<pb<<"\n";
     cout<<"Bono ...:"<<bono<<"\n";
    cout<< "Seguro Social "<<ihss <<"\n";
    cout<< "Total a pagar "<<tp <<"\n";


    return 0;
}
