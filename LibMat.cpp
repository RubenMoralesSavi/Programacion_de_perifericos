// LibMat.cpp : Define las funciones exportadas de la aplicación DLL.
//

#include "stdafx.h"
//Añadiendo encabezado.
#include <utility>
#include <limits.h>
//Son del sistema.
#include "LibMat.h"
//Añado mi encabezado

//Definiendo variables externas
static unsigned long long anterior_;
static unsigned long long actual_;
static unsigned indice_;

//Static, sirbe para mantener las variables fijas.

void fibonacci_next(const unsigned long long a, const unsigned long long b) {
	indice_ = 0;
	anterior_ = a;
	actual_ = b;
}

bool fibonacci_next() {
	if ((ULLONG_MAX - anterior_ < actual_) ||
		(UINT_MAX == indice_)) {
		return false;
		//Si llega al tope, lo finaliza.
	}
	anterior_ += actual_;
	swap(actual_, anterior_);
	++indice_;
	return true;
}
unsigned fibonacci_indice() {
	return indice_;
}