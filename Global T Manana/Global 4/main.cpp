#include <program1.h>
#include "CoordenadaCartesiana.h"
#include "Triangulo.h"
/**
*  Enunciado:  
*/
procedimiento cargarPuntos(vectorDin(CoordenadaCartesiana) porRef);
procedimiento verificarCantidadPuntos(entero );
procedimiento generarTriangulos(vectorDin(CoordenadaCartesiana), vectorDin(Triangulo) porRef);	
funcion logico esInterior(CoordenadaCartesiana, Triangulo);
funcion vectorDin(Triangulo) quitarTriangulosSinPuntoInterior(vectorDin(CoordenadaCartesiana), vectorDin(Triangulo));
funcion logico esVertice(CoordenadaCartesiana , Triangulo );
funcion logico poseePuntoInterior(vectorDin(CoordenadaCartesiana), Triangulo);


principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
mostrar << "EMPIEZA EL PROGRAMA" << salto;
vectorDin(CoordenadaCartesiana) puntos;

cargarPuntos(puntos);

verificarCantidadPuntos(tamanio(puntos));

vectorDin(Triangulo) triangulos;
generarTriangulos(puntos,triangulos);
mostrar << "GENERO LOS TRIANGULOS" << salto;
vectorDin(Triangulo) triangulosConPuntoInterior;
triangulosConPuntoInterior = quitarTriangulosSinPuntoInterior(puntos,triangulos);

real mayor = 0.0;
entero indice =  0;
entero i;
variarMas1(i,0,tamanio(triangulosConPuntoInterior))
	real perimetro = triangulosConPuntoInterior[i].getPerimetro();
	si(perimetro >= mayor) entonces
		mayor = perimetro;
		indice = i;
finSi   
finVariar

mostrar << "Triangulos totales: " <<tamanio(triangulos) << salto;
mostrar << "Triangulos con Punto Interior: " << tamanio(triangulosConPuntoInterior) << salto;
mostrar << "El perimetro más grande es : " << mayor << salto;
mostrar << "Pertenece al triangulo id : " << indice << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
	
funcion entero encontrarPosicionDeTrianguloConMayorPerimetro(vectorDin(Triangulo) puntos){
	
}
procedimiento generarTriangulos(vectorDin(CoordenadaCartesiana) puntos, vectorDin(Triangulo) porRef triangulos){
	entero i,j,k;
	variarMas1(i,0,tamanio(puntos)-2-1)
		variarMas1(j,i+1,tamanio(puntos)-1-1)
			variarMas1(k,j+1,tamanio(puntos)-1)
				Triangulo triangulo(puntos[i],puntos[j],puntos[k]);
				si(triangulo.calcularArea() NOES 0.0) entonces //Verificamos que el triangulo generado tenga area
					//Sino la tiene entonces no es un triangulo
					triangulo.setPerimetro(triangulo.calcularPerimetro());
					agregaEleVDin(triangulos,triangulo);
				finSi
			finVariar
		finVariar
	finVariar

}
procedimiento cargarPuntos(vectorDin(CoordenadaCartesiana) porRef puntos){
	real datoX;
	real datoY;
	iterar
		leer(datoX);
		leer(datoY);
		salirSi(esFinArch(stdin));
		si(datoX ES 0 Y datoY ES 0) sale;
		CoordenadaCartesiana punto(datoX,datoY);
		agregaEleVDin(puntos,punto);
	finIterar
	
}
	
funcion logico esInterior(CoordenadaCartesiana punto, Triangulo triangulo){
	si(NO esVertice(punto,triangulo)) entonces
		Triangulo a(punto,triangulo.getP2(),triangulo.getP3());
		Triangulo b(triangulo.getP1(),punto,triangulo.getP3());
		Triangulo c(triangulo.getP1(),triangulo.getP2(),punto);
		//Un punto es interior a un triangulo si la suma de las areas formadas por el punto en cuestion y los puntos del triangulo
		//Es igual al area del triangulo en cuestion
		real areaTriangulos = a.calcularArea() + b.calcularArea() + c.calcularArea();
		real areaTrianguloCuestion = triangulo.calcularArea();

		
		si(areaTriangulos ES areaTrianguloCuestion) regresa(VERDADERO);
	finSi
		
			regresa(FALSO);
	

}
funcion logico esVertice(CoordenadaCartesiana punto, Triangulo triangulo){
	si(punto ES triangulo.getP1() O punto ES triangulo.getP2() O punto ES triangulo.getP3()) regresa(VERDADERO);
	regresa(FALSO);
}
funcion vectorDin(Triangulo) quitarTriangulosSinPuntoInterior(vectorDin(CoordenadaCartesiana) puntos, 
															  vectorDin(Triangulo) triangulos){
	vectorDin(Triangulo) triangulosFinal;
	mostrar << "COMENZO" << salto;
	entero a = 0;
	paraCada(triangulo,triangulos)
		mostrar << a << salto;
		a++;
		si(poseePuntoInterior(puntos,triangulo)) entonces
			//mostrar << tamanio(triangulosFinal) << salto;
			agregaEleVDin(triangulosFinal,triangulo);
		finSi
	finParaCada
	
	mostrar << "FINALIZO" << salto;
	regresa(triangulosFinal);
}
	
funcion logico poseePuntoInterior(vectorDin(CoordenadaCartesiana) puntos, Triangulo triangulo){
	//mostrar << "COMENZO pUNTO INTERIOR" << salto;
	paraCada(punto,puntos)
		si(esInterior(punto,triangulo)) regresa(VERDADERO);
	finParaCada
	regresa(FALSO);
	
}
procedimiento verificarCantidadPuntos(entero tamanioVector){
	si(tamanioVector <= 2) entonces
		mostrar << "Cantidad de Puntos insuficiente, deben ser más de 2 puntos" << salto;
		terminarPrograma;
	finSi
}
