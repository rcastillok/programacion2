#include <iostream>

using namespace std;

int main()
{
  int num,ul,ccp,cci,ccc;
  cout<<"Ingresar un numero...:";
  cin>> num;
  ccp=0; cci=0, ccc=0;
  while (num!=0)
  {
      ul = num % 10;
      num= num /10;

      if ((ul % 2==0) and (ul!=0))
        ccp++;
       else if ((ul % 2!=0) and (ul!=0))
         cci++;

      if (ul==0)
        ccc++;

  }
  cout<<"Cifras Pares ....:"<<ccp<<"\n";
  cout<<"Cifras ImPares ....:"<<cci<<"\n";
  cout<<"Cifras ceros ....:"<<ccc<<"\n";


}
