#include <program1.h>
#include "calculos_matriz.h"

procedimiento cargarDatos(real matriz[5][5][4], entero cantidadValores){
	entero i,j,k;
	real dato;
	variarMas1(i,0,5-1) 
		variarMas1(j,0,5-1)
			variarMas1(k,0,4-1)
				//De esta manera solo cargamos datos si no hemos recorrido todo el archivo
				si(cantidadValores NOES 0) entonces
					leer(dato);
					matriz[i][j][k] = dato;
					cantidadValores--; // Como no son exactamente 100 datos
					
				sino
					matriz[i][j][k] = 0; // Solo para rellenar con ceros
				finSi
				
			finVariar
		finVariar
	finVariar
}
	
procedimiento mostrarMatriz(real matriz[5][5][4], entero cantidadValores){
	entero i,j,k;
	variarMas1(i,0,5-1) 
		variarMas1(j,0,5-1)
			variarMas1(k,0,4-1)
				mostrar << matriz[i][j][k] << tabulado; // muestra todo en una linea
			finVariar
		finVariar
	finVariar
}
	
	
funcion real calcularMedia(real matriz[5][5][4], entero cantidadValores){
	entero i,j,k;
	real acumulador = 0, resultado = cantidadValores; // copia de cantidadValores
	variarMas1(i,0,5-1) 
		variarMas1(j,0,5-1)
			variarMas1(k,0,4-1)
				si(cantidadValores NOES 0) entonces
					acumulador += matriz[i][j][k];
					cantidadValores--; // Como no son exactamente 100 datos
				finSi
			finVariar
		finVariar
	finVariar
	resultado = acumulador/resultado;
	regresa(resultado); // Media de todos los elementos
}
	
funcion real calcularDesviacionTipica(real matriz[5][5][4], entero cantidadValores){
	entero i,j,k;
	real media = calcularMedia(matriz,cantidadValores);
	real suma = 0, resultado = cantidadValores; // copia de cantidadValores.
	variarMas1(i,0,5-1) 
		variarMas1(j,0,5-1)
			variarMas1(k,0,4-1)
				si(cantidadValores NOES 0) entonces
					suma += (matriz[i][j][k]-media)*(matriz[i][j][k]-media); 
						// Eleva al cuadrado, a veces es mas facil esto que usar potencia;
					cantidadValores--; // Como no son exactamente 100 datos
				finSi
			finVariar
		finVariar
	finVariar
	resultado = raiz2(suma/resultado); 
	regresa(resultado); // En principio desviación tipica
}
	
	
	
	
	
	
	
	
	
	
	
	
	
