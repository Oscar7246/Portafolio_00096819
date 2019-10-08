#include <iostream>
#include <vector>
using namespace std;

struct OrdenPupusas{
    int FrijolConQueso;
    int Revueltas;
    int Queso;
    string TipoDeMasa;
};
typedef struct OrdenPupusas Orden;

Orden solicitarOrden(){
    Orden p;
    cout << "Cuentas pupusas de frijol con queso: "; cin >> p.FrijolConQueso;
    cout << "Cuentas pupusas de revultas: ";   cin >> p.Revueltas;
    cout << "Cuentas pupusas de queso: "; cin >> p.Queso;
    cout << "La masa es de arroz o de maiz: "; cin >> p.TipoDeMasa;
    return p;
}

void mostrarOrden(Orden p){
    cout << "Cuentas pupusas de frijol con queso: " << p.FrijolConQueso << endl;
    cout << "Cuentas pupusas de revultas: " << p.Revueltas << endl;
    cout << "Cuentas pupusas de queso: " << p.Queso << endl;
    cout << "La masa es de arroz o de maiz: " << p.TipoDeMasa << endl;
}

vector<Orden> lista;

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        mostrarOrden(lista[i]);
}

void menu(){
    cout<<" 1. Agregar orden                          "<<endl;
    cout<<" 2. Mostrar orden                          "<<endl;;
    cout<<" 5. Salir                                 "<<endl;

    cout<<"\n Ingrese una opcion: ";
}

int main(){

    int op;

    do
    {
        menu();  cin>> op;

        switch(op)
        {
            case 1:
                 cout<< "\n Agregando Orden " << endl;
                 agregarOrden();
            break;


            case 2:

                 cout << "\n\n Mostrar Orden \n\n";
                 mostrarLista();
            break;
         }

        cout<<endl<<endl;
        system("pause");  system("cls");

    }while(op!=3);


    return 0;
}
