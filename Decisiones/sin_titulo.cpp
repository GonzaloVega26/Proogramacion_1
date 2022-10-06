#include <program1.h>
/**
*  Enunciado:  
*/
funcion entero cantDigitos(entero n);
funcion entero sumaOResta(entero x);
principal // Unidad de programa principal
	
	
	entero a,b,c,d; 
leerM(a,"Valor:"); 
leerM(b,"Valor:"); 
leerM(c,"Valor:"); 
leerM(d,"Valor:");
mostrar << (sumaOResta(a) + sumaOResta(b) + sumaOResta(c) + sumaOResta(d))*(-1) << salto;
finPrincipal // Fin de unidad de programa principal.

funcion entero cantDigitos(entero n) {
	entero resul; 
	si(n > 9) entonces 
		resul = 1 + cantDigitos(n / 10); 
	sinoSi(n < 0) entonces
		resul = cantDigitos(-n);
	sino 
		resul = 1; 
	finSi
		
	regresa(resul);
}

/*
[si(n > 9) entonces]
[resul = 1 + cantDigitos(n / 10);]
[sinoSi(n < 0) entonces]
[resul = cantDigitos(‑n);]
[sino]
[resul = 1;]
[finSi]
regresa(resul);
*/

funcion entero sumaOResta(entero x) {
	entero resul; 
	segunCaso(cantDigitos(x)) 
		caso 1: resul = x; 
	otroCaso 3: resul = x; 
	otroCaso 4: resul = x; 
	otroCaso 7: resul = x; 
	otroCaso 8: resul = x; 
	casoAsumido: resul = (-x); 
	finSegun 
		regresa(resul);
}
