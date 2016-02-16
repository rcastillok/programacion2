#include <iostream>

using namespace std;
int n1,n2;
void demo1(int &n1,int &n2)
{
    n1=70;
    n2=90;
}
int main()
{   n1=0;
     n2=0;
     demo1(n1,n2);
     cout<<"valor de n1="<<n1
     <<" valor n2="<<n2<<"\n";
    return 0;
}
