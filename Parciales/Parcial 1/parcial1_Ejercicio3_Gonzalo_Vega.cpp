#include <program1.h>
/**
*  Enunciado:  
*/
procedimiento lee3(real porRef v1, real porRef v2, real porRef v3, cadena tit){
	mostrar << tit << salto;
	leerM(v1,"V1: ");
	leerM(v2,"V2: ");
	leerM(v3,"V3: ");
}

principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	real t1v1,t1v2,t1v3,t2v1,t2v2,t2v3;
	
	lee3(t1v1,t1v2,t1v3, "Tripla 1");
	lee3(t2v1,t2v2,t2v3, "Tripla 2");
	mostrar << "(" 
		<< fSi(t1v1 < t2v1 , -1 , fSi( t2v1 < t1v1, +1, 0)) << ";"
		<< fSi(t1v2 < t2v2 , -1 , fSi( t2v2 < t1v2, +1, 0)) << ";"
		<< fSi(t1v3 < t2v3 , -1 , fSi( t2v3 < t1v3, +1, 0)) << ";"
	 ")" << salto;
	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




