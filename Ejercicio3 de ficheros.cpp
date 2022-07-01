#include<stdio.h>

int main (){
	FILE* Fichero1;
	char Palabra1[10];
	int contador=0;
	Fichero1 = fopen("C:\\archivo\\Fichero1", "r" ); 
	while(!feof(Fichero1)){
		fscanf(Fichero1,"%s", Palabra1);
		contador++;
		
		
   }
   printf("numero de palabras: %d",contador);
			
	fclose(Fichero1);
	
} 

