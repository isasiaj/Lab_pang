#pragma once
#ifndef _MUNDO_H
#define _MUNDO_H

#include"ESFERA.h"
#include"FUERZA.h"
#include "glut.h"
#include <math.h>

class MUNDO
{
private:
	double time=0;

public:
	ESFERA e1;
	ESFERA e2;
	FUERZA user;
	GLdouble ojo[3];
	GLdouble target[3];
	GLdouble arriba[3];

	MUNDO();
	~MUNDO();

	void Inicializa();
	void MOvObservador();
	void Dibuja();
	void Mueve();
	void Tecla(unsigned char key);

};

#endif
