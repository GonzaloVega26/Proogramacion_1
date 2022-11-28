#ifndef TRIANGULO_H
#define TRIANGULO_H
estructura Triangulo{
	privado:
		campo CoordenadaCartesiana p1;
	campo CoordenadaCartesiana p2;
	campo CoordenadaCartesiana p3;
	campo real perimetro;
	publico:
		Triangulo(CoordenadaCartesiana,CoordenadaCartesiana,CoordenadaCartesiana);
	funcion CoordenadaCartesiana getP1();
	funcion CoordenadaCartesiana getP2();
	funcion CoordenadaCartesiana getP3();
	funcion real getPerimetro();
	procedimiento setP1(CoordenadaCartesiana);
	procedimiento setP2(CoordenadaCartesiana);
	procedimiento setP3(CoordenadaCartesiana);
	funcion long double calcularArea();
	funcion long double calcularPerimetro();
	procedimiento setPerimetro(real);
	funcion logico operador ES(Triangulo);
	funcion cadena toString();
};
#endif
