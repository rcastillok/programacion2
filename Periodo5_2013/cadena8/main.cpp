#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{ string cadena1,cadena2,com1;
    cadena1="Rommel Castillo";
    cadena2="elh";
    int largo= cadena1.size();
    int largo2= cadena2.size();
    int c=0;

    while(c<largo)
    {

        com1 =cadena1.substr(c,largo2);
      //  if (com1==cadena2)
        //{
           cout<<com1<<"\n";
        //}
        c++;


    }






    return 0;
}
