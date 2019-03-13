#pragma once

#ifndef _ESFERA_H
#define _ESFERA_H

#include "glut.h"

class ESFERA
{
private:
	float radio;
	float pos[3];   // (x,y,z)
	unsigned char color[3];  // (r,g,b)
	float velocidad[3];//aumento de posición por tick (x,y,z)
public:
	ESFERA();
	~ESFERA();

	void SetVelocidad(float x=0.0f,float y=0.0f,float z=0.0f);
	void SetRadio(float r=1.0f);
	void SetColor(unsigned char r= 255, unsigned char g=255, unsigned char b = 255);
	void SetPos(float x = 0.0f, float y = 0.0f, float z = 0.0f);

	void Dibujar();
	void Mov();
	float * Pos();
	float Radio();
	float * Velocidad();
	unsigned char * Color();
};


#endif