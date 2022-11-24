#include <program1.h>
#include "CoordenadaCartesiana.h"
#include "Triangulo.h"

Triangulo::Triangulo(CoordenadaCartesiana p1,CoordenadaCartesiana p2,CoordenadaCartesiana p3){
		esto->p1=p1;
		esto->p2=p2;
		esto->p3=p3;
}
funcion CoordenadaCartesiana Triangulo::getP1(){
	regresa(esto->p1);
}
funcion CoordenadaCartesiana Triangulo::getP2(){
	regresa(esto->p2);
}
funcion CoordenadaCartesiana Triangulo::getP3(){
	regresa(esto->p3);
}
procedimiento Triangulo::setP1(CoordenadaCartesiana){
	esto->p1=p1;
}
procedimiento Triangulo::setP2(CoordenadaCartesiana){
	esto->p2=p2;
}
procedimiento Triangulo::setP3(CoordenadaCartesiana){
	esto->p3=p3;
}

funcion real Triangulo::calcularArea(){
	//Usando formula de heron sqrt(s(s-a)*(s-b)*(s-c))
	//s = (a+b+c)/2 siendo a,b,c los lados del triangulo
	real s = calcularPerimetro()/2;
	real a = esto->p1.distanciaEntrePunto(p2);
	real b = esto->p1.distanciaEntrePunto(p3);
	real c = esto->p2.distanciaEntrePunto(p3);
	regresa(raiz2(s*(s-a)*(s-b)*(s-c)));
	
}
//procedimiento Triangulo::setArea(real area){
//	esto->area = area;
//}
funcion real Triangulo::calcularPerimetro(){
	regresa(esto->p1.distanciaEntrePunto(p2) + esto->p1.distanciaEntrePunto(p3) + esto->p2.distanciaEntrePunto(p3) );
}
procedimiento Triangulo::setPerimetro(real perimetro){
	esto->perimetro = perimetro;
}

funcion logico Triangulo::operador ES(Triangulo triangulo){
	si(esto->p1 ES triangulo.getP1() Y esto->p2 ES triangulo.getP2() Y esto->p3 ES triangulo.getP3()) regresa(VERDADERO);
	regresa(FALSO);
}
	
funcion cadena Triangulo::toString(){
	regresa("Punto \n" + esto->p1.toString() + "\n" +
			esto->p2.toString() + "\n" +
			esto->p3.toString()) + "\n";
}

funcion real Triangulo::getPerimetro(){
	regresa(esto->perimetro);
}
