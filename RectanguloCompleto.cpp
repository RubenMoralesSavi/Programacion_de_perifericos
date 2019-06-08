/* Universidad Politecnica de Tulancingo
       Programacion de Perifericos
          Ruben Morales Saviñon
   Programa Rectangulo : Es un programa
   donde das valores de un rectangulo y 
   este calcula el area y volumen*/


#include "pch.h"
# include  < iostream >

using namespace  std;


class Rectangulo {
	double alto;
	double ancho;
public:
	Rectangulo(double, double);
	double Area();
	double getladoh();
	double getladol();
};

class Volumen : public Rectangulo {
	double longitud;
public:
	Volumen(double, double, double);
	double volumen();
	double AreaTotal();
};

Rectangulo::Rectangulo(double h, double l) {
	alto = h;
	ancho = l;
}

Volumen::Volumen(double h, double l, double x) : Rectangulo(h, l) {
	longitud = x;
}

double Rectangulo::getladoh() {
	return alto;
}
double Rectangulo::getladol() {
	return ancho;
}


double Rectangulo::Area() {
	return alto * ancho;
}

double Volumen::volumen() {
	return Area() * longitud;
}

double Volumen::AreaTotal() {
	return 2 * ((getladoh() * getladol()) + (getladol() * longitud) + (getladoh() * longitud));
}

int main()
{

	double base, ancho, altura;
	cout << "Cuales son las medidas de la figura " << endl;
	cout << " \n Base:  ";
	cin >> base;
	cout << "\n Ancho: ";
	cin >> ancho;
	cout << "\n Altura: ";
	cin >> altura;

	Volumen figura(base, ancho, altura);
	Rectangulo lado(base, ancho);
	cout << "\n El area de la base es = " << lado.Area() << " cm^2" << endl;
	cout << "\n El volumen es = " << figura.volumen() << " cm^3" << endl;
	cout << "\n El area es = " << figura.AreaTotal() << " cm^2" << endl;

	system("pause");
	return 0;

}
