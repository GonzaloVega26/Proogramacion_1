#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
real valor,minValor,minValor2; sinSigno cant = 0;
iterar
	leer(valor);
	salirSi(esFinDArch(cin));
	cant++;
	salirSi(valor ES 0);
	si(cant > 2) entonces // mas de dos numeros cargados
		si(valor < minValor) entonces
			minValor2 = minValor;
			minValor = valor;
		sinoSi(valor < minValor2) entonces
			minValor2 = valor;
		finSi
	sinoSi(cant ES 2) entonces // exactamente dos numeros cargados
		minValor2 = minValor;
		si(valor < minValor) entonces
			minValor = valor;
		finSi
	sino // solo un numero cargado
		minValor = valor;
	finSi
	
finIterar  
	si(cant >= 2 ) mostrar << minValor2 << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


