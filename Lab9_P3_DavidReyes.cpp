#include <iostream>
using namespace std;
void menu() {
	int op = 1;
	while (op!=6) {
		cout << "1.Crear cuenta de paypal\n2.Crear Wallet\n3.Cargar informacion\n4.Acceder a Paypal";
		cout<<	"\n5.Acceder a Wallet\n6. Salir";
	}
}
int main()
{
	menu();
}