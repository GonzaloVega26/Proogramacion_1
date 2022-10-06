#include <program1.h>
#include "extraer_numeros.h"
funcion logico esNumero(caracter n){
	segun(n)
		caso '0':
		caso '1':
		caso '2':
		caso '3':
		caso '4':
		caso '5':
		caso '6':
		caso '7':
		caso '8':
		caso '9':
		regresa(VERDADERO);
		casoAsumido: regresa(FALSO);
	finSegun
}
funcion cadena extraerCadenaNumeros(cadena str){
	caracter teclaActual, signo = 'ñ';
	cadena cadenaNumeros = "";
	
	iterar
		leeTecla(teclaActual);
		
		si((teclaActual ES '+' O teclaActual ES '-') Y longitud(cadenaNumeros) ES 0) entonces
			signo = teclaActual;
			cadenaNumeros += signo;
		finSi
		
		si(esNumero(teclaActual)) entonces
			cadenaNumeros += teclaActual;
		finSi
	finIterar
	regresa(cadenaNumeros);
}
	
funcion entero cadenaAEntero(cadena str){
	regresa(aEntero(extraerCadenaNumeros(str)));
}
	
	
