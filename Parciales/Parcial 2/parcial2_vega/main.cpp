#include <program1.h>
#include "funcionesAuxiliares.h"
/**
*  Enunciado:  Encontrar la SUMA de los elementos de la INTERSECCION entre dos conjuntos SIN sus elementos repetidos
	POR EL INGRESO DE DATOS SE ASUME QUE SOLO SE TRABAJA CON NUMEROS ENTEROS
*/

principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.

//Conjuntos de Entrada
vectorDin(entero) conjuntoA;
vectorDin(entero) conjuntoB;

//Carga de Datos y muestra de los mismos
conjuntoA = cargarDatosVector(conjuntoA);
conjuntoB=cargarDatosVector(conjuntoB);
mostrar << "El vector A tiene " << tamanio(conjuntoA)  << " elementos" << salto;
mostrarVector(conjuntoA);
mostrar << "El vector B tiene " << tamanio(conjuntoB) << " elementos"  << salto;
mostrarVector(conjuntoB);

//Conjuntos sin elementos repetidos
vectorDin(entero) conjuntoAsinDups; 
conjuntoAsinDups = eliminarDuplicados(conjuntoA);
vectorDin(entero) conjuntoBsinDups; 
conjuntoBsinDups = eliminarDuplicados(conjuntoB);

mostrar << "El vector A sin duplicados tiene " << tamanio(conjuntoAsinDups) << " elementos"  << salto;
mostrarVector(conjuntoAsinDups);
mostrar << "El vector B sin duplicados tiene " << tamanio(conjuntoBsinDups) << " elementos"  << salto;
mostrarVector(conjuntoBsinDups);

//Interseccion de conjuntos
vectorDin(entero) conjuntoInterseccion = interseccionDeVectores(conjuntoAsinDups,conjuntoBsinDups);
mostrar << "El vector Interseccion A con B " << tamanio(conjuntoInterseccion) << " elementos"  << salto;
mostrarVector(conjuntoInterseccion);

mostrar << "RESULTADO de la suma de los elementos de la interseccion es: " << sumarElementosVector(conjuntoInterseccion) << salto;

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
