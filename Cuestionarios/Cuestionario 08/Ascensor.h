#ifndef ASCENSOR_H
#define ASCENSOR_H
estructura Ascensor{
privado:
	campo entero id;
	campo entero pisoActual;
	campo entero pisosRecorridos;
	
publico:
	Ascensor(entero);
	procedimiento mostrarAscensor();
	funcion entero getPisoActual();
	funcion entero getPisosRecorridos();
	funcion entero getId();
	procedimiento setPisoActual(entero);
	procedimiento setPisosRecorridos(entero);
	
};
#endif
