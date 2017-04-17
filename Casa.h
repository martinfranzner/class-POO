#pragma once
#include "Imovel.h"
class Casa :
	public Imovel
{
public:

	Casa(double p):Imovel(p)
	{
	}
	double valorize(double p) {
		preco = preco * (1.0 + ((p / 100)*2));
		return preco;
	}
	~Casa()
	{
	}
};

