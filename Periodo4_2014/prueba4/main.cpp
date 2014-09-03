#include <iostream>

using namespace std;
struct empleado
{
    char nombre[30];
    char  zona;
    double ventas,comis;
};
const int n=5;
empleado emple[n];
empleado maxemple;

void ingresoReg(empleado emple)
{
    cout<<"Ingresar el Nombre del empleado...:";
    cin>>emple.nombre;
    cout<<"Ventas de la semana ..";
    cin>>emple.ventas;
    do
    {
        cout<<"Ingresar el turno...:";
        cin>>emple.zona;
    }while(!((emple.zona=='A') or (emple.zona=='B') or (emple.zona=='C')));

}
void ingresar(empleado emple[],int n)
{ int i;
  for (i=0;i<n;i++)
  {
      ingresoReg(emple[i]);
  }

}
double comision(empleado emple)
{
    switch (emple.zona)
    {
    case 'A':
        return emple.ventas * 0.05;
        break;
    case 'B':
        return emple.ventas * 0.06;
        break;
    default:
        return emple.ventas * 0.08;
        break;
    }
}

void calcular(empleado emple[],int n)
{
  int i;
  for (i=0;i<n;i++)
  {
      emple[i].comis=comision(emple[i]);

  }
}
void presentarReg(empleado emple)
{
    cout<<"Nombre del empleado "<<emple.nombre <<"\n";
    cout<<"Ventas del Mes "<<emple.ventas <<"\n";
    cout<<"Zona "<< emple.zona<<"\n";
    cout<<"Comisión  "<<emple.comis <<"\n\n\n";

}

void presentar(empleado emple[],int n)
{
  int i;
  for (i=0;i<n;i++)
  {
     presentarReg(emple[i]);

  }
}
empleado maxEmpleado(empleado emple[],int n)
{
  int i;
  empleado mayor;
  mayor.comis=0;
  for (i=0;i<n;i++)
  {
     if (emple[i].comis>mayor.comis)
     {
         mayor = emple[i];
     }

  }
  return mayor;
}
int main()
{ ingresar(emple,n);
  calcular(emple,n);
  presentar(emple,n);
  maxemple=maxEmpleado(emple,n);
  cout<<"Empleado Mayor ";
  presentarReg(maxemple);



}
