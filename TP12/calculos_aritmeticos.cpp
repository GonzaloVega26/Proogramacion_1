#include <program1.h>


procedimiento cargarDatoVector(real vector[], entero cantidadValores) {
	entero i;
	real dato = 0.0; 
	variarMas1(i,0,cantidadValores-1)
		leer(dato);
	salirSi(esFinArch(stdin));
	salirSi(dato ES 0);
		vector[i] = dato;
	finVariar
}

procedimiento mostrarVector(real vector[], entero cantidadValores) {
	entero i;
	variarMas1(i,0,cantidadValores-1)
		mostrar << vector[i] << tabulado;
	finVariar
	mostrar << salto;
}

funcion real calcularMedia(real vector[], entero cantidadValores){
	entero i;
	real acumulador = 0;
	variarMas1(i,0,cantidadValores-1)
		acumulador += vector[i];
	finVariar
	regresa((acumulador/cantidadValores));
}

funcion real calcularDesviacionTipica(real vector[], entero cantidadValores){
	entero i;
	real media = calcularMedia(vector,cantidadValores);
	real sumatoria = 0;
	variarMas1(i,0,cantidadValores-1)
		sumatoria += ((vector[i] - media)*(vector[i] - media));
	finVariar
		
	real resultado = raiz2(sumatoria/cantidadValores);
	regresa(resultado);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
