#include <iostream>
using namespace std;

int Cola[5];
int frente = -1, atras = -1, n=5;

void insertarCO(int val) {
   if ((frente == 0 && atras == n-1) || (frente == atras+1)) {
      cout<<"La cola esta llena \n";
      return;
   }
   if (frente == -1) {
      frente = 0;
      atras = 0;
   } else {
      if (atras == n - 1)
      atras = 0;
      else
      atras = atras + 1;
   }
   Cola[atras] = val ;
}
void borrarCO() {
   if (frente == -1) {
      cout<<"Cola Underflow\n";
      return ;
   }
   cout<<"El elemento eliminado de la cola es : "<<Cola[frente]<<endl;

   if (frente == atras) {
      frente = -1;
      atras = -1;
   } else {
      if (frente == n - 1)
      frente = 0;
      else
      frente = frente + 1;
   }
}
void mostrarCO() {
   int f = frente, r = atras;
   if (frente == -1) {
      cout<<"La cola esta vacia"<<endl;
      return;
   }
   cout<<"Los elementos de la cola son :\n";
   if (f <= r) {
      while (f <= r){
         cout<<Cola[f]<<" ";
         f++;
      }
   } else {
      while (f <= n - 1) {
         cout<<Cola[f]<<" ";
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<Cola[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}
int main() {

   int ch, val;
   cout<<"1)Insertar un elemento\n";
   cout<<"2)Borrar un elemento\n";
   cout<<"3)Mostrar Cola\n";
   cout<<"4)Salir\n";

    do {
        cout<<"Ingrese una opcion : "<<endl;
        cin>>ch;
        switch(ch) {
            case 1:
                cout<<"Numero a insertar: "<<endl;
                cin>>val;
                insertarCO(val);
            break;

            case 2:
                borrarCO();
            break;

            case 3:
                mostrarCO();
            break;

            case 4:
                cout<<"Salir\n";
            break;

            default: cout<<"Incorrecto!\n";

                }
    }

    while(ch != 4);
   return 0;
}
