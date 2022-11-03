#include <program1.h>
#include "funcionesAuxiliares.h"


funcion vectorDin(entero) cargarDatosVector(vectorDin(entero) vec){
	//Primer valor es el tamaño,
	entero tamanio,i,dato;
	leer(tamanio);
	variarMas1(i,0,tamanio-1)
		leer(dato);
	agregaEleVDin(vec,dato);
	finVariar
	regresa(vec);
}
funcion vectorDin(entero) eliminarDuplicados(vectorDin(entero) vec){
	vectorDin(entero) vecSinDups; //Vector para cargar los elementos sin estar duplicados
	
	logico bandera = FALSO;
	paraCada(numero,vec)
		paraCada(dato,vecSinDups)
			si(numero ES dato) bandera = VERDADERO; // Si el numero ya esta en vecSinDups entonces no lo agrega
			// utilizo bandera para saber si esta duplicado o no
		finParaCada
		si(NO bandera) agregaEleVDin(vecSinDups,numero);
		bandera = FALSO;
	finParaCada

	regresa(vecSinDups);
}

procedimiento mostrarVector(vectorDin(entero) vec){
	paraCada(dato,vec)
		mostrar << dato << conAncho(8);
	finParaCada
	mostrar << salto;
}
funcion entero sumarElementosVector(vectorDin(entero) vec){
	entero sumatoria = 0;
	paraCada(dato,vec)
		sumatoria += dato;
	finParaCada
	regresa(sumatoria);
}

funcion vectorDin(entero) interseccionDeVectores(vectorDin(entero) A, vectorDin(entero) B){
	vectorDin(entero) vectorDiferencia; //Vector nuevo para agregar los valores de la diferencia
	entero i,j;
	variarMas1(i,0,tamanio(A)-1)
		variarMas1(j,0,tamanio(B)-1)
			si(A[i] ES B[j]) agregaEleVDin(vectorDiferencia,A[i]); // si el elemento está en ambos conjuntos agrego al nuevo vector de interseccion
		finVariar
	
	finVariar
	regresa(vectorDiferencia);
}
