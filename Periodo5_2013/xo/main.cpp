#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
char p1,p2,p3,p4,p5,p6,p7,p8,p9,marca;
int pos;
void presentar(char p1,char p2,char p3, char p4,char p5,char p6,char p7,char p8,char p9)
{
    cout<<p1<<"  "<<p2<<"  "<<p3<<"\n";
    cout<<p4<<"  "<<p5<<"  "<<p6<<"\n";
    cout<<p7<<"  "<<p8<<"  "<<p9<<"\n";
}
int main()
{  for (int i=0;i<3;i++)
    {


        cout << "ingresar la pos..:";
        cin>>pos;
        _flushall();
        cout<<" Ingresar la marca...:";


        switch (pos)
         {
         case 1:
            if ((p1=='X') or (p1=='0'))
                cout<<"ya esta ocupada";
            else
               cin.get(p1);
            break;
         case 2:
            if ((p2=='X') or (p2=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p2);
            break;

         case 3:
            if ((p3=='X') or (p3=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p3);
            break;

        case 4:
            if ((p4=='X') or (p4=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p4);
            break;
         case 5:
            if ((p5=='X') or (p5=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p5);
            break;
         case 6:
            if ((p6=='X') or (p6=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p6);
            break;
        case 7:
            if ((p7=='X') or (p7=='0'))
                cout<<"ya esta ocupada";
            else
                 cin.get(p7);
            break;
         case 8:
            if ((p8=='X') or (p8=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p8);
            break;
         case 9:
            if ((p9=='X') or (p9=='0'))
                cout<<"ya esta ocupada";
            else
                cin.get(p9);
            break;

         }
    _flushall();
    cout<<"\n";
    presentar(p1,p2,p3,p4,p5,p6,p7,p8,p9);

    }
    return 0;
}
