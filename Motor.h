//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_MOTOR_H
#define LAB_7_COMPOSICION_MOTOR_H
#include <string>
class Motor {
	bool estado;
public:
	Motor(bool estado);
	Motor();
	void encender();
	void  apagar();

};


#endif //LAB_7_COMPOSICION_MOTOR_H
