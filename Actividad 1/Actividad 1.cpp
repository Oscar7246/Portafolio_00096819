#include <iostream>
using namespace std;

void calculos(int num, int *doble, int *triple){
    *doble = 2 * num;
    *triple = 3 * num;
}
int main(){
    int numero = 2, doble = 0, triple = 0;

    calculos(numero, &doble, &triple);

    cout << "el doble de 2 es: 0" << doble << endl;
    cout << "el triple de 2 es: 0" << triple << endl;

    cout << "direccion de numero: " << &numero << endl;
    cout << "direccion de doble: " << &doble << endl;
    cout << "direccion de triple: " << &triple << endl;

    return 0;
}
