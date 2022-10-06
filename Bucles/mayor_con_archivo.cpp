#include <program1.h>
/**
*  Enunciado:  Dada una secuencia de valores a leer del siguiente archivo de datos, calcular el mayor de dichos valores.
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
real numero, mayor=valorMinimo(real);

iterar
	leer(numero);
	salirSi(esFinArch(stdin));
	si(numero > mayor) entonces
		mayor = numero;
	finSi
finIterar
mostrar << "El mayor numero es " <<  mayor << salto;
	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




