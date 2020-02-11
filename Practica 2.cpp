#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,sumint,resint,mulint,divint,modint,derint,izqint,mayint,menint,igint;
	a=10;
	b=2;
	float c,d,sumflt,resflt,mulflt,divflt,modflt,derflt,izqflt,mayflt,menflt,igflt;
	c=9.2;
	d=3.1;
	sumint=a+b;
	resint=a-b;
	mulint=a*b;
	divint=a/b;
	modint=a%b;
	derint=a>>b;
	izqint=a<<b;
	mayint=a>b;
	menint=a<b;
	igint=a==b;
	printf("Enteros\n");
	printf("%d+%d=%d\n",a,b,sumint);
    printf("%d-%d=%d\n",a,b,resint);
    printf("%dx%d=%d\n",a,b,mulint);
    printf("%d/%d=%d\n",a,b,divint);
    printf("%dmod%d=%d\n",a,b,modint);
    printf("%d>>%d=%d\n",a,b,derint);
    printf("%d<<%d=%d\n",a,b,izqint);
    printf("%d>%d=%d\n",a,b,mayint);
    printf("%d<%d=%d\n",a,b,menint);
    printf("%d=%d=%d\n",a,b,igint);
    sumflt=c+d;
	resflt=c-d;
	mulflt=c*d;
	divflt=c/d;
	mayflt=c>d;
	menflt=c<d;
	igflt=c==d;
    printf("Flotantes\n");
	printf("%f+%f=%f\n",c,d,sumflt);
    printf("%f-%f=%f\n",c,d,resflt);
    printf("%fx%f=%f\n",c,d,mulflt);
    printf("%f/%f=%f\n",c,d,divflt);
    printf("%f>%f=%d\n",c,d,c>d);
    printf("%f<%f=%d\n",c,d,menflt);
    printf("%f=%f=%d\n",c,d,igflt);
}
