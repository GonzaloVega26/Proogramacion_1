#include <program1.h>
/**
*  Enunciado:  
*/
funcion entero contarDigitos(entero n);
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	entero a;
	leerM(a,"Valor: ");
	entero cantidad = contarDigitos(a);
	mostrar << "El numero tiene ";
	si(cantidad < 4) entonces
	   mostrar << cantidad << " digitos" << salto;
	sino
		mostrar << " 4 o más digitos";
	finSi
	   
	
	
	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

	
funcion  entero contarDigitos(entero n) {
	//Para numeros negativos
	si(n < 0) entonces
		regresa(contarDigitos(-n));
	finSi
	//Caso base
	si(n < 1) entonces
		regresa(0);
	sino
		regresa(1 + contarDigitos(n / 10));
finSi
}
	


