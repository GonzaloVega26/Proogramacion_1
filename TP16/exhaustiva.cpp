#include <program1.h>
/**
*  Enunciado:  
*/



funcion matrizDin2D(real) cargarValores(matrizDin2D(real),entero,entero);
procedimiento mostrarMatriz(matrizDin2D(real),entero,entero);
funcion cadena busquedaExhaustiva(matrizDin2D(real),entero,entero,real);
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
//Tamaño de la matriz
entero filas, columnas;
real valor;
leerM(filas, "Filas ");
leerM(columnas, "Columnas ");
leerM(valor, "Valor a buscar ");

mostrar << "Filas :" << filas << salto;
mostrar << "Columnas :" << columnas << salto;
mostrar << "Valor :" << valor << salto;
//Declaracion de la matriz
matrizDin2DFC(real,filas,columnas,m);

//Asginando los valores con funcion
m = cargarValores(m,filas,columnas);
//Mostrnado valores con procedimiento
mostrarMatriz(m,filas,columnas);
cadena posiciones = busquedaExhaustiva(m,filas,columnas,valor);
mostrar << posiciones << salto;

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
funcion matrizDin2D(real) cargarValores(matrizDin2D(real) m,entero filas,entero columnas){
	entero i,j;
	real valor;
	variarMas1(i,0,filas-1)
		variarMas1(j,0,columnas-1)
			mostrar << "Valor["<< i << "," << j << "]= ";
			leer(valor);
			m[i][j] = valor;
			mostrar << m[i][j] << tabulado;
		finVariar
			mostrar << salto;
	finVariar
			regresa(m);
}
	
procedimiento mostrarMatriz(matrizDin2D(real) m,entero filas,entero columnas){
	entero i,j;
	
	variarMas1(i,0,filas-1)
		variarMas1(j,0,columnas-1)
			mostrar << m[i][j] << tabulado;
		finVariar
		mostrar << salto;
	finVariar
}
	funcion cadena busquedaExhaustiva(matrizDin2D(real) m,entero filas,entero columnas, real valor){
		entero i,j;
		cadena posiciones = "";
		variarMas1(i,0,filas-1)
			variarMas1(j,0,columnas-1)
				si(valor ES m[i][j]) posiciones += aCadena(i) + aCadena(j);
			finVariar
		finVariar
				
		si(longitud(posiciones) ES 0) regresa("0");
		regresa(posiciones);
	}

