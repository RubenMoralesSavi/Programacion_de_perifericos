#include "pch.h"
#include <iostream>


class para {
	double longitud;
	ractangulo base;
public:
	para(double, double, double);
	double volumen();
};
para::para(doblude h, double l, double a) {
	base(h, l);
	longitud(a);
}
double para :: volumen(){
	return base.Area()*longitud;
}

