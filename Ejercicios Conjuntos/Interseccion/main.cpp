#include <program1.h>
/**
*  Enunciado:  
*/

funcion entero extraerTamanioDeCadena(cadena c){
	entero i;
	cadena numeroCadena = "";
	variarMas1(i,0,longitud(c)-1)
		si(esDigito(c[i])) entonces
		   numeroCadena += c[i];
		finSi
	finVariar
	//mostrar << numeroCadena << salto;
	regresa(aEntero(numeroCadena));
}
funcion vectorDin(real) cargarConjunto(vectorDin(real) vec){
	cadena nombreVector;
	leeRenglon(nombreVector);
	mostrar << nombreVector << salto;
	entero tamanio = extraerTamanioDeCadena(nombreVector);
	
	real dato;
	entero i;
	variarMas1(i,0,tamanio-1)
		leer(dato);
		agregaEleVDin(vec,dato);
	finVariar
		
	regresa(vec);
}
funcion vectorDin(real) eliminarNumerosDuplicados(vectorDin(real) vec){
	entero i;
	vectorDin(real) vecSinDups; //Vector inicialmente vacio al que le agrego el elemento sino esta duplicado
	logico bandera = FALSO;
	paraCada(numero,vec)
		paraCada(dato,vecSinDups)
			si(numero ES dato) entonces // Si el numero ya esta en vecSinDups entonces no lo agrega
				bandera = VERDADERO; // utilizo bandera para saber si esta duplicado o no
			finSi
		finParaCada
		si(!bandera) agregaEleVDin(vecSinDups,numero);
		bandera = FALSO;
	finParaCada
		
	regresa(vecSinDups);
}

	
procedimiento mostrarVector(vectorDin(real) vec){
	
	paraCada(dato,vec)
		mostrar << dato << conAncho(8);
	finParaCada
		mostrar << salto;
}
funcion real sumarElementosVector(vectorDin(real) vec){
	real sumatoria = 0;
	paraCada(dato,vec)
		sumatoria += dato;
	finParaCada
		
	regresa(sumatoria);
}
funcion vectorDin(real) interseccionDeVectores(vectorDin(real) A, vectorDin(real) B){
	vectorDin(real) vectorDiferencia; //Vector nuevo para agregar los valores de la diferencia
	logico bandera = FALSO; //Booleano para ver si esta repetido y sino lo está lo agrego al vector
	entero i,j;
	variarMas1(i,0,tamanio(A)-1)
		variarMas1(j,0,tamanio(B)-1)
				si(A[i] ES B[j]) entonces // si el elemento está en ambos conjuntos cambio la bandera a verdadero, osea está repetido
					bandera = VERDADERO;
			finSi
		finVariar
		si(bandera) agregaEleVDin(vectorDiferencia,A[i]); // si la bandera quedo en falso despues de toda la iteracion
			//, osea no está repetido agrega el valor al nuevo vector
		bandera = FALSO; // reinicio la bandera
	finVariar
	regresa(vectorDiferencia);
}
principal                                                       // Unidad de programa principal
	
limpiar;                                                        // Limpia la pantalla.
vectorDin(real) conjuntoA;
vectorDin(real) conjuntoB;
vectorDin(real) conjuntoAsinDups;
vectorDin(real) conjuntoBsinDups;
conjuntoA = cargarConjunto(conjuntoA);
mostrarVector(conjuntoA);
mostrar << "CARGA DE A TERMINADA" << salto;
cadena a;
leer(a);
mostrar << a << salto;
conjuntoB = cargarConjunto(conjuntoB);
mostrarVector(conjuntoB);
mostrar << "CARGA DE B TERMINADA" << salto;

conjuntoAsinDups = eliminarNumerosDuplicados(conjuntoA);
conjuntoBsinDups = eliminarNumerosDuplicados(conjuntoB);
mostrar << "sin duplicados A" << salto;
mostrarVector(conjuntoAsinDups);
mostrar << "sin duplicados B" << salto;
mostrarVector(conjuntoBsinDups);

vectorDin(real) C = interseccionDeVectores(conjuntoAsinDups,conjuntoBsinDups);
mostrar << "VECTOR INTERSECCION" << salto;
mostrarVector(C);

mostrar << "RESULTADO" << sumarElementosVector(C) << salto;

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
	
	
