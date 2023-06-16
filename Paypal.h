#pragma once
#include <vector>
#include "UsuarioPaypal.h"
class Paypal
{
	vector<UsuarioPaypal*> base;
public:
	Paypal();
	Paypal(vector<UsuarioPaypal*>);
};

