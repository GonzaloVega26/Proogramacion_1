#include <program1.h>
#include "matrices_calc.h"
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal
	
	limpiar;                                                        // Limpia la pantalla.
real cantidadDatos;
real dato;
real matriz[10][10] = {0};
leer(cantidadDatos);
mostrar << "La cantidad es: "<< cantidadDatos << salto;
entero i,j,contador = 0;

variarMas1(i,0,10-1)
	variarMas1(j,0,10-1)
		si(contador < cantidadDatos) entonces
			leer(dato);
			matriz[i][j] = dato;
			contador++;
		sino
			matriz[i][j] = 0;
		finSi
	finVariar
finVariar
	
	
variarMas1(i,0,10-1)
	variarMas1(j,0,10-1)
		mostrar << conAncho(16) << matriz[i][j] ;
	finVariar
	mostrar << salto;
finVariar
	
mostrar << calcularDesviacionTipica(matriz,cantidadDatos) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
