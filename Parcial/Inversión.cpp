#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cout << "Ingrese la longuitud del arreglo: ";
    cin >> n;

    if(n >= 2){
        int arregloA[n];
        int arregloB[n];
        for(int i=0; i<n; i++){
            arregloA[i] = 0;
            arregloB[i] = 0;
        }
        for(int i=0; i<n; i++){
            cout << "Ingrese valor[" << i << "]: ";
            cin >> arregloA[i];
            arregloB[i] = arregloA[i];
        }
        cout << "Normal" << endl;
        for(int i=0; i<n; i++){
            cout << "arreglo[" << i << "]=";
            cout << arregloA[i] << endl;
        }

        cout << "Inverso" << endl;
        for(int i=n-1; i>=0; i--){
            cout << "arreglo[" << i << "]=";
            cout << arregloB[i] << endl;
        }
    }
    else
        cout << "Error" << endl;

    return 0;
}
