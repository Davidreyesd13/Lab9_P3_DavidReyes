#pragma once
#include <string>
using namespace std;
class UsuarioPaypal
{
	string nombre, id,pass,historial;
	double deposito, cantidad;
public:
	UsuarioPaypal(string, string, string, double,double,string);
	UsuarioPaypal();
	~UsuarioPaypal();
};
