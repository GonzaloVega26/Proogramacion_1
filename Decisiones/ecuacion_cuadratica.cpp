#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	// Encontrar las raices de la ecuacion cuadratica ax² + bx + c =0
	// Solucion matematica (-b+- sqrt(b²-4*ac)) / (2*a);
	// b²-4*ac >= 0 
	// si b²-4*ac = 0 raiz1 = raiz2
	doble a,b,c;
	leerM(a,"Valor de A ");
	leerM(b,"Valor de B ");
	leerM(c,"Valor de C ");
	
	real discriminante = b*b - 4*a*c;
	si(discriminante >= 0) entonces
		si(discriminante == 0) entonces
			mostrar << "Raiz 1  y Raiz 2 son igual a : " << -b/(2*a);
		sino
		mostrar << "Raiz 1 es igual: " << (-b+raiz2(discriminante))/(2*a)  << " y Raiz 2 es igual a : " << (-b-raiz2(discriminante))/(2*a) ;
		finSi;
		
	sino
		mostrar << "La solucion es imaginaria ";
	finSi;
	mostrar << salto;

	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




