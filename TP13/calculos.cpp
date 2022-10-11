#include <program1.h>

funcion real calcularMedia(real matriz[10][10], entero cantidadValores){
	entero i,j;
	real acumulador = 0;
	entero contador = 0;
	variarMas1(i,0,10-1)
		variarMas1(j,0,10-1)  //Matriz es si o si de 10x10
			acumulador += matriz[i][j];
			contador++;
			mostrar << contador << tabulado <<acumulador << salto;
		finVariar
			
	finVariar
			
	mostrar << (acumulador/cantidadValores) << salto;
	regresa((acumulador/cantidadValores));
}
	
	funcion real calcularDesviacionTipica(real matriz[10][10], entero cantidadValores){
		entero i,j;
		real media = calcularMedia(matriz,cantidadValores);
		real sumatoria = 0;
		
		variarMas1(i,0,10-1)
			variarMas1(j,0,10-1)  //Matriz es si o si de 10x10
				si(matriz[i][j] NOES 0)	sumatoria += ((matriz[i][j] - media)*(matriz[i][j] - media));
				//Saco los valores que son cero porque son los ultimos de la matriz, como son en verdad 95 datos, los ultimos ceros afectan a la desviación
			finVariar
		finVariar
			real resultado = raiz2(sumatoria/100);
		regresa(resultado);
	}
