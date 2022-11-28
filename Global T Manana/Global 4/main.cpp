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
funcion entero encontrarPosicionDeTrianguloMayorPerimetro(vectorDin(Triangulo));
funcion real encontrarTrianguloMayorPerimetro(vectorDin(Triangulo) );
funcion real sumatoriaPerimetros(vectorDin(Triangulo) );
funcion	vectorDin(Triangulo) calcularOrientacion(vectorDin(CoordenadaCartesiana) , vectorDin(Triangulo) );



principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
mostrar << "EMPIEZA EL PROGRAMA" << salto;
vectorDin(CoordenadaCartesiana) puntos;

cargarPuntos(puntos);
mostrar << "El tamaño de puntos es : " << tamanio(puntos) << salto;
verificarCantidadPuntos(tamanio(puntos));

vectorDin(Triangulo) triangulos;
mostrar << "------GENERANDO LOS TRIANGULOS------" << salto;
generarTriangulos(puntos,triangulos);
mostrar << "El tamaño de triangulos es : " << tamanio(triangulos) << salto;


vectorDin(Triangulo) triangulosConPuntoInterior;
mostrar << "------ELIMINANDO TRIANGULOS SIN PUNTOS INTERIORES------" << salto;
triangulosConPuntoInterior = calcularOrientacion(puntos,triangulos);



mostrar << "Triangulos totales: " << tamanio(triangulos) << salto;
mostrar << "Triangulos con Punto Interior: " << tamanio(triangulosConPuntoInterior) << salto;
mostrar << "El perimetro más grande es : " << encontrarTrianguloMayorPerimetro(triangulosConPuntoInterior) << salto;
mostrar << "Pertenece al triangulo con posicion id : " << encontrarPosicionDeTrianguloMayorPerimetro(triangulosConPuntoInterior) << salto;
mostrar << "Sumatoria: " << sumatoriaPerimetros(triangulosConPuntoInterior) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
funcion real sumatoriaPerimetros(vectorDin(Triangulo) triangulos){
	real sumatoria = 0.0;
	paraCada(tr,triangulos)
		real perimetro = tr.getPerimetro();
		sumatoria += perimetro;
	finParaCada
		
		regresa(sumatoria);
}
funcion real encontrarTrianguloMayorPerimetro(vectorDin(Triangulo) triangulos){
real mayor = 0.0;
paraCada(tr,triangulos)
	real perimetro = tr.getPerimetro();
	si(perimetro >= mayor) 	mayor = perimetro;
finParaCada
	
	regresa(mayor);
}
funcion entero encontrarPosicionDeTrianguloMayorPerimetro(vectorDin(Triangulo) triangulos){
	real mayor = 0.0;
	entero i,indice;
	variarMas1(i,0,tamanio(triangulos))
		real perimetro = triangulos[i].getPerimetro();
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
//				si(triangulo.calcularArea() NOES 0.0) entonces //Verificamos que el triangulo generado tenga area
//					//Sino la tiene entonces no es un triangulo
//					triangulo.setPerimetro(triangulo.calcularPerimetro());
//					agregaEleVDin(triangulos,triangulo);
//				finSi
					//Si sacamos los triangulos de area = 0 entonces no da la respuesta.
					triangulo.setPerimetro(triangulo.calcularPerimetro());
					agregaEleVDin(triangulos,triangulo);
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

	
funcion vectorDin(Triangulo) calcularOrientacion(vector<CoordenadaCartesiana> cadaPunto, vector<Triangulo> triangulos){
	vectorDin(Triangulo) triangulosFinal;
		real triangulo, PrimerP, SegundoP, TercerP;
		
		for(unsigned entero i=0;i<triangulos.size();i++){
			
			triangulo = (triangulos[i].getP1().getX() - triangulos[i].getP3().getX())*(triangulos[i].getP2().getY() - triangulos[i].getP3().getY())-(triangulos[i].getP1().getY()
																								 - triangulos[i].getP3().getY())*(triangulos[i].getP2().getX() - triangulos[i].getP3().getX());	
			
			logico puntoAdentro = false;
			
			for(unsigned entero j=0;j < cadaPunto.size();j++){				
				PrimerP = ((triangulos[i].getP1().getX() - cadaPunto[j].getX()) * (triangulos[i].getP2().getY() - cadaPunto[j].getY()) - (triangulos[i].getP1().getY() - cadaPunto[j].getY()) * (triangulos[i].getP2().getX() - cadaPunto[j].getX()));
				SegundoP = ((triangulos[i].getP2().getX() - cadaPunto[j].getX()) * (triangulos[i].getP3().getY() - cadaPunto[j].getY()) - (triangulos[i].getP2().getY() - cadaPunto[j].getY()) * (triangulos[i].getP3().getX() - cadaPunto[j].getX()));
				TercerP = ((triangulos[i].getP3().getX() - cadaPunto[j].getX()) * (triangulos[i].getP1().getY() - cadaPunto[j].getY()) - (triangulos[i].getP3().getY() - cadaPunto[j].getY()) * (triangulos[i].getP1().getX() - cadaPunto[j].getX()));
				
				//Si el triangulo es > 0 tiene orientacion positiva
				si(triangulo > 0) entonces
					//Si tiene orientacion positiva, la orientacion de los 3 triangulos deben ser negativas para que el punto se encuentre afuera 
					si(PrimerP > 0 && SegundoP > 0 && TercerP > 0)entonces					
					puntoAdentro = true;
				finSi					
					sinoSi(triangulo < 0)entonces
					//Si tiene orientacion negativa, la orientacion de los 3 triangulos deben ser positivas para que el punto se encuentre afuera 		
					si(PrimerP < 0 && SegundoP < 0 && TercerP < 0)entonces					
					puntoAdentro = true;
				finSi
					
					finSi				
			}		
			si(puntoAdentro ES true)entonces
				triangulosFinal.push_back(triangulos[i]);
			finSi	
		}
		
	regresa(triangulosFinal);
	}	
//funcion logico esInterior(CoordenadaCartesiana punto, Triangulo triangulo){
//	si(NO esVertice(punto,triangulo)) entonces
//		Triangulo a(punto,triangulo.getP2(),triangulo.getP3());
//		Triangulo b(triangulo.getP1(),punto,triangulo.getP3());
//		Triangulo c(triangulo.getP1(),triangulo.getP2(),punto);
//		//Un punto es interior a un triangulo si la suma de las areas formadas por el punto en cuestion y los puntos del triangulo
//		//Es igual al area del triangulo en cuestion
//		real areaTriangulos = a.calcularArea() + b.calcularArea() + c.calcularArea();
//		real areaTrianguloCuestion = triangulo.calcularArea();
//		//Comparo utilizando cadenas porque si los valores son enteros por alguna razon no considera iguales dos numeros 
//		//Update 2: Genera problema de memoria si quiero correr el archivo de datos completo
////		si(aCadena(areaTriangulos,5) ES aCadena(areaTrianguloCuestion,5)) entonces
////			regresa(VERDADERO); 
////		finSi 
//		si(areaTriangulos ES areaTrianguloCuestion) regresa(VERDADERO);
//	finSi
//		
//			regresa(FALSO);
//	
//
//}
funcion logico esVertice(CoordenadaCartesiana punto, Triangulo triangulo){
	si(punto ES triangulo.getP1() O punto ES triangulo.getP2() O punto ES triangulo.getP3()) regresa(VERDADERO);
	regresa(FALSO);
}
//funcion vectorDin(Triangulo) quitarTriangulosSinPuntoInterior(vectorDin(CoordenadaCartesiana) puntos, 
//															  vectorDin(Triangulo) triangulos){
//	vectorDin(Triangulo) triangulosFinal;
//	paraCada(triangulo,triangulos)
//		si(poseePuntoInterior(puntos,triangulo)) entonces
//			agregaEleVDin(triangulosFinal,triangulo);
//		finSi
//	finParaCada
//	
//	regresa(triangulosFinal);
//}
	
//funcion logico poseePuntoInterior(vectorDin(CoordenadaCartesiana) puntos, Triangulo triangulo){
//	paraCada(punto,puntos)
//		si(esInterior(punto,triangulo)) regresa(VERDADERO);
//	finParaCada
//	regresa(FALSO);
//	
//}
procedimiento verificarCantidadPuntos(entero tamanioVector){
	si(tamanioVector <= 2) entonces
		mostrar << "Cantidad de Puntos insuficiente, deben ser más de 2 puntos" << salto;
		terminarPrograma;
	finSi
}
