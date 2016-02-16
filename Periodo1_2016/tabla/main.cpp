#include <iostream>

using namespace std;
/*Pedir la tabla de multiplicar entre 5-10.
    Luego presentar la tabla multiplicada
    de 1 a 10.
    Tabla 6
    1 X 6 =6
    .
    .
    10 x 6 = 60
    Luego preguntar si desea continuar.
 */
int main()
{   int tabla;
    int respx;
    char resp;
    int i;
    do
    {


        do
        {   cout<<"Tabla de multiplicar ....:";
            cin>>tabla;
        }  while ((tabla<5) or (tabla>10));

        for(i=1;i<=10;i++)
        {
            respx= tabla * i;
            cout<<i<<" X "<<tabla<<" = "<<respx<<"\n";
        }
         _flushall();
       do
       {    cout<<"Desea continuar ...:";
            cin.get(resp);
            _flushall();

       } while ((toupper(resp) !='S') and  (toupper(resp) !='N'));
    }while (toupper(resp) =='S')+
    return 0;
}
