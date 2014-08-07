#include <iostream>

using namespace std;
/*

12345
1234
123
12
1

*/

int main()
{
  int i,k;
  for (i=1;i<=10;i++)
  {
      for(k=1;k<i;k++)
      {
          cout<<"*";
      }
      cout<<"\n";
  }
}
