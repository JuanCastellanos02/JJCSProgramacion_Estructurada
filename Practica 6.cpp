#include <stdio.h>
 int main(){
 	int i=0,sum=0,val;
 	float prom;
 	printf("Programa para calcular promedios\nEl programa termina al ingresar cualquier valor menor a 0\n");
 	do{
 		printf("Ingrese numero %d:",i+1);
 		scanf("%d",&val);
 		sum+=val;
 		i++;
	 }while(val>=0);
	// como al evaluar con val ya realice el escaneo de val, la suma de val a sum y i++, resto val a sum y 1 a i
	i-=1;
	sum-=val;
 	prom=sum/i;
 	printf("Promedio:%f",prom);
 	return 0;
 }
