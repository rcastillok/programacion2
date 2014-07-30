#include <iostream>

using namespace std;

int main()
{  int c1,c2,c3;
    int a,m,d;

    a=2014;
    m=14;

    d=10;

    c1=a>0;
    if (c1)
        cout<<"Año Correcto ";
    else
        cout<<"Año incorrecto";
  cout<<"\n";

    c2=((m>=1) && (m<=12));
    if (c2)
    cout<<"Mes Correcto ";
    else
        cout<<"Mes incorrecto";
cout<<"\n";

  if ((c1) && (c2))
      cout<<"Fecha correcta";
else
    cout<<"Fecha incorrecta";
cout<<"\n";

}
