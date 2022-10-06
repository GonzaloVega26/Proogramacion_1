#include <program1.h>
/**
*  Enunciado:  Se desea conocer la sumatoria de los 1000 primeros múltiplos de 5 que a su vez son números naturales.
*/
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
entero contador=1 ,sumatoria =0;
entero cantMultiplos = 0;
iterar
	salirSi(cantMultiplos ES 1000);
	si(contador % 7 ES 0) entonces
		sumatoria += contador;
	cantMultiplos++;
	finSi
		contador++;
finIterar
	mostrar << cantMultiplos << salto;
	mostrar << sumatoria << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


