#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*
Ingresar un numero y determinar su signo
si es cero , positivo o negativo
*/
int main()
{  int num;
   printf("Ingresar un numero..>");
   scanf("%d",&num);
   if (num>0)
   {
       printf("El numero es Positivo \n");
   }
   else if (num<0)
   {
      printf("El numero es Negativo \n");
   }
   else
   {
       printf("El numero es Cero \n");
   }
    system("PAUSE");
    return 0;
}
