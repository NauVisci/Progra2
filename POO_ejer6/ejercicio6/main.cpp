/*
    Crea una clase llamada Punto que represente un punto en un plano cartesiano.
    La clase debe contener los siguientes atributos:
    1) x (float): Almacena la coordenada en el eje X.
    2) y (float): Almacena la coordenada en el eje Y.

    Implementa los siguientes métodos públicos:
    3) Punto(float xInicial, float yInicial): Constructor que inicializa las coordenadas x y y del punto.
    4) Getters y Setters para cada atributo.
    5) calcularDistancia(Punto otroPunto): Devuelve la distancia entre el punto actual y otro punto dado. La fórmula para calcular la
    distancia entre dos puntos (x1, y1) y (x2, y2) es: sqrt((x2 - x1)^2 + (y2 - y1)^2).
    6) mover(float deltaX, float deltaY): Mueve el punto sumando deltaX a x y deltaY a y.

*/

#include <iostream>
#include "Punto.h"

using namespace std;

int main()
{
    float x1, y1, x2, y2;

    cout << "Ingrese PUNTO 1 " << endl;
    cout << "X1: ";
    cin >>x1;
    cout << "Y1: ";
    cin >> y1;

    Punto obj1(x1, y1);
    obj1.setX(x1);
    obj1.setY(y1);

    system("pause");

    cout << "Ingrese PUNTO 2 " << endl;
    cout << "X2: ";
    cin >>x2;
    cout << "Y2: ";
    cin >> y2;

    Punto obj2(x2, y2);
    obj2.setX(x2);
    obj2.setY(y2);

    system("pause");

    cout << "La distancia entre los puntos es: " << obj1.calcularDistancia(obj2) << endl;


    return 0;
}
