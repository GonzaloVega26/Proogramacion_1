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
	cadena cadenaNumeros = "";
	
	entero indice;
	variarMas1(indice,0,longitud(str)-1)
		caracter actual = str[indice];
		si((actual ES '+' O actual ES '-')  Y longitud(cadenaNumeros) ES 0) cadenaNumeros += actual;
		si(esNumero(actual)) entonces
			cadenaNumeros += actual;
			si(longitud(cadenaNumeros) ES 5) sale;
		finSi;
	finVariar
	mostrar << cadenaNumeros << salto;
	regresa(cadenaNumeros);
}
	
funcion entero cadenaAEntero(cadena str){
	regresa(aEntero(extraerCadenaNumeros(str)));
}
	
	
funcion cadena extraerCadenaNumerosReal(cadena str){
	cadena cadenaNumeros = "";
	logico bandera = FALSO;
	
	entero indice;
	variarMas1(indice,0,longitud(str)-1)
		caracter actual = str[indice];
	si((actual ES '+' O actual ES '-')  Y longitud(cadenaNumeros) ES 0) cadenaNumeros += actual;
	si(bandera ES FALSO Y actual ES '.') entonces 
		cadenaNumeros += actual;
		bandera = VERDADERO;
	finSi
	si(esNumero(actual)) entonces
		cadenaNumeros += actual;
	finSi;
	finVariar
		mostrar << cadenaNumeros << salto;
	regresa(cadenaNumeros);
}
	
	funcion entero cadenaAReal(cadena str){
		regresa(aEntero(extraerCadenaNumerosReal(str)));
	}
	
