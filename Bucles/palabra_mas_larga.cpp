#include <program1.h>
/**
*    Enunciado: Dado un texto terminado en punto, mostrar la palabra m�s larga.
*/
principal                                                                            // Unidad de programa principal
	caracter tecla                                                                       // Dato (a leer)
	,teclaAnt = ' ';                                                             // Tecla anterior
cadena pal                                                                           // palabra actual
	,palMLarga;                                                                    // palabra más larga
entero lPal                                                                          // longitud de la palabra actual
	,lPalMLarga = 0;                                                               // longitud de la palabra más larga
logico esPlural;
limpiar;                                                                             // Limpia la pantalla.
mostrar << "Ingrese un texto terminado en punto:" << salto;
iterar
	leeTecla(tecla);                                                                 // Se lee una tecla
si(esComPal(teclaAnt,tecla)) entonces                                            // Si empieza una palabra
	pal = tecla;                                                                 // empieza con la tecla actual
lPal = 1;                                                                    // y es un solo caracter hasta ahora
sinoSi(NO esSigno(tecla)) entonces                                           // está dentro de la palabra
	pal += tecla;
lPal++;
sinoSi(esFinPal(teclaAnt,tecla)) entonces                                    // Es un final de palabra
	si(lPal > lPalMLarga) entonces                                               // Esta es la palabra más larga
	lPalMLarga = lPal;                                                       // y guardamos su longitud
palMLarga = pal;                                                         // y la palabra recién terminada
esPlural = FALSO;
sinoSi(lPal ES lPalMLarga) entonces                                      // sino, si es tan larga como la más larga
	palMLarga += "," + pal;                                                  // se acumula en el resultado a mostrar
esPlural = VERDADERO;
finSi
	finSi
	salirSi(tecla ES '.');                                                           // Sale si es punto
teclaAnt = tecla;                                                                // la tecla actual es la anterior de la siguiente
finIterar
	si(lPalMLarga > 0) entonces
	si(esPlural) entonces
	mostrar << salto << "Las palabras m�s largas son: \"" << palMLarga << "\""<< salto;
sino
	mostrar << salto << "La palabra m�s larga es: \"" << palMLarga << "\""<< salto;
finSi
	finSi
	pausa;                                                                               // Pausa antes de finalizar. 
finPrincipal                                                                         // Fin de unidad de programa principal
