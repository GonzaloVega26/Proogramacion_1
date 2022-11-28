#ifndef COORDENADACARTESIANA_H
#define COORDENADACARTESIANA_H
estructura CoordenadaCartesiana{
	privado:
		campo long double x;
	campo long double y;
	publico:
		CoordenadaCartesiana();
	CoordenadaCartesiana(long double,long double);
	funcion long double getX();
	funcion long double getY();
	procedimiento setX(long double);
	procedimiento setY(long double);
	funcion cadena toString();
	funcion long double distanciaEntrePunto(CoordenadaCartesiana);
	funcion logico operador ES(CoordenadaCartesiana);
};
#endif
