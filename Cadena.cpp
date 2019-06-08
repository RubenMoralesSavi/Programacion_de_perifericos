/* Universidad Politecnica de Tulancingo
	   Programacion de Perifericos
		  Ruben Morales Saviñon
   Programa Cadena : Es un programa
   donde ingresas una cadena y esta 
   en cada espacio quedara delimitada
   "salto de linea"*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string cadena, token;
	cout << "Ingresa una cadena : ";
	getline(cin, cadena);
	//cout << "La cadena mide: " << cadena.length << " bytes. " << endl;
	string delimita = " ";
	size_t pos = 0;
	while ((pos = cadena.find(delimita)) != string::npos) {
		token = cadena.substr(0, pos);
		cout << token << endl;
		cadena.erase(0, pos + delimita.length());
	}
	cout << cadena <<endl;
	system("pause");
	return 0;
}
