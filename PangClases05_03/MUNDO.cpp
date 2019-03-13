#include "MUNDO.h"

// constructor y destructor

MUNDO::MUNDO()
{
}


MUNDO::~MUNDO()
{
}

void MUNDO::Inicializa() {
	//inicicalizar esfera 2
	e1.SetVelocidad();
	e1.SetColor();
	e1.SetRadio();
	e1.SetPos();
	//inicicalizar esfera 1 
	e2.SetVelocidad();
	e2.SetColor();
	e2.SetRadio();
	e2.SetPos();
	//observador
	target[0] = 0.0; target[1] = 0.0; target[2] = 0.0;
	ojo[0] = 20.0; ojo[1] = 10.0; ojo[2] = 0.0;
	ojo[0] = 0; ojo[1] = 1; ojo[2] = 0;

}

void MUNDO::MOvObservador() {
	ojo[0] = 40 * cos(time);
	ojo[2] = 25 * sin(time);
}

void MUNDO::Dibuja() {
	e1.Dibujar();
	e2.Dibujar();
}
void MUNDO::Mueve() {
	
	e1.Mov();
	e2.Mov();

	
}
void MUNDO::Tecla(unsigned char key) {
	return;
}