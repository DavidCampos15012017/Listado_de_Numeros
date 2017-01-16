#include <iostream>

using namespace std;
#include <iomanip>

int listaNumeros(int, int);// Prototipo de la función listaNumeros

int esPar(int );//Prototipo de la función esPar

int lista[10];// Definición de la lista como variable global

int main()
{
    cout<<" Bienvenido !"<<"\n Sistema de listado de numeros\n ----------------------------------"<<endl;
    cout<<"\n Puede ingresar hasta 10 numeros enteros, para ingresar menos, digite 15 \n";

    int numero, contador=0;
    do
        {
            cout<<" Numero "<<contador+1<<" :";
            cin>>numero;
            listaNumeros(numero, contador++);//Llamada a la función para agrergar valores a la lista.

        }while(numero != 15 & contador < 10);

    // Imrpesión de la lista
    cout<<" Posicion:"<<setw(10)<<" Valores:"<<endl;

    for (int n=0; n< contador; n++)
            {
                cout<<" "<<n+1<<")"<<setw(10)<<lista[n]<<endl;

                }
    cout<<"\n Cantidad de Pares: "<<esPar(contador)<<endl; //llamada a la función para contar cantidad de pares.

}// Fin del programa principal

// Esta función se encarga de recorrer la lista para saber la cantidad de números pares que tiene.
int esPar( int contador)
{


int par=0;
for (int j = 0; j< contador; j++)
{
    if (lista[j]%2==0)
    par++;
    }

return par;


}




// Esta función se encarga de agregar los valores a la lista
int listaNumeros(int valor, int contador)
{
    //static int lista[10];

    lista[contador]={valor};

    return lista[contador];

}
