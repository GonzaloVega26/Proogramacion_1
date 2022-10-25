#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
entero dato;
vectorDin(entero) lista;
iterar
	leer(dato);
	salirSi(esFinArch(stdin));
	agregaEleVDin(lista,dato);
finIterar

entero suma=0,menorSumaPar=-1;

//Con For Each
paraCada(valor,lista)
	mostrar << valor << conAncho(8);
finParaCada
//Con For normal
entero i;

variar(i,0,tamanio(lista)-1,1)
	mostrar << lista[i] << tabulado;
finVariar
mostrar << salto;
variarMas1(i,0,tamanio(lista))
	si(lista[i] % 2 == 0 Y lista[i+1] % 2 == 0) entonces
		suma = lista[i] + lista[i+1];
	finSi
	si(suma < menorSumaPar) menorSumaPar = suma;
finVariar
	
	si(menorSumaPar ES -1) mostrar << "No hay numeros pares consecutivos" << salto;
	si(menorSumaPar NOES -1) mostrar << "La menor suma par es: "<< menorSumaPar << salto;
	
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


