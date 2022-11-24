#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
//Cargando la dimension de la matriz
entero filas,columnas;
filas = cargarTamanioMatriz();
columnas = cargarTamanioMatriz();


pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

funcion entero cargarTamanioMatriz(){
	entero dato;
	leer(dato);
	si(dato > 19) terminarPrograma;
	regresa(dato);
}
procedimiento verificarValorCelda(real dato){
	si(dato > 100 O dato < -100) terminarPrograma;
}
procedimiento cargarDatosMatriz(){
	real dato;
	iterar
		leer(dato);
		salirSi(esFinArch(stdin));
		verificarValorCelda(dato);
		
	finIterar
}
