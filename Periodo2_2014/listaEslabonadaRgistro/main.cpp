#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct emple
{  char nombre[30];
   int sueldob;
   int ventas;

};
struct nodo {
        emple empleado;
        struct nodo *siguiente;
        };

 struct nodo *primero, *ultimo;
 struct nodo *nuevo;
 char resp;// variable para la respuesta
 emple temp;//variable temporal de empleado

 void ingresar(emple &empleado)
 {
     cout<<"ingresar Nombre..:";
     cin.getline(empleado.nombre,30);
     cout<<"Sueldo Base..:";
     cin>>empleado.sueldob;
     cout<<"Ventas ..:";
     cin>>empleado.ventas;
 }
 void presentar(emple empleado)
 {
     cout<<"Empleado "<<empleado.nombre<<"\n";
     cout<<"Sueldo Base "<<empleado.sueldob<<"\n";
     cout<<"Ventas  "<<empleado.ventas<<"\n\n";
 }

int main()
{    primero = new nodo;
    ultimo = new nodo;
    primero=NULL;
    int xnum;
    char resp;
    do
    {   nuevo = new nodo;
        //llamar el void de ingreso
        ingresar(temp);
        nuevo->empleado=temp; //se asigna el registro
        nuevo->siguiente= NULL;
        if (primero ==NULL)
        {  primero = nuevo;
           ultimo = nuevo;
        }
        else
        { ultimo->siguiente = nuevo;
          ultimo = nuevo;
        }
        do
        { cout<<"Desea Continuar...:";
          cin>>resp;

        }while ((resp!='N') and (resp!='S'));
        _flushall();

    }while ((resp!='N'));
    ultimo->siguiente=NULL;
    struct nodo *aux;
      aux= primero;
      cout<<"\nMostrando la lista completa:\n";
      while (aux!=NULL) {
            presentar(aux->empleado);//presentamos el
            //registro llamando el procedimiento
            //presentar
            aux = aux->siguiente;
      }
}
