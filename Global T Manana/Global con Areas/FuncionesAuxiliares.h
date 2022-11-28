#include "CoordenadaCartesiana.h"
#include "Triangulo.h"
#ifndef FUNCIONESAUXILIARES_H
#define FUNCIONESAUXILIARES_H
procedimiento cargarPuntos(vectorDin(CoordenadaCartesiana) porRef);
procedimiento verificarCantidadPuntos(entero );
procedimiento generarTriangulos(vectorDin(CoordenadaCartesiana), vectorDin(Triangulo) porRef);	
funcion logico esInterior(CoordenadaCartesiana, Triangulo);
funcion vectorDin(Triangulo) quitarTriangulosSinPuntoInterior(vectorDin(CoordenadaCartesiana), vectorDin(Triangulo));
funcion logico esVertice(CoordenadaCartesiana , Triangulo );
funcion logico poseePuntoInterior(vectorDin(CoordenadaCartesiana), Triangulo);
funcion entero encontrarPosicionDeTrianguloMayorPerimetro(vectorDin(Triangulo));
funcion long double encontrarTrianguloMayorPerimetro(vectorDin(Triangulo) );
funcion logico compararConAproximacion(long double, long double);
#endif
