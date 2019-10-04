#include "Carro.h"
#include"Motor.h"
#include"Propietario.h"
#include"Puerta.h"
#include"Rueda.h"
#include"Ventana.h"

Carro::Carro() {}
Carro::Carro(std::string placa, int litros, Motor* motor, Propietario* propietario, Puerta* puerta, Rueda* rueda): placa(placa),litros(litros),motor(motor),propietario(propietario),puerta(puerta),rueda(rueda){

}
void Carro::encenderMotor() {
	motor->encender();
}
void Carro::apagarMotor() {
	motor->apagar();
}
void Carro::abrirPuertas() {
	puerta->abrirPuerta();
}
void Carro::abrirVentanas() {
	puerta-abrirVentana();
}
void Carro::CambiarPresionRuedas(float presion) {
	rueda->setPresion(presion);
}
std::string Carro::toString() {
	std::stringstream s;
	propietario->toString();
	s << " Placa :" << placa << endl;
	s << "Litros :" << litros << endl;
	return s.str();
}