#include "ESFERA.h"


// constructor y destructor

ESFERA::ESFERA()
{
}


ESFERA::~ESFERA()
{
}

// cambio valor atributos esfera

void ESFERA:: SetVelocidad(float x, float y, float z)
{
	velocidad[0]=x; velocidad[1] = y; velocidad[2] = z;
}
void ESFERA::SetRadio(float r) 
{
	radio = r;
}
void ESFERA::SetColor(unsigned char r, unsigned char g, unsigned char b)
{
	color[0] = r; color[1] = g; color[2] = b;
}
void ESFERA::SetPos(float x , float y , float z )
{
	pos[0] = x; pos[1] = y; pos[2] = z;
}

void ESFERA::Mov() {
	pos[0] += velocidad[0];
	pos[1] += velocidad[1];
	pos[2] += velocidad[2];
}


void ESFERA::Dibujar() // Dibujar esfera
{
	glDisable(GL_LIGHTING);
	glColor3ub(color[0], color[1], color[2]);
	glTranslatef(pos[0], pos[1], pos[2]);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-pos[0], -pos[1], -pos[2]);
	glEnable(GL_LIGHTING);
}



//devolver atributos esfera
float * ESFERA::Pos() { return pos; }
float ESFERA::Radio() { return radio; }
float * ESFERA::Velocidad() { return velocidad; }
unsigned char * ESFERA::Color() { return color; }