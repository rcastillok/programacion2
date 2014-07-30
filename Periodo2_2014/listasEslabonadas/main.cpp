#include <iostream>

using namespace std;
struct nodo {
        int numero;
        struct nodo *siguiente;
        };

 struct nodo *primero, *ultimo;
 struct nodo *nuevo;
int main()
{
    primero = new nodo;
    ultimo = new nodo;
    primero=NULL;
    int xnum;
    for (int i =0 ; i<10; i++)
    {   nuevo = new nodo;
        cout<<"Ingresar un numero ";
        cin>>xnum;
        nuevo->numero=xnum;
        nuevo->siguiente= NULL;

        if (primero ==NULL)
        {  primero = nuevo;
           ultimo = nuevo;
           cout<<"inicio";
        }
        else
        { ultimo->siguiente = nuevo;
          ultimo = nuevo;
        }
    }
 ultimo->siguiente=NULL;
    struct nodo *aux;
      aux= primero;
      cout<<"\nMostrando la lista completa:\n";
      while (aux!=NULL) {
            cout<< "numero "<<aux->numero<<"\n";
            aux = aux->siguiente;
      }
    return 0;
}
