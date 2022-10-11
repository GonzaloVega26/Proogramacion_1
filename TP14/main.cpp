#include <program1.h>
#include "calculos_matriz.h"
/**
*  Enunciado:  Dada una secuencia de hasta 100 valores, cargarla por   filas, columnas y planos en una 
matriz de hasta 5x5x4 FilasxColumnasxPlanos, y calcular la desviación tí­pica de la totalidad de datos cargados
*/
principal                                                       // Unidad de programa principal
	
limpiar;                                                        // Limpia la pantalla.
entero cantidadDatos;
leer(cantidadDatos); // Extrae el primer valor del archivo que indica la cantidad de valores a analizar
real matriz[5][5][4];
cargarDatos(matriz,cantidadDatos);
mostrarMatriz(matriz,cantidadDatos);
mostrar << salto << "La desviacion tipica de la matriz es " << calcularDesviacionTipica(matriz,cantidadDatos) << salto;



mostrar << salto;
finPrincipal                                                    // Fin de unidad de programa principal
	
