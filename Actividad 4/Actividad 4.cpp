#include <iostream>
#include <conio.h>
using namespace std;

struct info_Pais{
    char NombrePais[20];
    char NombrePais2[20];
    char NombrePais3[20];
    char NombrePais4[20];
    char NombrePais5[20];
    char NombreCapital[20];
    char NombreCapital2[20];
    char NombreCapital3[20];
    char NombreCapital4[20];
    char NombreCapital5[20];
    double TotalPoblacion;
    double TotalPoblacion2;
    double TotalPoblacion3;
    double TotalPoblacion4;
    double TotalPoblacion5;
};

struct Continente{
    char NombreContinente[20];
    struct info_Pais dir_Continente;
}Continentes[5];

int main(){

    int CapitalMayor=0;
    double PoblacionTotalContinente=0;

    for(int i=0; i<5; i++){
        fflush(stdin);
        cout << "Ingrese el nombre del continente: " ;
        cin.getline(Continentes[i].NombreContinente,20,'\n');
        cout << "Ingrese el nombre del primer pais: ";
        cin.getline(Continentes[i].dir_Continente.NombrePais,20,'\n');
        cout << "Ingrese el nombre de la capital: ";
        cin.getline(Continentes[i].dir_Continente.NombreCapital,20,'\n');
        cout << "Digite el total de la poblacion: ";
        cin >> Continentes[i].dir_Continente.TotalPoblacion;
        cout << "\n";

        fflush(stdin);

        cout << "Ingrese el nombre del segundo pais: ";
        cin.getline(Continentes[i].dir_Continente.NombrePais2,20,'\n');
        cout << "Ingrese el nombre de la segunda capital: ";
        cin.getline(Continentes[i].dir_Continente.NombreCapital2,20,'\n');
        cout << "Digite el total de la segunda poblacion: ";
        cin >> Continentes[i].dir_Continente.TotalPoblacion2;
        cout << "\n";

        fflush(stdin);

        cout << "Ingrese el nombre del tercer pais: ";
        cin.getline(Continentes[i].dir_Continente.NombrePais3,20,'\n');
        cout << "Ingrese el nombre de la tercera capital: ";
        cin.getline(Continentes[i].dir_Continente.NombreCapital3,20,'\n');
        cout << "Digite el total de la tercera poblacion: ";
        cin >> Continentes[i].dir_Continente.TotalPoblacion3;
        cout << "\n";

        fflush(stdin);

        cout << "Ingrese el nombre del cuarto pais: ";
        cin.getline(Continentes[i].dir_Continente.NombrePais4,20,'\n');
        cout << "Ingrese el nombre de la cuarta capital: ";
        cin.getline(Continentes[i].dir_Continente.NombreCapital4,20,'\n');
        cout << "Digite el total de la cuarta poblacion: ";
        cin >> Continentes[i].dir_Continente.TotalPoblacion4;
        cout << "\n";

        fflush(stdin);

        cout << "Ingrese el nombre del quinto pais: ";
        cin.getline(Continentes[i].dir_Continente.NombrePais5,20,'\n');
        cout << "Ingrese el nombre de la quinta capital: ";
        cin.getline(Continentes[i].dir_Continente.NombreCapital5,20,'\n');
        cout << "Digite el total de la quinta poblacion: ";
        cin >> Continentes[i].dir_Continente.TotalPoblacion5;
        PoblacionTotalContinente = Continentes[i].dir_Continente.TotalPoblacion+Continentes[i].dir_Continente.TotalPoblacion2+Continentes[i].dir_Continente.TotalPoblacion3+Continentes[i].dir_Continente.TotalPoblacion4+Continentes[i].dir_Continente.TotalPoblacion5;
        cout << "Poblacion total del continente: " << PoblacionTotalContinente << endl;

        fflush(stdin);

        if(Continentes[i].dir_Continente.TotalPoblacion >= Continentes[i].dir_Continente.TotalPoblacion2 && Continentes[i].dir_Continente.TotalPoblacion3 && Continentes[i].dir_Continente.TotalPoblacion4 && Continentes[i].dir_Continente.TotalPoblacion5){
            cout << "La capital con mayor numero de habitantes es: " << Continentes[i].dir_Continente.NombreCapital << "  Su Poblacion es: " << Continentes[i].dir_Continente.TotalPoblacion << endl;
            }else if(Continentes[i].dir_Continente.TotalPoblacion2 >= Continentes[i].dir_Continente.TotalPoblacion && Continentes[i].dir_Continente.TotalPoblacion3 && Continentes[i].dir_Continente.TotalPoblacion4 && Continentes[i].dir_Continente.TotalPoblacion5){
            cout << "La capital con mayor numero de habitantes es: " << Continentes[i].dir_Continente.NombreCapital2 << "  Su Poblacion es: " << Continentes[i].dir_Continente.TotalPoblacion2 << endl;
                }else if(Continentes[i].dir_Continente.TotalPoblacion3 > Continentes[i].dir_Continente.TotalPoblacion && Continentes[i].dir_Continente.TotalPoblacion2 && Continentes[i].dir_Continente.TotalPoblacion4 && Continentes[i].dir_Continente.TotalPoblacion5){
                cout << "La capital con mayor numero de habitantes es: " << Continentes[i].dir_Continente.NombreCapital3 << "  Su Poblacion es: " << Continentes[i].dir_Continente.TotalPoblacion3 << endl;
                    }else if(Continentes[i].dir_Continente.TotalPoblacion4 > Continentes[i].dir_Continente.TotalPoblacion && Continentes[i].dir_Continente.TotalPoblacion2 && Continentes[i].dir_Continente.TotalPoblacion3 && Continentes[i].dir_Continente.TotalPoblacion5){
                    cout << "La capital con mayor numero de habitantes es: " << Continentes[i].dir_Continente.NombreCapital4 << "  Su Poblacion es: " << Continentes[i].dir_Continente.TotalPoblacion4 << endl;
                        }else if(Continentes[i].dir_Continente.TotalPoblacion5 > Continentes[i].dir_Continente.TotalPoblacion && Continentes[i].dir_Continente.TotalPoblacion2 && Continentes[i].dir_Continente.TotalPoblacion3 && Continentes[i].dir_Continente.TotalPoblacion4){
                        cout << "La capital con mayor numero de habitantes es: " << Continentes[i].dir_Continente.NombreCapital5 << "  Su Poblacion es: " << Continentes[i].dir_Continente.TotalPoblacion5 << endl;
                        }


    cout << "\n";
    }
    return 0;
}
