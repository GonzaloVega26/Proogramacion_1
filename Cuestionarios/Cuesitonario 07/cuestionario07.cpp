#include <program1.h>
/**
*  Enunciado:  
*/
funcion logico validarTamanio(entero valor){
	si(valor >= 1) regresa(VERDADERO);
	regresa(FALSO);
}
funcion 
	
procedimiento cargarMatriz(entero filas,entero columnas,real matriz[6][6]){
	real valor;
	entero i,j;
	variarMas1(i,0,filas-1)
		variarMas1(j,0,columnas-1)
			leer(valor);
			salirSi(esFinArch(stdin));
			matriz[i][j] = valor;
		finVariar
	finVariar
}
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
entero fil,col;
iterar
	leerM(fil,"Ingrese las filas");
	leerM(col,"Ingrese las columnas");
	salirSi(validarTamanio(fil) Y validarTamanio(col));
finIterar

	
	
real valor, minimo = valorMaximo(real);
entero i,j;
limpiar;
variarMas1(i,0,fil-1)
	variarMas1(j,0,col-1)
		leer(valor);
		salirSi(esFinArch(stdin));
		si(valor < minimo) minimo = valor;
	finVariar
		mostrar << minimo << tabulado << i << salto;
		minimo = valorMaximo(real); 
finVariar
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


