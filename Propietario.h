//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PROPIETARIO_H
#define LAB_7_COMPOSICION_PROPIETARIO_H
#include<string>
#include "Carro.h"
class Propietario {
	std::string nombre;
	Carro carro;
public:
	Propietario(std::string nombre, Carro* carro);
	Propietario();
	std::string toString();
};


#endif //LAB_7_COMPOSICION_PROPIETARIO_H
