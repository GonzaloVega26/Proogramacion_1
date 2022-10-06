#include <program1.h>
/**
*  Enunciado:  Dado 3 valores mostrarlos de manera decreciente solamente los impares
*/
Procedimiento mostrarImpar(entero n);
Procedimiento prueba(entero a, entero b, entero c);
Funcion entero mayorDeDos(entero a, entero b);
Funcion entero mayorDeTres(entero a, entero b, entero c);
principal                                                       // Unidad de programa principal
	limpiar;
	
	entero a,b,c;
	leerM(a,"Valor A ");
	leerM(b,"Valor B ");
	leerM(c,"Valor C ");
	
	prueba(a,b,c);
	
	pausa;														// Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

Procedimiento mostrarImpar(entero n){
	si(!esMult(n,2)) entonces
		mostrar << n << salto;
	sino
		mostrar << "";
	finSi
}
	
Procedimiento prueba(entero a, entero b, entero c){
	entero mayor = mayorDeTres(a,b,c);
	si(mayor == a) entonces
		mostrarImpar(a);
		si(b >= c) entonces
			mostrarImpar(b);
		sino
			mostrarImpar(c);
		finSi;
	finSi
	
}

Funcion entero mayorDeDos(entero a, entero b){
	si(a >= b) entonces
		regresa(a);
	sino
		regresa(b);
	finSi
}

Funcion entero mayorDeTres(entero a, entero b, entero c){
	regresa(mayorDeDos(a,mayorDeDos(b,c)));
}
