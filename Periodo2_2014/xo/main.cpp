#include <iostream>

using namespace std;
/*
*/



const int  lin=2;
const int col=2;
char num[lin][col];
void rellenar(char num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {
            num[l][c]='*';
        }
    }
}
void presentar(char num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        { cout<<num[l][c]<<" ";

        }
        cout<<"\n";
    }
}
void pedir(char num[lin][col],char marca)
{   int linea,columna;
 cout<<"ingresar Marca "<<marca<<"\n";
   do
    {
    cout<<"Linea ";
    cin>>linea;
    }while (!((linea>=1) and (linea<=3)));
    linea-=1;
   do
   {
     cout<<"Columna ";
     cin>>columna;

   }while (!((columna>=1) and (columna<=3)));
    columna-=1;
    num[linea][columna]=marca;


}

int main()
{
   rellenar(num);
   presentar(num);
   for (int i =0;i<3;i++)
   {
        pedir(num,'X');
        presentar(num);
        pedir(num,'0');
        presentar(num);

   }
  ;
}
