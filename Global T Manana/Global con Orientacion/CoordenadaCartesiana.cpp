#include <program1.h>
#include "CoordenadaCartesiana.h"
#include "Triangulo.h"
CoordenadaCartesiana::CoordenadaCartesiana(){
}
CoordenadaCartesiana::CoordenadaCartesiana(real x,real y){
	esto->x = x;
	esto->y = y;
}
funcion real CoordenadaCartesiana::getX(){
	regresa(esto->x);
}
funcion real CoordenadaCartesiana::getY(){
	regresa(esto->y);
}
procedimiento CoordenadaCartesiana::setX(real x){
	esto->x = x;
}
procedimiento CoordenadaCartesiana::setY(real y){
	esto->y = y;
}
funcion cadena CoordenadaCartesiana::toString(){
	regresa("( "+aCadena(esto->x,4) + " , " + aCadena(esto->y,4) + " )");
}

funcion real CoordenadaCartesiana::distanciaEntrePunto(CoordenadaCartesiana otroPunto){
	//Distancia entre puntos sqrt((x1-x2)^2 + (y1-y2)^2 )
	regresa(raiz2((esto->x - otroPunto.getX())*(esto->x - otroPunto.getX()) 
			+ (esto->y - otroPunto.getY())*(esto->y - otroPunto.getY())));
}
funcion logico CoordenadaCartesiana::operador ES(CoordenadaCartesiana punto){
	si(esto->x ES punto.getX() Y esto->y ES punto.getY()) regresa(VERDADERO);
	regresa(FALSO);
}
