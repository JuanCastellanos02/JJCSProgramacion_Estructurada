#include <stdio.h>

int A[3][3],i,j,num;
int main(){
	printf("\nIngrese los elementos de la matriz");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
	printf("\nElemento A[%d][%d]:",i+1,j+1);
	scanf("%d",&A[i][j]);
    }
	printf("\nIngrese un numero escalar, para multiplicar la matriz:");
	scanf("%d",&num);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	A[i][j]=A[i][j]*num;
	printf("\nMatriz multiplicada:");
	for(i=0;i<3;i++){
	printf("\n");
	for(j=0;j<3;j++)
	printf("%d\t",A[i][j]);
}
}
