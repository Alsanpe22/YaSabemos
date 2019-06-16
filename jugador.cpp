#include "jugador.h"

Jugador::Jugador()
{
  apuesta=0;
  puntacion=0;

}

int Jugador::getApuesta() const
{
    return apuesta;
}

void Jugador::setApuesta(int value)
{
    apuesta = value;
}

int Jugador::getPuntacion() const
{
    return puntacion;
}

void Jugador::setPuntacion(int value)
{
    puntacion = value;
}

void Jugador::lanzarDados1()
{
    int dado1 = 1+rand()%(7-1);
    int dado2 = 1+rand()%(7-1);
    puntacion = puntacion + dado1 + dado2;
    if(puntacion>21){
        cout << "Has perdido con: " << puntacion << " No has jugao al BJ en tu vida crack" << endl;

    }else{
    cout << "dado1: " << dado1 << " y dado 2: " << dado2 << " La puntuacion del J1 es de: " << puntacion << endl;
    }
}

void Jugador::lanzarDados2()
{
    int dado1 = 1+rand()%(7-1);
    int dado2 = 1+rand()%(7-1);
    puntacion = puntacion + dado1 + dado2;
    if(puntacion>21){
        cout << "Has perdido con: " << puntacion << " No has jugao al BJ en tu vida crack" << endl;

    }else{
    cout << "dado1: " << dado1 << " y dado 2: " << dado2 << " La puntuacion del J2 es de: " << puntacion << endl;
    }
}

bool Jugador::tehaspasao()
{
    if(puntacion>21){

        return false;


    }return true;
}

