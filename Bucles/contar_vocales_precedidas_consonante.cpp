#include <program1.h>
/**
*    Enunciado: Dado un texto terminado en punto, mostrar la cantidad de vocales precedidas de consonante-
*/
principal                                                                            // Unidad de programa principal
caracter teclaAct                                                                    // Dato (a leer dentro de un bucle)
	,teclaAnt = ' ';                                                                 // Teclazo anterior
entero cantCV = 0;                                                                   // Cantidad de ocurrencias de vocal precedida de consonante
limpiar;                                                                             // Limpia la pantalla.
mostrar << "Ingrese un texto terminado en punto:" << salto;
iterar
	leeTecla(teclaAct);// Lee una tecla
salirSi(teclaAct ES '.');// Sale si es punto
si(esConso(teclaAnt) Y esVocal(teclaAct)) entonces
	cantCV++;
finSi
	teclaAnt = teclaAct;
finIterar
	mostrar << salto << "La cantidad de vocales precedida de consonante es " << cantCV << salto;
pausa;                                                                               // Pausa antes de finalizar. 
finPrincipal                                                                         // Fin de unidad de programa principal
