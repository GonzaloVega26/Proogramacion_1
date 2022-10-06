#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	entero num1,num2,num3;
	leerM(num1, "Ingrese un numero ");
	leerM(num2, "Ingrese otro numero ");
	leerM(num3, "Ingrese otro numero ");
	mostrar << "El mayor es " ;
	si(num1 >= num2 Y num2 >= num3) entonces
		mostrar << num1;
	sinoSi(num2 > num3) entonces
		mostrar << num2;
	sino
		mostrar << num3;
	finSi;
	mostrar << salto;
	
	
	// Terminar esta parte
	mostrar << "Ordenados de menor a mayor" ;
	si(num1 <= num2 Y num1 <= num3) entonces
		mostrar << num1;
	si(num2 < num3) entonces
		mostrar << num2 << num3;
	sino
		mostrar << num3;
	finSi;
	mostrar << salto;
	
	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




