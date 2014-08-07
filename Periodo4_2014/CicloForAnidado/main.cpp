#include <iostream>

using namespace std;
/*
Proeducir esta salida :
    1
    12
    123
    1234
    12345
    12345
    1234
    123
    12
    1
*/
int main()
{
    int i,k;

    for (i=1;i<=5;i++)
    {
        for (k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }

    for (i=5;i>=1;i--)
    {
        for (k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }

}
