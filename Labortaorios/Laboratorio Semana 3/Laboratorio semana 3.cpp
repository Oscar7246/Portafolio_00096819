#include <iostream>
#include<cstdlib>
using namespace std;

//Ejercicio 4
/*int contador=0;

struct nodo{
	int dato;
	struct nodo *sig;
};

void menu();
nodo *crearNodo();
void insertarNodoFinal(nodo *&nuevo, nodo *&ini, nodo *&actual);
void insertarNodoInicio(nodo *&nuevo, nodo *&ini);
void mostrarLista(nodo *inicio);


int main(){
	system("color 4f");
	//este puntero se va a quedar siempre en el primer nodo de la lista
	nodo *inicio=NULL;
	//Este puntero siempre estara en el ultimo nodo que sea ingresado
	nodo *nodoActual=NULL;
	int opcion, SumaPar, SumaImpar;
	nodo *aux=NULL;

	do{
		menu();
		cout << "ingrese opcion: ";
		cin >> opcion;
		switch(opcion){
			case 0:		cout << "saliendo del programa... :D" << endl;
						break;
			case 1:		aux=crearNodo();
			 			insertarNodoFinal(aux,inicio,nodoActual);
						aux=NULL;
						break;
			case 2:		aux=crearNodo();
			 			insertarNodoInicio(aux,inicio);
						aux=NULL;
						break;
			case 3:		mostrarLista(inicio);
						cout<<"NULL"<<endl;
						break;

			default:	cout << "opcion invalida...."  << endl;
						break;
		}
	}while(opcion != 0);


	return 0;
}

void menu(){
	cout << "*************** MENU ***************" << endl;
	cout << "\t0 - salir" << endl;
	cout << "\t1 - insertar nodo a la lista (al final)" << endl;
	cout << "\t2 - insertar nodo a la lista (al inicio)" << endl;
	cout << "\t3 - mostrar lista" << endl;
	cout << "*************** MENU ***************" << endl;
}

nodo *crearNodo(){
	nodo *nuevo_nodo = new nodo();
	cout<<"Ingrese el dato: ";
	cin>>nuevo_nodo->dato;
	nuevo_nodo->sig=NULL;
	return nuevo_nodo;
}
//Al nosotros poner *inicio pasamos unacopia de lo que tiene el puntero
//si pusieramos *&inicio mandariamos el contenido original
void mostrarLista(nodo *inicio){
    int SumarPar=0, SumaImpar=0;
	while(inicio!=NULL){
		cout<<inicio->dato;
		cout<<"->";
    if(inicio->dato%2==0){
       SumarPar+=inicio->dato;
        }
    else{
        SumaImpar+=inicio->dato;
        }
        inicio=inicio->sig;
	}

    cout<<"La suma de los pares es: " << SumarPar << endl;
    cout<<"La suma de los impares es: " << SumaImpar << endl;
}

void insertarNodoFinal(nodo *&nuevo, nodo *&ini, nodo *&actual){
	if(ini==NULL){//si es el primer nodo que ingresamos
		//apuntamos al primero
		ini = nuevo;
		//al ser el primero el unico nodo, actual tambien es el primero
		actual=nuevo;
	}else{
		//Ahora que ya hay mas de un nodo
		actual->sig = nuevo;
		actual = actual->sig;
	}
}

void insertarNodoInicio(nodo *&nuevo, nodo *&ini){
	//El puntero siguiente del nuevo nodo apuntara a donde apunta el nodo inicial
	nuevo->sig = ini;
	//Ahora que ya enlazamos el puntero siguiente del nuevo nodo falta decir que el nuevo nodo inicial sera el que acabamos de ingresar
	ini = nuevo;
}*/

// Ejercicio 7

struct Ndato{
    int Numero;
};
typedef struct Ndato Dato;

Dato SolicitarDato(){
    Dato p;
    cout << "Ingrese un numero: "; cin >> p.Numero;

    return p;
}

void mostrarDato(Dato p){
    cout << "Numero: " << p.Numero << endl;
}

struct TNodo{
    Dato dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Dato p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void insertarFinal(Dato p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;

    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarDato(){
    Dato p = SolicitarDato();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarDato(s->dato);
        s = s->sig;
    }
}

void eliminarDato(){
    int unNumero = 0;
    cout << "Ingrese el numero que desea eliminar: ";
    cin >> unNumero;

    while(true){
        Nodo *p = pInicio, *q = NULL;
    while(p != NULL && (p->dato).Numero != unNumero){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Ya se eliminaron todos los datos como el solicitado" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Dato borrado!" << endl;
    }
}

void menu()
{
    cout<<" 1. Agregar dato                          "<<endl;
    cout<<" 2. Mostrar lista                         "<<endl;
    cout<<" 3. Eliminar dato                         "<<endl;
    cout<<" 4. Salir                                 "<<endl;

    cout<<"\n Ingrese una opcion: ";
}

int main()
{
    int op;

    system("color 0b");

    do
    {
        menu();  cin>> op;

        switch(op)
        {
            case 1:

                 cout << "Agregando..." << endl;
                        agregarDato();
            break;


            case 2:

                 cout << "Listando..." << endl;
                    mostrarLista();
            break;


            case 3:

                 cout << "Eliminando..." << endl;
                    eliminarDato();
            break;


         }

        cout<<endl<<endl;
        system("pause");  system("cls");

    }while(op!=4);


    return 0;
}
