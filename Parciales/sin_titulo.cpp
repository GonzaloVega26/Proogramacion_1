#include <program1.h>
/**
*  Enunciado:  El programa muestra los dos valores menores, primero muestra el menor de los 3 y luego el segundo menor
*/

principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
real a,b,c;
limpiar;
leerM(a,"Valor 1:");
leerM(b,"Valor 2:");
leerM(c,"Valor 3:");

si(b >= a Y c >= a) entonces // Verifica si a es el menor de los tres
	mostrar << a << ", ";
	// En caso de que lo sea:
	si(b <= c) entonces // Verifica si b es el segundo menor
		mostrar << b;
	sino // Sino es C el segundo menor
		mostrar << c;
	finSi
//Muestra los dos menores
// Si b no es mayor o igual a a o c no es mayor o igual a a entonces pasa a la siguiente condicion
		
sinoSi(c >= b) entonces //Verifica que b sea menor (se busca el menor)
	mostrar << b << ", ";
	si(a >= c) entonces
		mostrar << c; 
	sino
		mostrar << a;
	finSi
//Sino se cumplieron las anteriores significa que b no es mayor o igual a a o c no es mayor o igual a a
// Y que b es mayor que C
//Osea que C debe ser el menor de los 3
sino
	mostrar << c << ", ";
	si(b >= a) entonces
		mostrar << a;
	sino
		mostrar << b;
	finSi
finSi
	mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




