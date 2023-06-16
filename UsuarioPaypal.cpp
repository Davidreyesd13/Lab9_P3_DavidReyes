#include "UsuarioPaypal.h"
#include <iostream>

UsuarioPaypal::UsuarioPaypal(string nombreUsuario, string numeroIdentidad, string contrasena, double saldoInicial) {
    this->nombreUsuario = nombreUsuario;
    this->numeroIdentidad = numeroIdentidad;
    this->contrasena = contrasena;
    saldo = saldoInicial;
}

string UsuarioPaypal::getNombreUsuario() {
    return nombreUsuario;
}

string UsuarioPaypal::getNumeroIdentidad() {
    return numeroIdentidad;
}

string UsuarioPaypal::getContrasena() {
    return contrasena;
}

double UsuarioPaypal::getSaldo() {
    return saldo;
}

void UsuarioPaypal::realizarDeposito(double cantidad, string mensaje) {
    saldo += cantidad;
    cout << "Se ha depositado " << cantidad << " en su cuenta." << endl;
    if (!mensaje.empty()) {
        historial.push_back(mensaje);
    }
}

