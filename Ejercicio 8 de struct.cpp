#include<stdio.h>
int main (){

int i=0;
int j=0;
int suma= 0;

char nombre[5];
int n=2;
char aux=0;
int m=2;
int media=0;
struct expediente_academico{  //En primer lugar ralizamos una estructura e donde almacenamos las materias y calificaciones respectivas obtenidas por el alumnado
	char nombre[5];
	char *materias[2]; 
	int calificacion[2]; 
	char *letra;
	    
} nota[n];

printf("Indentifique a todos los alumnos:\n"); // Introduciomos el nombre de los alumnos 
for(i=0;i<n; i++){
printf("Introduzca el nombre del alumno:");
scanf("%s", &nota[i].nombre);
	for(j=0; j<m; j++){
		printf("Introduzca el nombre de la materia cursada:\n"); // con un bucle vamos almacenando los datos para sus respectivas variables. 
		scanf("%s", &nota[i].materias[j]);
		printf("Introduzca la calificacion obtenida en dicha materia:\n");
		scanf("%d", &nota[i].calificacion[j]); 
	}
}

for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		if((nota[i].calificacion[j]>=0)||(nota[i].calificacion[j]<=10)){
			
		suma = suma + nota[i].calificacion[j]; 
		
		}
	
	}
		
		media = suma/2; 
		
		if((media==9)||(media==10)){
		nota[i].letra="A";
		}
		if((media>=7)&&(media<9)){
		nota[i].letra="B";
		}
		if((media>=5)&&(media<7)){
		nota[i].letra="C";
		}
		if((media>=3)&&(media<5)){
   		nota[i].letra="D";
		}
		if((media>=0)&&(media<3)){
		nota[i].letra="J";
		}
		suma=0;
		
		
	}


for(i=0;i<n;i++){
    printf("La nota de %s es %s \n", &nota[i].nombre, nota[i].letra);
}

                
return 0;
}
