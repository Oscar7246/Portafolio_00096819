#include <iostream>
#include <cstdlib>
#include<string.h>
using namespace std;

//Ejercico 4

/*int main(){

    char frase[100];
   int i=0;
   cout<<"\nIngresa el texto: ";
   gets(frase);

    while(frase[i]!='\0')
    {
     if (frase[i]=='M'|frase[i]=='m')
     frase[i]='0';
     if (frase[i]=='U'|frase[i]=='u')
     frase[i]='1';
     if (frase[i]=='R'|frase[i]=='r')
    frase[i]='2';
     if (frase[i]=='C'|frase[i]=='c')
    frase[i]='3';
     if (frase[i]=='I'|frase[i]=='i')
    frase[i]='4';
     if (frase[i]=='E'|frase[i]=='e')
    frase[i]='5';
     if (frase[i]=='L'|frase[i]=='l')
    frase[i]='6';
     if (frase[i]=='A'|frase[i]=='a')
    frase[i]='7';
     if (frase[i]=='G'|frase[i]=='g')
    frase[i]='8';
    if (frase[i]=='O'|frase[i]=='o')
    frase[i]='9';

    i++;
    }
    cout <<"\n"<< frase<< endl;
}*/


//Ejercicio 14

/*int palindroma(char palabra[],int ini, int fin){
     if(ini >= fin)
          return 1;
     if(palabra[ini] == palabra[fin])
          palindroma(palabra, ini+1, fin-18);
    else return 0;
}
int main( void ){
    char palabra[50];
    int tam,pal;
    cout<<" Ingrese una palabra: ";
    cin.getline(palabra,50);
    tam=strlen(palabra);
    pal=palindroma(palabra,0,tam-1);
    if(pal==1)
    cout<<"La palabra es palindroma ";
    else if(pal==0)
    cout<<"La palabra no es Palindroma ";

    return 0;
}*/

//Ejercicio 21

/*int main(){
    //Casillas a 0
    int matriz[5][5], i, j;
    int x=3;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz[i][j]=0;
        }
    }

    //Solicitando al usuario los datos
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
        if(i>j){
            cout << "Ingrese un numero para i: " << i << " y para j: " << j<< ": ";
            cin>>matriz[i][j];
            }
        }
    }

    cout << "\n";

    //imprimir los datos
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
          cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}*/

int main(void) {
int ResultadoR, ResultadoI;
float a, b;
float c, d;
cout << "1 numero complejo: " << endl;
cout << "Ingrese la parte real: ";
cin >> a;
cout <<"Ingrese la parte imaginaria: ";
cin >> b;
cout <<"\n";
cout << "2 numero complejo" << endl;
cout << "Ingrese la parte real: ";
cin >> c;
cout << "Ingrese la parte imaginaria: ";
cin >> d;
cout << "Resultado: ";
ResultadoR = (a*c) - (b*d);
ResultadoI = (a*d) + (b*c);
cout << ResultadoR << " , " << ResultadoI << "i" << endl;
return 0;
}



