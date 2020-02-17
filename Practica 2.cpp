#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	a=10;
	b=2;
	float c,d;
	c=9.2;
	d=3.1;
	double e,f;
	e=1.1111111;
	f=1.1111111;
	char g,h;
	g='g';
	h='h';
	printf("Enteros\n");
	printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%dx%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%dmod%d=%d\n",a,b,a%b);
    printf("%d>>%d=%d\n",a,b,a>>b);
    printf("%d<<%d=%d\n",a,b,a<<b);
    printf("%d>%d=%d\n",a,b,a>b);
    printf("%d<%d=%d\n",a,b,a<b);
    printf("%d=%d=%d\n",a,b,a==b);
    printf("%dAND%d=%d\n",a,b,a&&b);
    printf("%dOR%d=%d\n",a,b,a||b);
    printf("Flotantes\n");
	printf("%f+%f=%f\n",c,d,c+d);
    printf("%f-%f=%f\n",c,d,c-d);
    printf("%fx%f=%f\n",c,d,c*d);
    printf("%f/%f=%f\n",c,d,c/d);
    printf("%f>%f=%d\n",c,d,c>d);
    printf("%f<%f=%d\n",c,d,c<d);
    printf("%f=%f=%d\n",c,d,c==d);
    printf("%f AND %f=%d\n",c,d,c&&d);
    printf("%f OR %f=%d\n",c,d,c||d);
    printf("Doble Precision\n");
	printf("%f+%f=%f\n",e,f,e+f);
    printf("%f-%f=%f\n",e,f,e-f);
    printf("%fx%f=%f\n",e,f,e*f);
    printf("%f/%f=%f\n",e,f,e/f);
    printf("%f>%f=%d\n",e,f,e>f);
    printf("%f<%f=%d\n",e,f,e<f);
    printf("%f=%f=%d\n",e,f,e==f);
    printf("%f AND %f=%d\n",e,f,e&&f);
    printf("%f OR %f=%d\n",e,f,e||f);
    printf("Caracteres\n");
	printf("%c+%c=%d\n",g,h,g+h);
    printf("%c-%c=%d\n",g,h,g-h);
    printf("%cx%c=%d\n",g,h,g*h);
    printf("%c/%c=%d\n",g,h,g/f);
    printf("%c>%c=%d\n",g,h,g>h);
    printf("%c<%c=%d\n",g,h,g<h);
    printf("%c=%c=%d\n",g,h,g==h); 
}
