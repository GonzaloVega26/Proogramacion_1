#include <program1.h>
#include "FuncionesAuxiliares.h"
funcion long double encontrarTrianguloMayorPerimetro(vectorDin(Triangulo) triangulos){
	long double mayor = 0.0;
	paraCada(tr,triangulos)
		long double perimetro = tr.getPerimetro();
		si(perimetro >= mayor) 	mayor = perimetro;
	finParaCada
	regresa(mayor);
}
funcion entero encontrarPosicionDeTrianguloMayorPerimetro(vectorDin(Triangulo) triangulos){
	long double mayor = 0.0;
	entero i,indice;
	variarMas1(i,0,tamanio(triangulos))
		long double perimetro = triangulos[i].getPerimetro();
	si(perimetro >= mayor) entonces
		mayor = perimetro;
	indice = i;
	finSi   
		finVariar
		
		regresa(indice);
}
procedimiento generarTriangulos(vectorDin(CoordenadaCartesiana) puntos, vectorDin(Triangulo) porRef triangulos){
	entero i,j,k;
	variarMas1(i,0,tamanio(puntos)-2-1)
		variarMas1(j,i+1,tamanio(puntos)-1-1)
			variarMas1(k,j+1,tamanio(puntos)-1)
				Triangulo triangulo(puntos[i],puntos[j],puntos[k]);
				//Al parecer no hay que sacar los de area 0 
		//		si(triangulo.calcularArea() NOES 0.0) entonces //Verificamos que el triangulo generado tenga area
		//		//Sino la tiene entonces no es un triangulo
		//			triangulo.setPerimetro(triangulo.calcularPerimetro());
		//			agregaEleVDin(triangulos,triangulo);
		//		finSi
			
				triangulo.setPerimetro(triangulo.calcularPerimetro());
				agregaEleVDin(triangulos,triangulo);
			finVariar
		finVariar
	finVariar
		
}
procedimiento cargarPuntos(vectorDin(CoordenadaCartesiana) porRef puntos){
	long double datoX;
	long double datoY;
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
	long double  areaTriangulos = a.calcularArea() + b.calcularArea() + c.calcularArea();
	long double  areaTrianguloCuestion = triangulo.calcularArea();
	

	si(compararConAproximacion(areaTrianguloCuestion,areaTriangulos)) regresa(VERDADERO); 
	//si(areaTriangulosEntero ES areaTrianguloCuestionEntero) regresa(VERDADERO);
	//Comparo utilizando cadenas porque si los valores son enteros por alguna razon no considera iguales dos numeros 
	//Update 2: Genera problema de memoria si quiero correr el archivo de datos completo
//			si(areaTriangulos ES areaTrianguloCuestion) entonces
//				mostrar << "SI TIENE" << salto;
//				regresa(VERDADERO); 
//			finSi 
	//si(areaTriangulos ES areaTrianguloCuestion) regresa(VERDADERO);
	finSi
	regresa(FALSO);
}
	
funcion logico compararConAproximacion(long double x, long double y){
	long double errorPermitido = 0.0005;
	si( ((y - errorPermitido) <= x )Y (x <= (y + errorPermitido))) regresa(VERDADERO);
	regresa(FALSO);
}
funcion logico esVertice(CoordenadaCartesiana punto, Triangulo triangulo){
	si(punto ES triangulo.getP1() O punto ES triangulo.getP2() O punto ES triangulo.getP3()) regresa(VERDADERO);
	regresa(FALSO);
}
funcion vectorDin(Triangulo) quitarTriangulosSinPuntoInterior(vectorDin(CoordenadaCartesiana) puntos, 
															  vectorDin(Triangulo) triangulos){
	vectorDin(Triangulo) triangulosFinal;
	paraCada(triangulo,triangulos)
		si(poseePuntoInterior(puntos,triangulo)) entonces
			agregaEleVDin(triangulosFinal,triangulo);
		finSi
	finParaCada
		
	regresa(triangulosFinal);
}
funcion logico poseePuntoInterior(vectorDin(CoordenadaCartesiana) puntos, Triangulo triangulo){
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
