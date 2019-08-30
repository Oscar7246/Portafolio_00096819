#include <iostream>
using namespace std;
int main()
{
    int n=0, i=0;
    float num[100], suma=0.0, mediana, media;
    cout << "ingrese la cantidad de numeros a usar (debe ingresarlos en orden de menor a mayor): ";
    cin >> n;
    while (n > 100 || n <= -100)
    {
        cout << "Error! el numero es demasiado grande (1 a 100)." << endl;
        cout << "Ingrese otro numero: ";
    }
    for(i = 0; i < n; ++i)

    {
        cout << i + 1 << ". ingrese un numero: ";
        cin >> num[i];
    }
    if(n%2==0){
        media = num[n/2-1]+num[n/2];
        mediana = media/2;
        }
    else{
        mediana= num[n/2];
    }

    cout << "mediana = " << mediana;
    return 0;
}

