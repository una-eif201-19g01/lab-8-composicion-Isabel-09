//
// Created by Maikol Guzman  on 2019-09-26.
//
#include<sstream>
#include "Rueda.h"
Rueda::Rueda() {}

Rueda::Rueda(int tamano, float presion) :tamano(tamano), presion(presion) {
}

int Rueda::getTamano() {
	return tamano;
}
void Rueda::setTamano(int tamano) {
	this->tamano = tamano;
}
float Rueda::getPresion() {
	return presion;
}
void Rueda::setPresion(float presion) {
	this->presion = presion;
}
