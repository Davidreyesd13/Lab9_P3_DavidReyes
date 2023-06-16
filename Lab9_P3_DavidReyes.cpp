#include <iostream>
#include<string>
#include<vector>
#include "Adm_Archivos.h"
#include "Paypal.h"
#include "UsuarioPaypal.h"
#include "Wallet.h"
using namespace std;
void menu() {
	Paypal p;
	Adm_Archivos adm;
	
	vector<UsuarioPaypal*>base;
	int op = 1;
	string nombre, id, pass;
	while (op!=6) {
		cout << "1.Crear cuenta de paypal\n2.Crear Wallet\n3.Cargar informacion\n4.Acceder a Paypal";
		cout<<	"\n5.Acceder a Wallet\n6. Salir";
		cin >> op;
		switch (op) {
		case 1:
			cout << "Nombre: ";
			cin >> nombre;
			cout << "id: ";
			cin >> id;
			cout << "Password: ";
			cin >> pass;
			p.crearCuenta(nombre,id,pass,0.0);
			base.push_back(new UsuarioPaypal(nombre, id, pass, 0.0));
			adm.guardarInformacion(&p);
			break;
		case 2:
			
			break;
		case 3:
			adm.cargarInformacion(&p);
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:

			break;
		}
	}
}
int main()
{
	menu();
}