#include <stdio.h>

int main(){
	int i=0,sum=0,val;
	float prom;
	printf("Programa para calcular promedios\nEl programa termina al ingresar cualquier valor menor a 0\n");
	while(val>=0){
		printf("Ingrese numero entero #%d:",i+1);
		scanf("%d",&val);
		sum+=val;
		i++;
	}
	// como al evaluar con val no se si el valor es negativo hasta despues de las operaciones, cuando salgo del 
	// while resto 1 al acumulador i y resto val de sum, para que el valor negativo no sea registrado en las
	// variables finales
	i-=1;
	sum-=val;
	prom= sum/i;
	printf("Promedio:%f",prom);
	return 0;
 } 
