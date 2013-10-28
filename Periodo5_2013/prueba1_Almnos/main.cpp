#include <iostream>

using namespace std;
/* ingresar el nombre del empleado, las horas trabajadas, el turno, luego determinar las horas normales que son las primeras 40 y las extras
que son las mayores a 40.
debera de obtener pago por hora usando el turno, luego un bono, el pago bruto que son la suma de los pagos normales y extras.
ihss y total a pagar
turno pn  pe
1     100 130
2     135 140
3     140 150
bono si el empleado es de turno 1 y trabajado mas de 45 horas el bono es de 300 y sino de 100.

para calcular el seguro el pago bruto mayor a 7000 es 245 y sino el pago bruto por 3.5%.  */
int main()
{   char nombre [30];
    int  horas, turno, bono=0;
    double pn, pe , ihss, total, hn, he, pb, pbnormal, pbextra;

    cout <<"Ingresar el Nombre del Empleado....>";
    cin.getline(nombre,30);

    cout<<"Ingresar las horas trabajadas....>";
    cin>>horas;

    cout<<"Ingresar el turno 1,2,3....>";
    cin>>turno;

    if (horas<=40)
    {

        hn=horas;
        he=0;
    }


    else if (horas>40)
    {
        hn=40;
        he=horas-40;
    }

    if (turno==1)
    {
         pn=100;
         pe=130;
    }

    else if (turno==2)
    {
         pn=135;
         pe=140;
    }

    else if (turno==3)
    {
         pn=140;
         pe=150;
    }


     pbnormal=hn*pn;
     pbextra=hn*pe;

     if ((horas>40) and (turno == 1) )
    {
        bono = 300;
    }

    if ((turno==1) and (horas<40))
 {
        bono = 100;
    }

    pb  = pbnormal+ pbextra;

    if ( pb > 7000)
    {
        ihss = 245;
    }

    else if ( pb <= 7000)
    {
        ihss = pb* 0.035;
    }

     total = pb + bono - ihss;


     cout<<"Horas Normales...>"<<hn<<"\n";
     cout<<"Horas Extra...>"<<he<<"\n";
     cout<<"Bono..>"<<bono<<"\n";
     cout<<"Pago Normal..>"<<pbnormal<<"\n";
     cout<<"Pago Extra..>"<<pbextra<<"\n";
     cout <<"Pago Bruto...>"<< pb <<"\n";


    return 0;
}
