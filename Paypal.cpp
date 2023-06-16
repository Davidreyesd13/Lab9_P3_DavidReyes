#include "Paypal.h"

vector<UsuarioPaypal*> Paypal::getUsuarios()
{
    return usuarios;
}

void Paypal::crearCuenta(string nombreUsuario,string numeroIdentidad, string contrasena, double saldoInicial) {
    // Verificar si el nombre de usuario y n�mero de identidad ya est�n en uso
    for (auto usuario : usuarios) {
        if (usuario->getNombreUsuario() == nombreUsuario) {
            cout << "El nombre de usuario ya est� en uso." << endl;
            return;
        }

        if (usuario->getNumeroIdentidad() == numeroIdentidad) {
            cout << "El n�mero de identidad ya est� en uso." << endl;
            return;
        }
    }

    // Crear la cuenta de PayPal
    UsuarioPaypal* nuevaCuenta = new UsuarioPaypal(nombreUsuario, numeroIdentidad, contrasena, saldoInicial);
    usuarios.push_back(nuevaCuenta);
}

UsuarioPaypal* Paypal::iniciarSesion(string nombreUsuario, string contrasena) {
    for (auto usuario : usuarios) {
        if (usuario->getNombreUsuario() == nombreUsuario && usuario->getContrasena() == contrasena) {
            return usuario;
        }
    }

    cout << "Nombre de usuario o contrase�a incorrectos." << endl;
    return nullptr;
}
