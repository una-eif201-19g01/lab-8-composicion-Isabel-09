#pragma once
#include"Motor.h"
#include"Propietario.h"
#include"Puerta.h"
#include"Rueda.h"
#include"Ventana.h"
class Carro {
	std::string placa;
	int litros;
	Motor* motor;
	Propietario* propietario;
	Puerta* puerta;
	Rueda* rueda;
public:
	Carro(std::string placa, int litros, Motor*, Propietario*, Puerta*, Rueda*);
	Carro();
	void encenderMotor();
	void apagarMotor();
	void abrirPuertas();
	void abrirVentanas();
	void CambiarPresionRuedas(float presion);
	std::string toString();
};