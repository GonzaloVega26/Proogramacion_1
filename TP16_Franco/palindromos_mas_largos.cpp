#include <program1.h>
/**
*  Enunciado:  
*/

procedimiento cargarDatos(vectorDin(cadena) porRef listaPalabras){
	cadena palabra;
	iterar
		leer(palabra);
		salirSi(esFinArch(stdin));
		agregaEleVDin(listaPalabras, palabra);
	finIterar
}
procedimiento mostrarDatos(vectorDin(cadena) listaPalabras){
	paraCada(palabra,listaPalabras)
		mostrar << palabra << conAncho(8);
	finParaCada
}
	
funcion logico esPalindromo(cadena palabra){
	entero i;
	variarMas1(i,0,longitud(palabra)-1)
		si(palabra[i] NOES palabra[longitud(palabra)-1-i]) regresa(FALSO);
	finVariar
	regresa(VERDADERO);
}
procedimiento listaPalindromosMasLargos(vectorDin(cadena) listaPalabras){
	cadena palindromoLargo ="";
	vectorDin(cadena) listaPalindromos;
	
	paraCada(palabra,listaPalabras)
		si(esPalindromo(palabra)) entonces
			si(longitud(palabra) > longitud(palindromoLargo)) entonces
				palindromoLargo = palabra;
				limpiaVDin(listaPalindromos);
				agregaEleVDin(listaPalindromos,palindromoLargo);
			sinoSi(longitud(palabra) ES longitud(palindromoLargo)) entonces
				agregaEleVDin(listaPalindromos,palindromoLargo);
			finSi
		finSi
	finParaCada
				
	paraCada(palindromo,listaPalindromos)
		mostrar << palindromo << salto;
	finParaCada
		mostrar << salto;
}
funcion cadena palindromoMasLargo(vectorDin(cadena) listaPalabras){
	cadena palindromoLargo ="";
	paraCada(palabra,listaPalabras)
		si(esPalindromo(palabra)) entonces
			si(longitud(palabra) > longitud(palindromoLargo)) entonces
				palindromoLargo = palabra;
			finSi
		finSi
	finParaCada
				
	regresa(palindromoLargo);
}
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.

vectorDin(cadena) listaPalabras;
cargarDatos(listaPalabras);
listaPalindromosMasLargos(listaPalabras);
cadena palindromoLargo = palindromoMasLargo(listaPalabras);
si(palindromoLargo ES "") mostrar << "No hay Palindromos" << salto;
si(palindromoLargo NOES "") mostrar << "El palindromo más largo es : " << palindromoLargo << salto;
	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




