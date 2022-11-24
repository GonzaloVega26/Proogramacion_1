#include <program1.h>
#include "Ascensor.h"
procedimiento Ascensor::prueba(Ascensor asc){
	mostrar << "ASD"<< tabulado << asc.getPisoActual();
}
procedimiento Ascensor::mostrarAscensor(){
	mostrar << "Id: " << id << salto;
	mostrar << "Piso Actual: " << pisoActual << salto;
	mostrar << "Pisos Recorridos: " << pisoActual << salto;
}
Ascensor::Ascensor(entero id){
	esto->id= id; //Al escribirlo asi es como en java, usando el mismo nombre de variables
	//si usamos parametro de distinto nombre no hace falta usar el "esto" podemos simplemente hacer id = x;
	esto->pisoActual= 0; //Todos al ser creados arrancan en planta baja
	esto->pisosRecorridos= 0; //Todos al ser creados arrancan con cero pisos recorridos
}
funcion entero Ascensor::getPisoActual(){
	regresa(esto->pisoActual);
}
funcion entero Ascensor::getPisosRecorridos(){
	regresa(esto->pisosRecorridos);
}
funcion entero Ascensor::getId(){
	regresa(esto->id);
}
procedimiento Ascensor::setPisoActual(entero pisoActual){
	esto->pisoActual = pisoActual;
}
procedimiento Ascensor::setPisosRecorridos(entero pisosRecorridos){
	esto->pisosRecorridos = pisosRecorridos;
}

