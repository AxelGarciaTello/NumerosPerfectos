/*
Instituto Politecnico Nacional
Escuela Superior de Cómputo
Analisis de algoritmos
Grupo: 3CV2
Alumnos: Garcia Tello Axel
		 Rodríguez Acosta Alan
Profesor: Benjamin Luna Benoso
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Numeros perfectos

Fecha: 12 de febrero de 2020
*/
#include "NumerosPerfectos.h"

int verificarNumeroPerfecto(int numero){
	int limite=numero/2,
		contador=1,
		suma=0;
	while(contador<=limite){
		if((numero%contador)==0){
			suma+=contador;
		}
		contador++;
	}
	if(suma==numero){
		return 1;
	}
	else{
		return 0;
	}
}

void imprimirNumeroPerfecto(int cantidad){
	int contador=0,
		numero=2;
	while(contador!=cantidad){
		if(verificarNumeroPerfecto(numero)){
			printf("%d Es perfecto.\n",numero);
			contador++;
		}
		numero++;
	}
}