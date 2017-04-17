#pragma once
class Imovel
{
protected:
	double preco;
public:

	Imovel(double p):preco(p)
	{
	}
	virtual double valorize(double p) {
		preco = preco * (1.0 + p / 100);
		return preco;
	}
	virtual double desvalorize(double p) {
		preco = preco * (1.0 - p / 100);
		return preco;
	}
	~Imovel()
	{
	}
};

