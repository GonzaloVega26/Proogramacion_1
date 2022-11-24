#include <program1.h>
#include "Ascensor.h"
/**
*  Enunciado:  
*/
entero cantidadPisos, cantidadAscensores;
funcion logico esMenorA2(entero);


funcion logico esMenorA2(entero x){
	si(x < 2) regresa(VERDADERO);
	regresa(FALSO);
}
	
	
	// Comprobaciones de llamadas de ascensores
	
	
	//Origen:  -1 <= origen < cantidadPisos 
funcion logico comprobarOrigen(entero origen){
	si( (-1 <= origen) && (origen < cantidadPisos)) regresa(VERDADERO);
	regresa(FALSO);
}
//Destino:  0 <= destino < cantidadPisos 
funcion logico comprobarDestino(entero destino){
	si( (0 <= destino) && (destino < cantidadPisos)) regresa(VERDADERO);
	regresa(FALSO);
}
// destino debe ser distinto a origen.		
funcion logico comprobarDestinoOrigen(entero destino, entero origen){
	si(destino NOES origen) regresa(VERDADERO);
	regresa(FALSO);
}	
				
funcion entero distanciaAlPiso(Ascensor ascensor, entero origen){
	entero distancia =  fabs(ascensor.getPisoActual()-origen); // Calcula la distancia en valor absoluto
	regresa(distancia);
}	
	
funcion Ascensor compararPisosRecorridos(Ascensor asc1, Ascensor asc2){
	//Se manda al que tiene menor cantidad de pisos recorridos
	si(asc1.getPisosRecorridos() > asc2.getPisosRecorridos()) regresa(asc2);
	si(asc1.getPisosRecorridos() < asc2.getPisosRecorridos()) regresa(asc1);
	//Sino se cumplio ninguna de las dos significa que son iguales
	si(asc1.getId() < asc2.getId()) regresa(asc1);
	regresa(asc2);
}
	
procedimiento mandarAscensor(vectorDin(Ascensor) porRef listaAscensores, entero origen,entero destino){
	//Primero medimos la distancia hacia el origen de la llamada del ascensor de todos los ascensores
	entero menorDistancia = cantidadPisos; //Valor Basura: la distancia como maximo es ir desde el 0 hasta ultimo piso  
	Ascensor ascensorCercano = listaAscensores[0];
	paraCada(ascensor, listaAscensores)
		entero distancia = distanciaAlPiso(ascensor, origen);
	
	si(distancia < menorDistancia) entonces
		menorDistancia = distancia;
	ascensorCercano = ascensor; // Obtengo el ascensor mas cercano
	sinoSi(distancia ES menorDistancia) entonces //Si son iguales las distancia entonces hago la comparacion por recorrido y id
		ascensorCercano = compararPisosRecorridos(ascensorCercano,ascensor); //Comparo el ascensorCercano con el nuevo ascensor
	finSi
		finParaCada
		
		//Terminado elbucle ya tenemos al mejor ascensor posible 
		entero distanciaTotal = distanciaAlPiso(listaAscensores[ascensorCercano.getId()-1], origen);
	listaAscensores[ascensorCercano.getId()-1].setPisoActual(destino);//Cambio la posicion del ascensor
	listaAscensores[ascensorCercano.getId()-1].setPisosRecorridos(
		listaAscensores[ascensorCercano.getId()-1].getPisosRecorridos()+fabs(origen-destino) + 
		distanciaTotal); // Le sumo la cantidad de pisos recorridos
}

funcion entero mostrarIdAscensorConMasPisosRecorridos(vectorDin(Ascensor) listaAscensores){
	entero id = 1; // lo igualo al primero porque si
	entero maximo = 0;
	paraCada(ascensor,listaAscensores)
		si(ascensor.getPisosRecorridos() > maximo) entonces
			maximo = ascensor.getPisosRecorridos();
			id = ascensor.getId();
		finSi
		mostrar << salto << "El ascesor :" << ascensor.getId() << tabulado << " hizo " << ascensor.getPisosRecorridos() << salto;
	finParaCada
			
	regresa(id);
}
principal                                                       // Unidad de programa principal

limpiar;                                                        // Limpia la pantalla.
leerM(cantidadPisos,"Ingresar la cantidad de Pisos ");
mostrar << salto;
leerM(cantidadAscensores,"Ingresar la cantidad de Ascensores ");
mostrar << salto;
si(esMenorA2(cantidadPisos) O esMenorA2(cantidadAscensores)) terminarPrograma; // comprobamos que no sea menor a 2 sino fin del programa

vectorDin(Ascensor) listaAscensores; 
//Creacion de ascensores
entero i;
variarMas1(i,1,cantidadAscensores) // Los id empiezan desde 1 hasta cantidadAscensores
	Ascensor asc(i); // Solo damos el id porque todos arrancan en planta baja osea piso = 0
	agregaEleVDin(listaAscensores,asc);
finVariar
	
	
//Leemos las llamadas
	entero llamadaOrigen, llamadaDestino;
iterar
	leer(llamadaOrigen);
	salirSi(llamadaOrigen < 0); // Sale si el origen es negativo
	salirSi(esFinArch(stdin)); // Sale si no hay mas llamadas
	leer(llamadaDestino);
	si(comprobarOrigen(llamadaOrigen)
	   Y comprobarDestino(llamadaDestino)
	   Y comprobarDestinoOrigen(llamadaDestino,llamadaOrigen) )
		mandarAscensor(listaAscensores,llamadaOrigen,llamadaDestino);
finIterar
	entero id = mostrarIdAscensorConMasPisosRecorridos(listaAscensores);
Ascensor asc = listaAscensores[id-1];
	mostrar << "El ascensor que mas recorrio es: "<< salto;
	asc.mostrarAscensor() ;
	
	mostrar << salto;
	Ascensor::prueba(asc);
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

	
