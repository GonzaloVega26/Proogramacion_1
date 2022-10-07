#include <program1.h>
#include "extraer_numeros.h"
/**
*  Enunciado:Se intenta elaborar un conjunto de subprogramas de tratamiento de texto.
En esta ocasión queremos un proyecto ejemplo que incluya un subprograma que implemente el 
diagrama Conway para leer tecla a tecla un valor entero libre de errores, ignorando los 
teclazos que no sigan la regla. Verlo en Secuencia - Tipos de Datos - Expresiones (página 11).Entero
Se provee una sustitución de la entrada estÃ¡ndar que tome los datos 
de teclazos.txt y lo guarde en una variable entera pasada por referencia y la muestre.  
*/
principal                                                       // Unidad de programa principal
	mostrar << "EJERCICIO ENTEROS" << salto;
	limpiar;                                                        // Limpia la pantalla.
cadena teclazos="";
//
//leerM(teclazos,"Inserte el menasje \n");
//
//si(longitud(teclazos) NOES 0) entonces
//	mostrar << "El numero es " << cadenaAEntero(teclazos) << salto;
//sino
//	mostrar << "No se ingreso ninguna cadena" << salto;
//finSi
//	
mostrar << "\n \n \n \n \n \n" << salto;

mostrar << "Ejecicio DE MANTISA" << salto;

teclazos="";


leerM(teclazos,"Inserte el menasje \n");

si(longitud(teclazos) NOES 0) entonces
	mostrar << "El numero es " << cadenaAReal(teclazos) << salto;
sino
	mostrar << "No se ingreso ninguna cadena" << salto;
finSi
	
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
	
	
