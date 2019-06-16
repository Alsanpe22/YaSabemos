#ifndef JUGADOR_H
#define JUGADOR_H
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Jugador
{
public:
    Jugador();
    int getApuesta() const;
    void setApuesta(int value);

    int getPuntacion() const;
    void setPuntacion(int value);

    void lanzarDados1();
    void lanzarDados2();

    bool tehaspasao();


private:
    int apuesta, puntacion;
};

#endif // JUGADOR_H
