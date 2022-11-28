#include <program1.h>
#include "CoordenadaCartesiana.h"
#include "Triangulo.h"
#include "FuncionesAuxiliares.h"
/**
*  Enunciado:  
*/

principal                                                       // Unidad de programa principal
	
	limpiar;                                                        // Limpia la pantalla.
mostrar << "EMPIEZA EL PROGRAMA" << salto;
vectorDin(CoordenadaCartesiana) puntos;

cargarPuntos(puntos);

verificarCantidadPuntos(tamanio(puntos));

vectorDin(Triangulo) triangulos;
mostrar << "------GENERANDO LOS TRIANGULOS------" << salto;
generarTriangulos(puntos,triangulos);
vectorDin(Triangulo) triangulosConPuntoInterior;
triangulosConPuntoInterior = quitarTriangulosSinPuntoInterior(puntos,triangulos);
mostrar << "------ELIMINANDO TRIANGULOS SIN PUNTOS INTERIORES------" << salto;



mostrar << "Triangulos totales: " << tamanio(triangulos) << salto;
mostrar << "Triangulos con Punto Interior: " << tamanio(triangulosConPuntoInterior) << salto;
si(tamanio(triangulosConPuntoInterior) NOES 0 )entonces
mostrar << "El perimetro más grande es : " << encontrarTrianguloMayorPerimetro(triangulosConPuntoInterior) << salto;
mostrar << "Pertenece al triangulo con posicion id : " << encontrarPosicionDeTrianguloMayorPerimetro(triangulosConPuntoInterior) << salto;
finSi
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
	
