#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	real a,b,c; 
	leerM(a,"Valor A:"); 
	leerM(b,"Valor B:"); 
	leerM(c,"Valor C:"); 
	mostrar << "El menor es: ";
	si(a <= b Y c >= a) entonces 
		mostrar << a ; 
	sinoSi(b >= c) entonces 
		mostrar << c ; 
	sino 
		mostrar << b ; 
	finSi 
	mostrar << salto;

	
	mostrar << "El mayor es: ";
	si(a >= b Y c <= a) entonces 
		mostrar << a ; 
	sinoSi(b >= c) entonces 
		mostrar << b ; 
	sino 
		mostrar << c ; 
	finSi
	mostrar << salto;
	
	
	mostrar << "El del medio es: ";
	si(a >= b Y a <= c O a >= c Y a <= b) entonces 
		mostrar << a ; 
	sinoSi(a >= c Y b >= c O a <= c Y b <= c) entonces 
		mostrar << b ; 
	sino
		mostrar << c ; 
	finSi 
		mostrar << salto;
	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

	



