#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   /*Ingresar dos numeros y presentar
    la suma */
   int num1,num2,suma;
   printf("Ingresar un numero 1 ");
   scanf("%d",&num1);
   printf("Ingresar un numero 2 ");
   scanf("%d",&num2);
   suma = num1+ num2;
   printf("Suma de los numeros es %d \n", suma);
  system("PAUSE");

    return 0;
}
