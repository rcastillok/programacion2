#include <iostream>

using namespace std;
/*
Ingresar un numero y determinar cuantas cifras tiene, evaluar hasta
cuatro cifras y luego decr tiene mas de 4 cifras.
no tiene que importar el signo se evaluara el valor abosoluto.


<--------------------------------------------->
      0     9      99        999      9999

*/
int main()
{  int num;
    cout<<"Ingresar un numero entero...:";
    cin>>num;
    if (num<0)
        num *= (-1); // num = num * (-1);

    if (num<10)
        cout<<"Tiene una cifra";
     else if (num<100)
         cout<<"Tiene dos cifras";
           else if (num<1000)
             cout<<"Tiene tres cifras";
           else if (num<10000)
               cout<<"Tiene cuatro cifras";
           else
              cout<<"Tiene mas de cuatro cifras";
     cout<<"\n";

}
