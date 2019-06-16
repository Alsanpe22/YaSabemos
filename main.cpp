#include <iostream>
#include <jugador.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    Jugador jugador1; Jugador jugador2;
    string continuar="J";
    string continuar2="J";
    int apuesta,apuesta2;


    cout << "Jugador 1 apuesta: " << endl;
    cin >> apuesta;

    cout << "Jugador 2 apuesta: " << endl;
    cin >> apuesta2;

    do{
        cout << "Jugador 1, quieres plantarte(P) o seguir jugando(J)?: " << endl;
                cin >> continuar;
                if(continuar=="J"){
                    jugador1.lanzarDados1();
                    if(jugador1.tehaspasao()==false){
                        cout << "Jugador 2 has ganado " << endl;
                        return 0;
                    }
                }

        cout << "Jugador 2, quieres plantarte(P) o seguir jugando(J)?: " << endl;
                        cin >> continuar2;
                        if(continuar2=="J"){
                            jugador2.lanzarDados2();
                            if(jugador2.tehaspasao()==false){
                                cout << "Jugador 1 has ganado " << endl;
                                return 0;

                        }
                    }

    }while((continuar=="J" && continuar2 =="J"));

    if(jugador1.getPuntacion()<jugador2.getPuntacion()){
        cout << " Jugador 2 has ganado con una puntuacion de: " << jugador2.getPuntacion() << endl;



    }else{
       cout << " Jugador 1 has ganado con una puntuacion de: " << jugador1.getPuntacion() << endl;

    }




    return 0;
}
