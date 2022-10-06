#include <program1.h>
/**
*  Enunciado:  mostrar primero el mayor y luego el menor
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
//Desde Aca
entero uno,dos,tres;
leerM(uno,"1:");leerM(dos,"2:");leerM(tres,"3:");
si((uno >= dos) Y (uno >= tres)) entonces
	mostrar << uno << salto;
	si(dos >= tres) entonces
		mostrar << tres << salto;
	sino
		mostrar << dos << salto;
	finSi
sinoSi(uno >= tres) entonces // uno <= dos
	mostrar << dos << salto;
	mostrar << tres << salto;
sinoSi(dos <= tres) entonces // uno <= tres o uno <= dos  
		mostrar << tres << salto;
	si(uno <= dos) entonces
		mostrar << uno << salto;
	sino
		mostrar << dos << salto; 
	finSi
sino
	mostrar << dos << salto;
	mostrar << uno << salto;
finSi

//Hasta ACA

	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




