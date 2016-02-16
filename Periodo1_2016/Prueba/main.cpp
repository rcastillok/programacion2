#include <iostream>

using namespace std;

int main()
{   int c=0;
    double num,cr1=0,ar1=0,cr2=0,ar2=0,cr3=0,ar3=0;
    double mayor=0,menor=99999;
    double p1,p2,p3;
    while (c<5)
    {
        cout<<"Ingresar un numero ...>";
        cin>>num;
        if ((num>=1) and (num<=50))
        {
            cr1++;
            ar1+=num;
        }
        else if ((num>=51) and (num<=100))
            {
                cr2++;
                ar2+=num;
            }
        else if (num>100)
            {
                cr3++;
                ar3+=num;
            }
        c++;
        if (num>mayor)
        {
            mayor= num;
        }
        if (num<menor)
        {
            menor = num;
        }


    }// final del ciclo

    if (cr1>0)
        p1= ar1/cr1;

    if (cr2>0)
        p2= ar2/cr2;

    if (cr3>0)
        p3= ar3/cr3;
    cout<<"Promedio rango 1 "<<p1<<"\n";
    cout<<"Promedio rango 2 "<<p2<<"\n";
    cout<<"Promedio rango 3 "<<p3<<"\n";

    cout<<"Mayor ..:"<<mayor<<"\n";
    cout<<"Menor ..:"<<menor<<"\n";





    return 0;
}
