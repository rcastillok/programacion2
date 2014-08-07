#include <iostream>

using namespace std;
/*
Ingresar la tabla de la multiplicación a presentar , usar el ciclo
for asi

    1 X 5=5
    2 X 5=10
    .....
*/
int main()
{   int tabla,resp,i;

    cout << "Tabla de multiplicar a presentar ...:" ;
    cin>>tabla;
    for(i=1;i<=10;i++)
    {
        resp= i * tabla;
        cout<<i<<" X "<<tabla<<" = "<<resp<<"\n";
    }

}
