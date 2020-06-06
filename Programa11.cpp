#include <stdio.h>
#include <stdlib.h>

void fibonacci(int num);
int x1=0,x2=1,aux,n=0,num;
int main(){
	printf("Hasta que numero de la sucesion desea imprimir?:");
	scanf("%d",&num);
	fibonacci(num);
}
void fibonacci(int num){
	printf("\t%d\n",x1);
	aux=x2+x1;
	x1=x2;
	x2=aux;
	if (n==num)
	exit(EXIT_SUCCESS);
	n++;
	fibonacci(num);
}
