#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	entero uno, dos, tres;
	leerM(uno, "1: ");leerM(dos, "2: ");leerM(tres, "3: ");
	
	si((uno <= dos) Y (uno <= tres)) entonces
		mostrar << uno << salto;
		si(dos <= tres) entonces 
			mostrar << dos << salto;
		sino
			mostrar << tres << salto;
		finSi
	sinoSi( dos <= tres) entonces
		mostrar << dos << salto;
		si(uno <= tres) entonces
			mostrar << uno << salto;
		sino
			mostrar << tres << salto;
		finSi;
	sino
		mostrar << tres << salto;
		si (uno <= dos ) entonces
			mostrar << uno << salto;
		sino
			mostrar << dos << salto;
		finSi
	finSi

	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




