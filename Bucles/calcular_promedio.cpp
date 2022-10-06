#include <program1.h>
/**
*  Enunciado:  Dada una secuencia de valores a leer del siguiente archivo de datos (datos.txt), calcular el promedio.

Guarde el archivo datos.txt y ejecute con "programa < datos.txt" y complete la pregunta.

*/
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
real dato, sumatoria=0, contador=0;
iterar
	leer(dato);
	salirSi(esFinArch(stdin));
	salirSi(dato ES 0);
	sumatoria += dato;
	contador++;
finIterar
	si(contador NOES 0) entonces
		mostrar << "El promedio es " << (sumatoria/contador);
	sino
		mostrar << "No se han cargado datos";
	finSi
		mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


