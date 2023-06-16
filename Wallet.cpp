#include "Wallet.h"
#include <iostream>

Wallet::Wallet(string usuario, string contrasena, double doge, double eth, double wc) {
    this->usuario = usuario;
    this->contrasena = contrasena;
    cuentaPaypal = nullptr;
    this->doge = doge;
    this->eth = eth;
    this->wc = wc;
}

bool Wallet::comprarCrypto(double cantidad, string moneda) {
    if (cuentaPaypal == nullptr) {
        cout << "No se ha establecido una cuenta de PayPal. Por favor, cree una cuenta de PayPal primero." << endl;
        return false;
    }

    // Verificar saldo en PayPal
    double saldo = cuentaPaypal->getSaldo();
    if (cantidad > saldo) {
        cout << "Saldo insuficiente en la cuenta de PayPal." << endl;
        return false;
    }

    // Realizar la compra de la criptomoneda
    // ...

    // Actualizar el saldo en PayPal
    cuentaPaypal->realizarDeposito(cantidad);

    return true;
}

bool Wallet::venderCrypto(double cantidad, string moneda) {
    if (cuentaPaypal == nullptr) {
        cout << "No se ha establecido una cuenta de PayPal. Por favor, cree una cuenta de PayPal primero." << endl;
        return false;
    }

    // Realizar la venta de la criptomoneda
    // ...

    // Calcular el monto en dólares obtenido de la venta
    double montoDolares = cantidad * 10; // Ejemplo: 1 criptomoneda = 10 dólares

    // Realizar el depósito en la cuenta de PayPal
    cuentaPaypal->realizarDeposito(montoDolares, "Se ha depositado " + to_string(montoDolares) + " desde su Wallet.");

    return true;
}
