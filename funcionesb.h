#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
using namespace std;


void mostrarMenu();
int lanzarDado(); //para que nos de el dado aleatorio.
void creditos();
 int salir() ;


void mostrarMenu()
{
    cout << "BONZO" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADISTICAS" << endl;
    cout << "3 - CREDITOS" << endl;
    cout << "==============================================" << endl;
    cout << "0 - Salir" << endl;
    cout << "----------------------------------------------" << endl;
}

int lanzarDado()
{
    int dado = rand()%6+1;


    return dado;

}

void determinarInicio()
{

    int numero_dado = lanzarDado(); // guardo el valor del dado aleatorio dentro de la variable;


    if(numero_dado % 2 !=0 )
    {
        cout << endl << "comienza el jugador 1 "<<endl<<"con el numero de dado que salio es :"<<numero_dado << endl;
    }
    else
    {
        cout << endl << " comienza el jugador  numero 2 " <<endl<<" con el numero de dado que salio es :"<<numero_dado << endl;
    }



}
int salir() {
    char confirmacion;

              cout<<" confirmar salida  s/n ";
              cin>>confirmacion;
            while(confirmacion!= 's' && confirmacion != 'n'){
                 system  ("cls");
                cout<<" ingreso una opcion incorrecta ingrese solo s o n"<<endl;

                        cin>>confirmacion;
                        if(confirmacion== 'n'){
                          mostrarMenu() ;
                        }


            }   return 0; //retorna el num entera
}


void creditos()
{

    cout<<"Rodriguez Cyntia,legajo 27699"<<endl;
    cout<<"Leguiza Yesica,legajo 28015"<<endl;
    cout<<"Alvez Olivera Tania,legajo 30209"<<endl;
    cout<<"Narvaez Martina Dominique,legajo 32055"<<endl;
}


#endif // FUNCIONES_H_INCLUDED
