#include<iostream>
#include<stdlib.h>
using namespace std;
//Ejercicio 12
/*int Binomio(int n, int k)
{
	int res = 1;
	if ( k > n - k )
		k = n - k;

	for (int i = 0; i < k; ++i) {
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

int main()
{
	int n = 0, k = 0;
	cout << "Ingrese el vakor de n: ";
	cin >> n;

	cout << "Ingrese el valor de k: ";
	cin >> k;

	cout << "El valor de C: (" << n << ", "
		<< k << ") es:  " << Binomio(n, k);
	return 0;
}*/
//Ejercicio 13
//Este ejercicio suma todos los numeros anteriores al numero ingresado
//Ejercico normal
/*int func(int n){
    if(n==0)
        return(0);
    return(n+func(n-1));
}

int main(){
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    cout << "El resultado es: " << func(n);
    return 0;
}*/

//Ejercio interativo
int func(int);

int main(){
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    cout << "El resultado es: " << func(n);
    return 0;
}

int func(int n){
    if(n==0)
        return(0);
    else
        return(n+func(n-1));
}

//Ejercicio 14
/*int main(){

int i,j,DIM,n,m;

cout<< "Introduce la dimension de la matriz cuadrada: ";

cin>>DIM;

float a[DIM][DIM],b[DIM-1][DIM-1];

cout << "Ingrese los datos para la matriz: " << DIM << "x" << DIM << endl;
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++){
            cout << "Ingrese un dato para la matriz [" << i <<"] [" << j << "]=\t";
            cin >> a[i][j];
        }
    }

    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++){
            cout << a[i][j] <<"\t";
        }
        cout << endl;
    }


cout<<"Introduce la fila que se desea borrar: ";
cin>>n;
cout<<"Introduce la columna que se desea borrar: ";
cin>>m;

for (i=n-1;i<DIM;i++)
for (j=0;j<DIM;j++){
        a[i][j]=a[i+1][j];
}

for (i=0;i<DIM;i++)
for (j=m-1;j<DIM;j++){
    a[i][j]=a[i][j+1];
}

for (i=0;i<DIM-1;i++)
for (j=0;j<DIM-1;j++){
        b[i][j]=a[i][j];
}

cout<<" La matriz resultante es :"<<" "<<endl;
cout << ("\n");

for (i=0;i<DIM-1;i++)
{for (j=0;j<DIM-1;j++)
cout << b[i][j]<<"   ";
cout<<endl<<endl;}

return 0;
}*/
