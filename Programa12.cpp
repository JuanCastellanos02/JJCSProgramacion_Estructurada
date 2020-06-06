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
}alumnos[100], *alumno_puntero= alumnos;

void pedirDatos();
void imprimirDatos(struct alumnos alumnos[100]);

int alumno=0,repetida=0,i,varComp,regresar;
int main(){
	printf("\nPrograma para lectura de strings:");
	pedirDatos();
	imprimirDatos(alumnos);
	
}
void pedirDatos(){
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
		scanf("%s",&(alumno_puntero+alumno)->nombre); _flushall;
		printf("\nIngrese primer apellido:");
		scanf("%s",&(alumno_puntero+alumno)->apellido1); _flushall;
		printf("\nIngrese segundo apellido:");
		scanf("%s",&(alumno_puntero+alumno)->apellido2); _flushall;
		printf("\nIngrese fecha de nacimiento:");
		scanf("%s",&(alumno_puntero+alumno)->nacimiento); _flushall;
		printf("\nIngrese escuela:");
		scanf("%s",&(alumno_puntero+alumno)->escuela); _flushall;
		printf("\nIngrese grado escolar:");
		scanf("%s",&(alumno_puntero+alumno)->grado); _flushall;
		printf("\nIngrese carrera:");
		scanf("%s",&(alumno_puntero+alumno)->carrera); _flushall;
		printf("\nIngrese sexo:");
		scanf("%s",&(alumno_puntero+alumno)->sexo); _flushall;
		alumno++;
		
		do{
		printf("\n\t Seguir? S/N: ");
		scanf("%c", &regresar); _flushall();
		regresar=toupper(regresar);	
		}while(regresar!='S' && regresar!='N');
	}while(regresar=='S');
	
}

void imprimirDatos(struct alumnos alumnos[100]){
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
