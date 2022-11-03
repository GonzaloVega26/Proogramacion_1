#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	real uno,dos, tres, cuatro;
	leerM(uno,"Valor 1 ");
	leerM(dos,"Valor 2 ");
	leerM(tres, "Valor 3 ");
	leerM(cuatro,"Valor 4 ");
	
	si( uno <= dos Y uno <= tres Y uno <= cuatro) entonces
		si(dos <= tres Y dos <= cuatro) entonces
			mostrar << dos << ", ";
			si (tres <= cuatro) entonces 
				mostrar << tres << ", " << cuatro;
			sino
				mostrar << cuatro << ", " << tres;
			finSi
			mostrar << ", " << uno << salto;
		sinoSi(tres <= cuatro) entonces
			mostrar << tres << ", ";
			si( dos <= cuatro) entonces 
				mostrar << dos << ", " << cuatro;
			sino
				mostrar << cuatro << ", " << dos;
			finSi;
			mostrar << ", " << uno << salto;
		sino
			mostrar << cuatro << ", " ;
			si (dos <= tres) entonces
				mostrar << dos << ", " << tres;
			sino
				mostrar << tres << ", " << dos;
			finSi
			mostrar << ", " << uno << salto;
		finSi;
		
	sinoSi( dos <= tres Y dos <= cuatro) entonces 
		si( uno <= tres Y uno <= cuatro) entonces
			mostrar << uno << ", ";
			si(tres <= cuatro) entonces
				mostrar << tres << ", " << cuatro;
			sino
				mostrar << cuatro << ", " << tres;
			finSi
			mostrar << ", " << dos << salto;
			sinoSi(tres <= cuatro) entonces
				mostrar << tres << ", ";
				si( uno <= cuatro) entonces
					mostrar << uno << ", " << cuatro;
				sino
					mostrar << cuatro << ", " << uno;
				finSi;
				mostrar << ", " << dos << salto;
			sino
				mostrar << cuatro << ", ";
				si( uno <= tres) entonces
					mostrar << uno << ", " << tres;
				sino
					mostrar << tres << ", " << uno;
				finSi
				mostrar << ", " << dos << salto;
			finSi
		sinoSi(tres <= cuatro) entonces
			si(dos <= uno Y dos <= cuatro) entonces
				mostrar << dos << ", ";
				si(uno <= cuatro) entonces
					mostrar << uno << ", " <<  cuatro;
				sino
					mostrar << cuatro << ", " << uno;
				finSi
				mostrar << ", " << tres << salto;
			sinoSi(uno <= cuatro) entonces
				mostrar << uno << ", ";
				si( dos <= cuatro) entonces
					mostrar << dos << "," << cuatro;
				sino 
					mostrar << cuatro << ", " << dos;
				finSi
					
				mostrar << ", " << tres << salto;
				sino
					mostrar << cuatro << "," ;
				si(dos<=uno) entonces
					mostrar << dos << ", " << uno;
				sino 
					mostrar << uno << "," << dos;
				finSi
					mostrar << ", " << tres << salto;
				finSi
				sino
				si(dos <= uno Y dos <= tres) entonces
					mostrar << dos << ", ";
				si(uno <= tres) entonces
					mostrar << uno << ", " << tres;
				sino
					mostrar << tres << ", " << uno;
				finSi;
				mostrar << ", " << cuatro << salto;
				sinoSi( uno <= tres) entonces 
					mostrar << uno << ", ";
				si(dos <= tres) entonces
					mostrar << dos << ", " << tres;
				sino
					mostrar << tres << ", " << dos;
				finSi
				mostrar << ", " << cuatro << salto;
				sino
					mostrar << tres << ", ";
					si(dos <= uno) entonces
						mostrar << dos << ", " << uno;
					sino
						mostrar << uno << ", " << dos;
					finSi
					mostrar << ", " << cuatro << salto;
				finSi
			finSi

	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




