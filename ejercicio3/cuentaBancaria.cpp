#include "cuentaBancaria.h"
#include <iostream>

using namespace std;

    cuentaBancaria::cuentaBancaria(int cuenta, float saldoCuenta)
    {
        numDeCuenta=cuenta;
        saldoActual=saldoCuenta;

    }

    float cuentaBancaria::depositar(float monto)
    {
        saldoActual+=monto;

        return saldoActual;
    }

    float cuentaBancaria::retirar(float monto)
    {
        if(saldoActual>=monto)
        {
            saldoActual-=monto;
            return saldoActual;
        }
        else
        {
            cout << "--- Fondos insuficientes ---" << endl;
        }
    }

    float cuentaBancaria::obtenerSaldo()
    {
        return saldoActual;
    }

