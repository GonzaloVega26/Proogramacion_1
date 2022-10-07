#include <program1.h>
#include "calculos.h"
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal
	
	limpiar;                                                        // Limpia la pantalla.
entero cantidadValores;
leer(cantidadValores);
real vector[cantidadValores];
cargarDatoVector(vector,cantidadValores);
mostrarVector(vector,cantidadValores);

mostrar << calcularDesviacionTipica(vector,cantidadValores) << salto;
pausa;                                                          // Pausa antes de finalizar. 

mostrar << salto;
finPrincipal                                                    // Fin de unidad de programa principal
	
	
	
