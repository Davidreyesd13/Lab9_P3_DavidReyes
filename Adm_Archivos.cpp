#include "Adm_Archivos.h"
#include <iostream>
#include <fstream>

void Adm_Archivos::guardarInformacion(Paypal* paypal) {
    std::ofstream archivo("Base.Lab", ios::binary);
    if (archivo.is_open()) {
        for (auto usuario : paypal->getUsuarios()) {
            archivo.write(reinterpret_cast<char*>(usuario), sizeof(*usuario));
        }
        archivo.close();
        cout << "Información guardada correctamente." << endl;
    }
    else {
        cout << "Error al abrir el archivo para guardar la información." << endl;
    }
}

void Adm_Archivos::cargarInformacion(Paypal* paypal) {
    std::ifstream archivo("Base.Lab", ios::binary);
    if (archivo.is_open()) {
        UsuarioPaypal* usuario;
        while (archivo.read(reinterpret_cast<char*>(&usuario), sizeof(usuario))) {
            paypal->getUsuarios().push_back(usuario);
        }
        archivo.close();
        cout << "Información cargada correctamente." << endl;
    }
    else {
        cout << "Error al abrir el archivo para cargar la información." << endl;
    }
}
