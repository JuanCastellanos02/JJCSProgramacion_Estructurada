#include<stdio.h>

int i,num=101,A[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int main(){
	printf("Ingrese un numero menor o igual a 100:\n");
	while(num<0 || num>100)
		scanf("%d",&num);
	for(i=0;i<25;i++){
		if(A[i]<num)
		printf("%d\n",A[i]);
	}
}
