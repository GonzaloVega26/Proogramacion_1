#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
cadena palabra, palabraLarga="";
entero consonantes=0,i, contador=0;
iterar
	leer(palabra);
	salirSi(esFinArch(stdin));
	variarMas1(i,0,longitud(palabra));
		si(esConso(palabra[i])) entonces
		   contador++;
		finSi
	finVariar
		si(contador > consonantes) entonces
			consonantes = contador;
			palabraLarga = palabra;
		finSi
		contador = 0;
finIterar
mostrar << palabraLarga << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


