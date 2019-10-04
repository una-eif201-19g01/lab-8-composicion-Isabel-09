//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_RUEDA_H
#define LAB_7_COMPOSICION_RUEDA_H

#include<string>
class Rueda {
	int tamano;
	float presion;
public:
	Rueda();
	Rueda(int, float);
	int getTamano();
	void setTamano(int);
	float getPresion();
	void setPresion(float);
};


#endif //LAB_7_COMPOSICION_RUEDA_H

