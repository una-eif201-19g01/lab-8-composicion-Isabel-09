//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Ventana.h"
Ventana::Ventana() {}

Ventana::Ventana(bool polarizada, bool electrica, bool estado) :polarizada(polarizada), electrica(electrica), estado(estado) {

}

void Ventana::abrir() {
	estado = true;
}
void Ventana::cerrar() {
	estado = false;
}