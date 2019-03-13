#include "FUERZA.h"



FUERZA::FUERZA()
{
}


FUERZA::~FUERZA()
{
}

float * FUERZA::Impacto(float * velocidad) {
	float * v = vector;
	vector[0] = 0;
	vector[1] = 0;
	return v;
}

void FUERZA::Var(unsigned char key) {
	switch (key)
	{
	case 'w':
		vector[0] = 0.0f;
		vector[1] = 0.1f;
		break;

	case 's':
		vector[0] = 0.0f;
		vector[1] = -0.1f;
		break;
	case 'a':
		vector[0] = 0.1f;
		vector[1] = 0.0f;

		break;
	case 'd':
		vector[0] = -0.1f;
		vector[1] = 0.0f;
		break;
	default:
		vector[0] = 0.0f;
		vector[1] = 0.0f;
		break;
	}

}

