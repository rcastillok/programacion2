#include <iostream>


using namespace std;
struct empleado
{
    char nombre[30];
    int horas,turno; // 1,2,3
    double pxh,pb;

};
empleado emple; //empleado es el tipo de datos y emple la variable.

int main()
{
    cout<<"Ingresar el nombre ";
    cin.getline(emple.nombre,30);

    cout<<"Ingresar Horas....:";
    cin>>emple.horas;

    do
    {
        cout<<"Ingresar el turno 1,2,3....>";
        cin>> emple.turno;

    }while (!((emple.turno>=1)and (emple.turno<=3)));

    switch (emple.turno)
    {
        case 1:
            emple.pxh=90;
            break;
        case 2:
            emple.pxh=100;
            break;
        default :
            emple.pxh=130;
            break;

    }


    emple.pb = emple.pxh * emple.horas;

    cout<<"Pago por hora "<<emple.pxh<<"\n";
    cout<<"Total pagar   "<<emple.pb<<"\n";


}
