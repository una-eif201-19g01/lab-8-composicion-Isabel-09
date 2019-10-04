#include <iostream>
#include "Carro.h"
#include"Motor.h"
#include"Propietario.h"
#include"Puerta.h"
#include"Rueda.h"
#include"Ventana.h"
int main() {
	Propietario* propietario = new Propietario;
	Motor* motor = new Motor(true);
	Ventana* ventana = new Ventana(false, true, false);
	Puerta* puerta = new Puerta(ventana, false);
	Rueda* rueda = new Rueda(205, 28);
	Carro* carro = new Carro("12erdf", 20, motor, propietario, puerta, rueda);
	Propietario* propietario = new Propietario("maria jose", carro);
	carro->abrirPuertas();
	std::cout << carro->toString() << std::endl;
	carro->abrirVentanas();
	std::cout << carro->toString() << std::endl;
	carro->apagarMotor();
	std::cout << carro->toString() << std::endl;
	carro->encenderMotor();
	std::cout << carro->toString() << std::endl;
	carro->encenderMotor();
	std::cout << carro->toString() << std::endl;

	delete motor;
	delete propietario;
	delete ventana;
	delete  puerta;
	delete rueda;
	delete carro;
	return 0;
}