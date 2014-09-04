#include <iostream>

using namespace std;
int const lin=5;
int const col=5;
int bidi[lin][col];
int linsuma,sumal;

void ingreso(int bidi[][col],int lin,int col)
{
    int l,c;
    for (l=0;l<lin-1;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<"Ingresar Numero["<<l<<","<<c<<"]..:";
            cin>>bidi[l][c];
        }
    }
}

void presentar(int bidi[][col],int lin,int col)
{   int l,c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<bidi[l][c]<<" ";
        }
        cout<<"\n";
    }

}
void promedio(int bidi[][col],int col,int lin)
{   int l,c;
    for(c=0;c<col;c++)
        { bidi[lin-1][c]=0;
            for (l=0;l<lin-1;l++)
            {
               bidi[lin-1][c] += bidi[l][c];
            }

            bidi[lin-1][c]=  bidi[lin-1][c]/(lin-1);
        }


}
int main()
{   ingreso(bidi,lin,col);
    promedio(bidi,col,lin);
    presentar(bidi,lin,col);

}
