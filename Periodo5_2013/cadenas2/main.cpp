#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
char cadena[30];
int main()
{
    cout << "Ingresar una cadena...:" ;
    cin.getline(cadena,30);
    cadena[0]='X';
    cout<<cadena<<"\n";
    return 0;
}
