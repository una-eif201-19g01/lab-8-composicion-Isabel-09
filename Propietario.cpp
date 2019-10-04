//
// Created by Maikol Guzman  on 2019-09-26.
//
#include<sstream>
#include "Propietario.h"

Propietario::Propietario() {}

Propietario::Propietario(std::string nombre, Carro* carro) :nombre(nombre), carro(carro) {

}

std::string Propietario::toString() {
	std::stringstream s;
	s << "Nombre :" << nombre << endl;
	return s.str();
}