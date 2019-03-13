#pragma once

#ifndef _FUERZA_H
#define _FUERZA_H

class FUERZA
{
private:
	float vector[3] = { 0,0,0 };
public:
	FUERZA();
	~FUERZA();

	float * Impacto(float* velocidad);
	void Var(unsigned char key);
};

#endif