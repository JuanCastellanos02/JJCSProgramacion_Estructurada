#include <stdio.h>
#include <string.h>
#include <cctype>

struct alumnos{
	char nombre[50];
	char apellido1[50];
	char apellido2[50];
	char nacimiento[50];
	char escuela[50];
	char grado[20];
	char carrera[50];
	char sexo[20];
	char res[2];
	char id[50];
}alumnos[100];
int alumno=0,repetida=0,i,varComp,regresar;
int main(){
	printf("\nPrograma para lectura de strings:");
	do{
		do{
		repetida=0;
		printf("\nIngrese Id:");
		scanf("%s",&alumnos[alumno].id); _flushall;
		for(i=0;i<alumno;i++){
			varComp=(strcmp(alumnos[alumno].id,alumnos[i].id));
			if(varComp==0)
			repetida=1;
		}
	    }while(repetida==1);
		printf("\nIngrese primer nombre:");
		scanf("%s",&alumnos[alumno].nombre); _flushall;
		printf("\nIngrese primer apellido:");
		scanf("%s",&alumnos[alumno].apellido1); _flushall;
		printf("\nIngrese segundo apellido:");
		scanf("%s",&alumnos[alumno].apellido2); _flushall;
		printf("\nIngrese fecha de nacimiento:");
		scanf("%s",&alumnos[alumno].nacimiento); _flushall;
		printf("\nIngrese escuela:");
		scanf("%s",&alumnos[alumno].escuela); _flushall;
		printf("\nIngrese grado escolar:");
		scanf("%s",&alumnos[alumno].grado); _flushall;
		printf("\nIngrese carrera:");
		scanf("%s",&alumnos[alumno].carrera); _flushall;
		printf("\nIngrese sexo:");
		scanf("%s",&alumnos[alumno].sexo); _flushall;
		alumno++;
		
		do{
		printf("\n\t Seguir? S/N: ");
		scanf("%c", &regresar); _flushall();
		regresar=toupper(regresar);	
		}while(regresar!='S' && regresar!='N');
	}while(regresar=='S');
	
	for(i=0;i<alumno;i++){
	printf("\n\nid:%s\n",alumnos[i].id);
	printf("nombre:%s\n",alumnos[i].nombre);
	printf("Apellido 1:%s\n",alumnos[i].apellido1);
	printf("Apellido 2:%s\n",alumnos[i].apellido2);
	printf("Nacimiento :%s\n",alumnos[i].nacimiento);
	printf("Escuela:%s\n",alumnos[i].escuela);
	printf("Grado:%s\n",alumnos[i].grado);
	printf("Carrera:%s\n",alumnos[i].carrera);
	printf("Sexo:%s\n",alumnos[i].sexo);
}
}
