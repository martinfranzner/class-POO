#pragma once
#include "Imovel.h"
class Apto :
	public Imovel
{
public:

	Apto(double p) :Imovel(p)
	{
	}
	double desvalorize(double p) {
		preco = preco * (1.0 - ((p / 100) * 0.5));
		return preco;
	}

	~Apto()
	{
	}
};

