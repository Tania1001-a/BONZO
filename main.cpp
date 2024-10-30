#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "funcionesb.h"




int main()
{

    setlocale(LC_ALL, "spanish"); //Seteo el lenguaje de la consola.
    srand (time(NULL)); //Planto la semilla del random


// Menu
    int opcion;

    while(true)

    {
       system("cls");
        mostrarMenu();

        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cout << endl;
        system  ("cls");
        switch(opcion)
        {
        case 1:
            system("cls");
            cout << "selecciono la opcion JUGAR" << endl;
            // hacer funcion jugar
            determinarInicio();
            break;
        case 2:
            cout << "selecciono la opcion ESTADISTICAS" << endl;

            break;
        case 3:
            creditos();
            // hacer funcion de creditos
            cout << "selecciono la opcion CREDITOS" << endl;
            break;
        case 0:


            return salir();

            break;
        default:
            cout << "No ingreso una opcion valida" << endl;
            break;
        }
        system("pause");



    }




    return 0;
}
