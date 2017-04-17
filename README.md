# class-POO
#pragma once
#include "Imovel.h"
#include "Casa.h"
#include "Apto.h"
#include <string.h>
#include <typeinfo.h>
#include <iostream>
using namespace std;

class Analise
{
private:
	static double analise(Imovel * i, double p) {
		if ((strcmp(typeid(*i).name(), "class Casa")) == 0) {
			return i->valorize(p);
		}
		else if ((strcmp(typeid(*i).name(), "class Apto")) == 0) {
			return i->desvalorize(p);
		}
		else
			i->valorize(p);
	}
public:
	static void main() {
		Analise *aa = new Analise();

		Imovel *a = new Imovel(100.0);
		cout << "L0:" << a->valorize(10.0) << endl;



		Imovel *x = new Casa(100.0);
		Imovel *z = new Apto(400.0);

		cout << "L1: " << x->valorize(10.0) << endl;
		cout << "L2: " << x->desvalorize(10.0) << endl;

		double u = z->valorize(10.0) + z->desvalorize(10.0);
		cout << "L3: " << u << endl;
		cout << "L4: " << analise(x,10.0) << endl;
		cout << "L5: " << analise(z, 10.0) << endl;

		Imovel *w = new Casa(200.0);
		cout << "L6: " << analise(w, 10.0) << endl;
		Imovel *y = new Casa(200.0);
		cout << "L7: " << analise(y, 10.0) << endl;
	}

	Analise()
	{
	}

	~Analise()
	{
	}
};



