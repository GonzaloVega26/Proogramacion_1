#include <program1.h>
/**
*  Enunciado:  
*/

funcion entero tamanioVector(){
	cadena valor;
	leeRenglon(valor);
	si(valor ES "") leeRenglon(valor);
	mostrar << "Carga de Valores de " << valor << salto;
	leeRenglon(valor);
	entero i;
	cadena tamanioVec = "";
	variarMas1(i,0,longitud(valor)-1)
		si(esDigito(valor[i])) tamanioVec += valor[i]; 
	finVariar
		mostrar << tamanioVec << salto;
		entero tamanio ;
	tamanio = aEntero(tamanioVec);
	
	regresa(tamanio);
}
	
procedimiento mostrarVector(vectorDin(entero) vec){
	//entero valor;
	paraCada(valor,vec)
		mostrar << valor << tabulado;
	finParaCada
	mostrar << salto;
}
funcion vectorDin(entero) cargarDatos(vectorDin(entero) vec, entero tamanioVec){
	entero valor,i;
	variarMas1(i,1,tamanioVec)
		leer(valor);
		insertaEleVDin(vec,valor)
	finVariar
	regresa(vec);
}

funcion vectorDin(entero) unionVectores(vectorDin(entero) vecA, vectorDin(entero) vecB){
	logico estaRepetido = FALSO;
	paraCada(valor,vecA)
		paraCada(valor2,vecB)
			si(valor ES valor2) estaRepetido = VERDADERO;
			salirSi(estaRepetido);
		finParaCada
			si(NO estaRepetido) agregaEleVDin(vecB,valor);
			estaRepetido = FALSO;
	finParaCada
	regresa(vecB);
}
principal                                                       // Unidad de programa principal
		 
limpiar;                                                        // Limpia la pantalla.

entero tamVec1 = tamanioVector();
mostrar << "El tamanio del vector 1 es " << tamVec1 << salto;
vectorDin(entero) vec1;
vec1 = cargarDatos(vec1,tamVec1);
mostrar << "Despues de cargado el Vec 1 tiene un tam " << tamanio(vec1) << salto;
entero tamVec2 = tamanioVector();
mostrar << "El tamanio del vector 2 es " << tamVec2 << salto;
vectorDin(entero) vec2;
vec2 = cargarDatos(vec2,tamVec2);
mostrar << "Despues de cargado el Vec 2 tiene un tam " << tamanio(vec2) << salto;
clasifica(vec1);
clasifica(vec2); 

vectorDin(entero) vectorUnion;
vectorUnion = unionVectores(vec1,vectorUnion);
mostrar << "El tamanio de la primera union es " << tamanio(vectorUnion) << salto;
vectorUnion = unionVectores(vec2,vectorUnion);
mostrar << "El tamanio de la union es " << tamanio(vectorUnion) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


