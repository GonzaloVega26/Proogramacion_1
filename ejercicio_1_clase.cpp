#include <program1.h>
/**
*  Enunciado:  
*/

	
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.

	real uno,dos,tres;
	leerM(uno, "Primer Valor: ");
	leerM(dos, "Segundo Valor: ");
	leerM(tres, "Tercer Valor: ");

	
	mostrar << "El menor es :  ";
	si(uno < dos Y uno < tres) entonces
			mostrar << uno;
		sinoSi(dos < tres) entonces
			mostrar << dos;
		
		sino
			mostrar << tres;
	finSi;
	
	mostrar << salto;
	mostrar << "Los dos mas chicos son: ";
	si(uno > dos Y uno > tres) entonces
		mostrar << dos << " y " << tres;
	sinoSi(dos < tres) entonces
		mostrar << uno << " y " << dos;
	sino
		mostrar << uno << " y " << tres;
	finSi;
	
	mostrar << salto;
	pausa;                                                      // Pausa antes de finalizar. 
	
finPrincipal                                                    // Fin de unidad de programa principal

