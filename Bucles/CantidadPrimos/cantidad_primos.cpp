#include <program1.h>
/**
*  Enunciado:  
*/

Funcion logico esPrimo(entero x){
	si(x <= 1) regresa(FALSO); //comprobación por las dudas, pero en este caso no deberia pasar nada
	entero i; // variable iteradora
	variarMas1(i,2,x-1) //Esto es un bucle para, que va desde 2 (1 ya sabemos que si divide a x) hasta x-1 porque x si se divide a si mismo
		si(x % i == 0) regresa(FALSO); //Significa que hay otro valor aparte de 1 y x por el que es divisible
	finVariar
		
	regresa(VERDADERO);
}
principal                                                       // Unidad de programa principal

	entero N; // N es el numero hasta el cual queremos contar la cantidad de primos.
	entero contador =0; //Cuenta los primos
	leerM(N,"Ingresar valor"); //Aca se lee el valor
	entero i; //Variable iterativa
	variarMas1(i,2,N) //Esto es un bucle para que varía con paso 1, se empieza en 2 porque 1 no es primo
		si(esPrimo(i)) contador++; 
	finVariar
	mostrar << contador << salto; 
finPrincipal                                                    // Fin de unidad de programa principal


	//Utilizando funciones
	

	
