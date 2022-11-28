#ifndef COORDENADACARTESIANA_H
#define COORDENADACARTESIANA_H
estructura CoordenadaCartesiana{
	privado:
		campo real x;
		campo real y;
	publico:
		CoordenadaCartesiana();
		CoordenadaCartesiana(real,real);
		funcion real getX();
		funcion real getY();
		procedimiento setX(real);
		procedimiento setY(real);
		funcion cadena toString();
		funcion real distanciaEntrePunto(CoordenadaCartesiana);
		funcion logico operador ES(CoordenadaCartesiana);
};
#endif
