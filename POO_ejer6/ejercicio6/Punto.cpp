#include "Punto.h"
#include <math.h>


using namespace std;

    Punto::Punto(float xInicial, float yInicial)
    {
        x = xInicial;

        y = yInicial;
    }

    float Punto::getX()
    {
        return x;
    }

    float Punto::getY()
    {
        return y;
    }

    void Punto::setX(float xInicial)
    {
        x = xInicial;
    }

    void Punto::setY(float yInicial)
    {
        y = yInicial;
    }

    float Punto::calcularDistancia(Punto otroPunto)
    {
        float distancia, cuenta1, cuenta2;

        cuenta1 = otroPunto.getX() - getX();
        cuenta2 = otroPunto.getY() - getY();

        distancia = sqrt(std::pow(cuenta1,2) + std::pow(cuenta2,2));

        return distancia;

    }
