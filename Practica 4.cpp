#include <stdio.h>
#include <math.h>
int main()
{
	char op;
	float num1,num2,result;
	result=0;
	printf("Operacion de dos numeros, ingrese el primer numero:");
	scanf("%f",&num1);
	printf("Operacion de dos numeros, ingrese el segundo numero:");
	scanf("%f",&num2);
	printf("Ingrese el operador (+,-,/,*)\n");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+':
			result= num1+num2;
		break;
		case '-':
			result= num1-num2;
		break;
		case '/':
			result= num1/num2;
		break;
		case '*':
			result= num1*num2;
		break;
		default:
			printf("Operador invalido\n");
		break;
	}
	printf("%f %c %f = %f",num1,op,num2,result);
	return(1);
}
