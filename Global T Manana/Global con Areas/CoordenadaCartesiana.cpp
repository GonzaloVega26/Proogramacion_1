#include <program1.h>
#include "CoordenadaCartesiana.h"
#include "Triangulo.h"
CoordenadaCartesiana::CoordenadaCartesiana(){
}
CoordenadaCartesiana::CoordenadaCartesiana(long double x,long double y){
	esto->x = x;
	esto->y = y;
}
funcion long double CoordenadaCartesiana::getX(){
	regresa(esto->x);
}
funcion long double CoordenadaCartesiana::getY(){
	regresa(esto->y);
}
procedimiento CoordenadaCartesiana::setX(long double x){
	esto->x = x;
}
procedimiento CoordenadaCartesiana::setY(long double y){
	esto->y = y;
}
funcion cadena CoordenadaCartesiana::toString(){
	regresa("( "+aCadena(esto->x,4) + " , " + aCadena(esto->y,4) + " )");
}

funcion long double CoordenadaCartesiana::distanciaEntrePunto(CoordenadaCartesiana otroPunto){
	//Distancia entre puntos sqrt((x1-x2)^2 + (y1-y2)^2 )
	long double resultado = raiz2(
						   ((esto->x - otroPunto.getX())*(esto->x - otroPunto.getX()))
						   + 
						   ((esto->y - otroPunto.getY())*(esto->y - otroPunto.getY()))
						   );
	regresa(resultado);
}
funcion logico CoordenadaCartesiana::operador ES(CoordenadaCartesiana punto){
	si(esto->x ES punto.getX() Y esto->y ES punto.getY()) regresa(VERDADERO);
	regresa(FALSO);
}
	
