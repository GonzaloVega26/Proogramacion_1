#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal
	
	limpiar;                                                        // Limpia la pantalla.
caracter tecla;
entero cantA = 0;
cadena texto="";
limpiar;                                                        // Limpia la pantalla.
mostrar << "Ingrese un texto terminado en '.'" << salto;
iterar
	leeTecla(tecla);//Lee un caracter parece , preguntar!
	salirSi(tecla ES '.');
	texto += tecla;
	si(tecla ES 'a' O tecla ES (-61)) entonces
		cantA++;
	finSi
finIterar;
mostrar << salto << "La cantidad de 'a' para \"" << texto << "\" es:" << cantA << salto;

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
	
	
	
	
