/*
    Crea una clase llamada CuentaBancaria que represente una cuenta bancaria.
    La clase debe tener los siguientes atributos:
        ● Número de cuenta (entero)
        ● Saldo actual (float)
    Implementa los siguientes métodos:
        ● Un constructor que me permita establecer el número de cuenta y el
        saldo.
        ● Un método depositar(float monto) que incremente el saldo.
        ● Un método retirar(float monto) que disminuya el saldo si hay
        fondos suficientes, caso contrario no hace nada.
        ● Un método obtenerSaldo() que devuelva el saldo actual.
*/

#include <iostream>
#include "cuentaBancaria.h"


using namespace std;

int main()
{
    int cuenta, opcion=4;
    float saldo, monto;
    bool pregRetira;

    cout << "Ingrese Nnumero de cuenta: ";
    cin >> cuenta;
    cout << "Ingrese saldo: ";
    cin >> saldo;

    cuentaBancaria objInc(cuenta, saldo);

    while(opcion==4)
    {
        system("cls");
        cout << "---- Menu ----" << endl;
        cout << "1 - depositar " << endl;
        cout << "2 - Retirar " << endl;
        cout << "3 - Ver saldo " << endl;
        cout << "0 - salir " << endl;
        cin >> opcion;

        while(opcion==1)
        {
            system("cls");
            cout << "Monto a depositar: ";
            cin >> monto;

            objInc.depositar(monto);
            system("pause");
            opcion=4;
        }

        while(opcion==2)
        {
            system("cls");
            cout << "Retira dinero? s(1) / n(0)" << endl;
            cin >> pregRetira;

            if(pregRetira)
            {
                cout << "Monto a retirar: ";
                cin >> monto;
                objInc.retirar(monto);
                system("pause");
                opcion=4;
            }
            else
            {
                opcion=4;
            }
        }

        while(opcion==3)
        {
            system("cls");
            cout << "saldo: " << objInc.obtenerSaldo();
            system("pause");
            opcion=4;
        }
    }
    return 0;
}
