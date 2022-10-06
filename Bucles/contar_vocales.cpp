#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
caracter tecla;                                                                      // Dato (a leer)
entero cantVoc = 0;                                                                   // Resultado (a mostrar)                                                                          // Limpia la pantalla.
mostrar << "Ingrese un texto terminado en punto:" << salto;
iterar
	leeTecla(tecla);
	salirSi(tecla ES '.');
	si(esVocal(tecla)) entonces
		cantVoc++;
	finSi
finIterar
mostrar << salto << "La cantidad de vocales es " << cantVoc << salto;

	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




