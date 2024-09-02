#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H


class cuentaBancaria
{
    private:
        int numDeCuenta;
        float saldoActual;

    public:
        cuentaBancaria(int cuenta, float saldoCuenta);

        float depositar(float monto);

        float retirar(float monto);

        float obtenerSaldo();
};

#endif // CUENTABANCARIA_H
