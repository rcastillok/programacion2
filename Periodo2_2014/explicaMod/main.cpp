#include <iostream>

using namespace std;

int main()
{
   int n=45;
   int rev;

    rev= n % 10;
    n= n/10;
    cout<<rev;
    rev= n % 10;
    cout<<rev;

}
