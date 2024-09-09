#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    private:
        float x;
        float y;

    public:
        Punto(float xInicial, float yInicial);
        float getX();
        float getY();
        void setX(float xInicial);
        void setY(float yInicial);
        float calcularDistancia(Punto otroPunto);

};

#endif // PUNTO_H
