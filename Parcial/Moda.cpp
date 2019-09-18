#include<iostream>
#include<conio.h>
using namespace std;
main(){
    int n,s,m=s,a;
    cout<<"ingrese la longuitud del arreglo: "<< endl;
    cin>>n;
    int A[n];
    if(n>=2){
        cout<<"Ingrese los datos " << endl;
            for(int i=0;i<n;i++){
            cout<<"ingrese un numero: ";cin>>A[i];
    }
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<n;j++){
            if(A[i]==A[j] && i!=j){
                s=s+1;
            }
        }
    if(s>=m){
    m=s;
    a=i;
        }
    }
    cout<<"la moda es: "<<A[a]<<" y tiene "<<m+1<<" repeticiones"<<endl;
    }
    else
        cout << "Error" << endl;

    return 0;
}

