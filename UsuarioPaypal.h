#pragma once
#include <string>
#include <vector>
using namespace std;
class UsuarioPaypal {
private:
    string nombreUsuario;
    string numeroIdentidad;
    string contrasena;
    double saldo;
    vector<string> historial;

public:
    UsuarioPaypal(string nombreUsuario, string numeroIdentidad, string contrasena, double saldoInicial);
    string getNombreUsuario();
    string getNumeroIdentidad();
    string getContrasena();
    double getSaldo();
    void realizarDeposito(double cantidad, string mensaje = "");
};

