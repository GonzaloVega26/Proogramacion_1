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
	paraCada(valor,vecA)
		si(NO busquedaBinario(vecB,valor)) agregaEleVDin(vecB,valor);
	finParaCada
	regresa(vecB);
}
principal                                                       // Unidad de programa principal
		 
limpiar;                                                        // Limpia la pantalla.

entero tamVec1 = tamanioVector();
vectorDin(entero) vec1;
vec1 = cargarDatos(vec1,tamVec1);
mostrar << "Despues de cargado el Vec 1 tiene un tam " << tamanio(vec1) << salto;
entero tamVec2 = tamanioVector();
vectorDin(entero) vec2;
vec2 = cargarDatos(vec2,tamVec2);
mostrar << "Despues de cargado el Vec 2 tiene un tam " << tamanio(vec2) << salto;
clasifica(vec1);
clasifica(vec2); 

vectorDin(entero) vectorUnion;
vectorUnion = unionVectores(vec1,vectorUnion);
vectorUnion = unionVectores(vec2,vectorUnion);
entero tamUnion = tamanio(vectorUnion);
mostrar << "El tamanio de la union es " << tamUnion << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


