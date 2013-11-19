#include <iostream>

using namespace std;
int sueldo,ihss;

int seguro_social(int sueldo)
{   int vihss;
    if (sueldo>7000)
    {
        vihss=245;
    }
    else
    {
        vihss=0.035 * sueldo;
    }
    return vihss;
}

int main()
{
    cout << "Ingresar su sueldo...:";
    cin>>sueldo;
    ihss= seguro_social(sueldo);
    cout<<"Seguro Social ....:"<<ihss<<"\n";

    return 0;
}
