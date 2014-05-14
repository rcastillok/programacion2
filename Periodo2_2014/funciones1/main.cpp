#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int notafinal(int na,int ne)
{   int nf;
    nf=na + ne;
    return nf;
}
void ingreso(char nombre[],int &na,int &ne)
{
    cout<<"Ingresar nombre..:";
    cin.getline(nombre,30);
    cout<<"Ingresar nota Acumulada...:";
    cin>>na;
    cout<<"Ingresar nota Examen...:";
    cin>>ne;

}

int main()
{ char nombre[30];
  int na,ne,nf;
  ingreso(nombre,na,ne);
  nf= notafinal(na,ne);
  cout<<"Nota Final es "<<nf<<"\n";


}
