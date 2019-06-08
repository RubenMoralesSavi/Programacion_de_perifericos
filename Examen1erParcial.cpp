/* Universidad Politecnica de Tulancingo
	   Programacion de Perifericos
		  Ruben Morales Saviñon
   Programa Examen : Es un programa
   donde en un bloc de notas hay datos
   personales y el programa se encargara
   de leer el archivo .txt, delimitara
   los espacios y el genero de ser mostrado
   como M ó F dara mostrara si es Mujer u Hombre*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Persona {  //Se crea la clase 
private:
	string nombre;
	int edad;
	char genero;
	string direccion;
	string telefono;
	string email;
public:
	Persona(string, int, char, string, string, string);
	string muestraGen() {
		if (genero == 'M')
			return "Hombre";
		else
			return "Mujer";
	}
	Persona muestra();
};



Persona::LeerArchivo("C:\\Users\\ruben\\source\\repos\\Final\\Final.txt") {
	cout << muestra() << endl;
}


void Persona::muestra() {
	cout << "Soy :" << nombre << endl;
	cout << "Tengo :" << edad << "Años" << endl;
	cout << "Genero: " << genero << endl;
	cout << "Direccion" << direccion << endl;
	cout << "Celular" << telefono << endl;
	cout << "Correo" << email << endl;

}


int main()
{
	void LeerArchivo(string archivo);
	string cadena, token;
	//cout << "La cadena mide: " << cadena.length << " bytes. " << endl;
	string delimita = " ";
	size_t pos = 0;
	while ((pos = cadena.find(delimita)) != string::npos) {
		token = cadena.substr(0, pos);
		cout << token << endl;
		cadena.erase(0, pos + delimita.length());
	}
	cout << cadena << endl;
	system("pause");
	return 0;


}

