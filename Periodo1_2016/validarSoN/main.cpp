#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ char resp;
 int num;
do
{  cout<<"Numero entero ...>";
   cin>>num;
    _flushall();
   do
   {    cout<<"Desea continuar ...:";
        cin.get(resp);
        _flushall();

   } while ((toupper(resp) !='S') and  (toupper(resp) !='N'));
} while ((toupper(resp)=='S'));
   return 0;
}
