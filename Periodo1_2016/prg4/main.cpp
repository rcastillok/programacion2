#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
Ingresar dos  numeros y determinar cual es el numero
mayor.
*/
int main()
{  int num1,num2,mayor;
   printf("Ingresar Numero#1..:");
   scanf("%d",&num1);
   printf("Ingresar Numero#2..:");
   scanf("%d",&num2);

   if (num1>num2)
   {
       mayor = num1;
   }
   else
   {
       mayor = num2;
   }
   printf("Numero mayor es %d \n",mayor);

    return 0;
}
