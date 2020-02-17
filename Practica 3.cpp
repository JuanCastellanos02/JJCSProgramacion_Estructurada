#include <stdio.h>
#include <ctype.h>
#include <iostream>

int main()
{
	char a;
	printf("Ingrese un caracter y presione Enter\n");
	a=getchar();
	printf("Caracter=%c,codigo en ASCII=%d\n",a,a);
	if (isdigit(a))
	printf("Es un digito\n");
	if (isalpha(a))
	printf("Es un simbolo\n");
	if (islower(a))
	printf("Es una minuscula\n");
	if (isupper(a))
	printf("Es una mayuscula\n");
	system("pause");
	return 1;
}
