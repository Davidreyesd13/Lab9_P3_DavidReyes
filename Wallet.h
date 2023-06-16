#pragma once
#include <string>
#include <vector>
#include "UsuarioPaypal.h"
using namespace std;
class Wallet {
private:
    string usuario;
    UsuarioPaypal* cuentaPaypal;
    string contrasena;
    double doge, eth, wc;

public:
    Wallet(string usuario,string contrasena,double doge,double eth,double wc);
    bool comprarCrypto(double cantidad,string moneda);
    bool venderCrypto(double cantidad, string moneda);
};


