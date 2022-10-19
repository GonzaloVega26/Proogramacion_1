#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
real valor;
vectorDin(real) vectorDin;
listaDe(real) listaDin;

iterar
	leer(valor);
	salirSi(esFinArch(stdin));
	agregaEleVDin(vectorDin,valor);
	insertaLista(listaDin,valor);
finIterar
	real elemento;
paraCada(elemento, vectorDin)
	mostrar << elemento << conAncho(8);
finParaCada
	clasifica(listaDin);
	clasifica(vectorDin);
	mostrar << "ORDENADOS" << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	mostrar << salto;
	
	paraCada(elemento, vectorDin)
		mostrar << elemento << conAncho(8);
	finParaCada
		
	mostrar << salto << salto << vectorDin[0] << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


