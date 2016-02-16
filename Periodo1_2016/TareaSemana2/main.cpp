#include <iostream>

using namespace std;

int main()
{
    int c1=0,c2=0,c3=0;
    int num;
    int c=0;
    while (c<5)
    {
        cout<<"Ingresar numero ...:";
        cin>>num;
        if (num<0)
        {
            num = num * (-1);  //num *=-1;
        }
        if ((num>=0) and (num<=50))
            c1++;
           else if  ((num>=51) and (num<=80))
              c2++;
             else
                c3++;
        c++;
    }
    cout<<"Contador 0-50 "<< c1<<"\n";
    cout<<"Contador 51-80 "<< c2<<"\n";
    cout<<"Contador >80 "<< c3<<"\n";

    return 0;
}
