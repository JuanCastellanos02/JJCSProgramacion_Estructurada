#include <stdio.h>
#include <string.h>
#include <cctype>

char alumnos[200][8][100];
char nombre[50],apellido1[50],apellido2[50],nacimiento[50],escuela[50],grado[20],carrera[50],sexo[20],res[2],id[50];
int alumno=0,repetida=0,i,varComp,regresar;
int main(){
	printf("\nPrograma para lectura de strings:");
	do{
		do{
		repetida=0;
		printf("\nIngrese Id:");
		scanf("%s",&id); _flushall;
		for(i=0;i<alumno;i++){
			varComp=(strcmp(id,alumnos[i][1]));
			if(varComp==0)
			repetida=1;
		}
	    }while(repetida==1);
		printf("\nIngrese primer nombre:");
		scanf("%s",&nombre); _flushall;
		printf("\nIngrese primer apellido:");
		scanf("%s",&apellido1); _flushall;
		printf("\nIngrese segundo apellido:");
		scanf("%s",&apellido2); _flushall;
		printf("\nIngrese fecha de nacimiento:");
		scanf("%s",&nacimiento); _flushall;
		printf("\nIngrese escuela:");
		scanf("%s",&escuela); _flushall;
		printf("\nIngrese grado escolar:");
		scanf("%s",&grado); _flushall;
		printf("\nIngrese carrera:");
		scanf("%s",&carrera); _flushall;
		printf("\nIngrese sexo:");
		scanf("%s",&sexo); _flushall;
		strcpy(alumnos[alumno][1],nombre);
		strcpy(alumnos[alumno][2],nombre);
		strcpy(alumnos[alumno][3],apellido1);
		strcpy(alumnos[alumno][4],apellido2);
		strcpy(alumnos[alumno][5],nacimiento);
		strcpy(alumnos[alumno][6],escuela);
		strcpy(alumnos[alumno][7],grado);
		strcpy(alumnos[alumno][8],carrera);
		strcpy(alumnos[alumno][9],sexo);
		alumno++;
		
		do{
		printf("\n\t Seguir? S/N: ");
		scanf("%c", &regresar); _flushall();
		regresar=toupper(regresar);	
		}while(regresar!='S' && regresar!='N');
	}while(regresar=='S');
	
	for(i=0;i<alumno;i++){
	printf("\n\nid:%s\n",alumnos[i][1]);
	printf("nombre:%s\n",alumnos[i][2]);
	printf("Apellido 1:%s\n",alumnos[i][3]);
	printf("Apellido 2:%s\n",alumnos[i][4]);
	printf("Nacimiento :%s\n",alumnos[i][5]);
	printf("Escuela:%s\n",alumnos[i][6]);
	printf("Grado:%s\n",alumnos[i][7]);
	printf("Carrera:%s\n",alumnos[i][8]);
	printf("Sexo:%s\n",alumnos[i][9]);
}
}
