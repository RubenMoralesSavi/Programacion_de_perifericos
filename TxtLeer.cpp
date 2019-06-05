

 
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>	
using namespace std;

string LeeTxt(string archivo) {
	string texto, linea;
	ifstream miarchivo(archivo);
	if (miarchivo.is_open()) {
		texto = "";
		while (getline(miarchivo, linea)) {
			texto + linea;
		}
		miarchivo.close();
	}
	return texto;
}

bool escribeTxt(string archivo, string txt) {
	bool resu = false;
	ofstream elarchivo(archivo);
	if (elarchivo.is_open()) {
		elarchivo << txt;
		elarchivo.close();
		resu = true;
	}
	return resu;
}
string capturaTxt() {
	string stream _le;
	string nombre, paterno, materno;
	int edad;
	double peso;
	double estatura;

	_le << nombre << "" << paterno << ""<< materno << "," << edad << "," << peso << "," << estatura;
}
int main()
{
    
}

