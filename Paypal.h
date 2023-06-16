#pragma once
#include <vector>
#include "UsuarioPaypal.h"
#include <iostream>
using namespace std;
class Paypal {
private:
    vector<UsuarioPaypal*> usuarios;

public:
    vector<UsuarioPaypal*> getUsuarios();
    void crearCuenta(string nombreUsuario, string numeroIdentidad, string contrasena, double saldoInicial);
    UsuarioPaypal* iniciarSesion(string nombreUsuario, string contrasena);
};

