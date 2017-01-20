#include <iostream>
#include <windows.h>
using namespace std;

#include <cliente.h>

int funcionMenu(int a);

enum MENU {NUEVOCLIENTE = 1, PAGO, CONSULTA, FINALIZAR};

int main()
{
  
  int opc;
  do
   
  {
     
  
                 opc  = funcionMenu(opc);
                 switch (opc)
                 {
                    
                 case NUEVOCLIENTE:
                  {
                        cliente a;
                        a.nuevoCliente();
                        //cout<<"opc: "<<opc;
                        break;
                  }
                    
                 
                 default:
                 {
                  cout<<"Dato Invalido ";
                  break;
                  }
                  
                 }// fin del switch
   
}while ( opc != 4);// fin del while 
}// fin del main


int funcionMenu(int a)
{
   
   
      cout<<"\n1-Ingreso de Cliente\n2-Realizar Pago\n3-Concultas\n4-Finalizar\n";
      cin>>a;
      return a;
}
