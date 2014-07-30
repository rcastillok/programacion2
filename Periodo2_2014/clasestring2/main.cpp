#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string cadena;
int main()
{
    cout<<"Ingresar la cadena..:";
    cin>>cadena;
    string subcadena (cadena,3, 4);// de la pos 2 a la pos 6
    cout<<"Valor de Subcadena "<<subcadena<<"\n";
    string cortar;
    cortar = cadena.substr(0, 5);
    cout<<"valor de cortar "<<cortar<<"\n";
    cout<<"Tamaño de la cadena "<<cadena.size()<<"\n";

    string insertado;
    insertado = cadena;
    insertado= cadena.insert(1, "Juan");
    cout<<"valor de insertado "<<insertado<<"\n";

    string reple;
    reple= "012345678910";
    reple= reple.replace( 1,6 , "Rommel");
    cout<<"Valor ree "<<reple<<"\n";
    return 0;
}
