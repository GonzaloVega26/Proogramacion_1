#include <program1.h>
/**
*  Enunciado:  
*/
principal                                                       // Unidad de programa principal

	limpiar;                                                        // Limpia la pantalla.
	entero mes, anio;
	leerM(mes,"Ingrese el numero del mes ");
	//leerM(anio, "Ingrese el año ");
	anio = 2002;
	// 31 dias: 1, 3, 5,7,10,12
	// 30 dias: 4,6,8,9,11,
	// 28 dias: 2
	//Verificar si es bisiesto
	mostrar << "El ultimo dia del mes " << mes << " de " << anio << " es ";
	segunCaso(mes) 
		caso 2:
			si( anio % 4 == 0 Y (anio % 100 != 0 O anio % 400 == 0)) entonces
				mostrar << 29;
			sino
				mostrar << 28;
			finSi;
		otroCaso 1: 
		caso 3:
		caso 5:
		caso 7:
		caso 10:
		caso 12:
			mostrar << 31;
		otroCaso 4:
		caso 6:
		caso 8:
		caso 9:
		caso 11:
			mostrar << 30;
		casoAsumido: mostrar << "Error";
			
	finSegun
	
	mostrar << salto;

	pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal




