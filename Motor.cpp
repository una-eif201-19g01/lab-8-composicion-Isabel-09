//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Motor.h"
Motor::Motor() {}
Motor::Motor(bool estado) :estado(estado) {
}
bool Motor::apagar() {
	estado = true;

}
bool Motor::encender() {
	estado = false;
}
