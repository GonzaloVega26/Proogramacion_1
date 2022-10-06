#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	entero num1,num2;
	leerM(num1, "Ingrese un numero ");
	leerM(num2, "Ingrese otro numero ");
	si(num1 > 0 Y num2 > 0) entonces
		si(num1 > num2) entonces
			mostrar << num1 << "/" << num2 << " = " << num1 / num2;
		sino
			mostrar << num2 << "/" << num1 << " = " << num2 / num1;
		finSi;
	sino
		mostrar << "La division no puede hacerse, alguno de los dos es cero";
	finSi;   
	mostrar	<< salto;

	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




