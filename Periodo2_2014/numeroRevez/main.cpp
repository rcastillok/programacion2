#include <iostream>

using namespace std;

int main()
{ int num,ul;
  cout<<"Ingresar un numero...:";
  cin>> num;
  while (num>10)
  {
      ul = num % 10;
      num= num /10;
      cout<<ul;

  }
  cout<<num;

}
