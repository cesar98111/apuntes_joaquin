#include <stdio.h>

int main(){
	 int n=1;
	 int i=0; 
	
	struct inventario_cintas{
		char titulo_cinta[]; 
		char longitud_cinta[];
		int alquiler; 
		char Fecha_venta[]; 
		char calificacion[]; 
	} cintas[n];
	
	for (i=0; i<=n ; i++){
		printf("Introduzca el titulo de la cinta:\n ");
		scanf("%s", cintas[i].titulo_cinta);
		printf("Introduzca el tamaño de la cinta en cm:\n");
		scanf("%s", cintas[i].longitud_cinta);
		printf("Introduzca el precio del alquiler de la cinta:\n");
		scanf("%d", &cintas[i].alquiler);
		printf("Introduzca la fecha de venta:\n"); 
		scanf("%s",cintas[i].Fecha_venta);
		printf("Introduzca el genero al que pertenece la cinta: \n ");
		scanf("%s", cintas[i].calificacion);
	}
	
	for(i=0; i<=n; i++){ 
	
	printf("Los datos de las cintas son: " );
	printf( "%s, %s,  %d, %s, %s", cintas[i].titulo_cinta, cintas[i].longitud_cinta, cintas[i].alquiler, cintas[i].Fecha_venta,cintas[i].calificacion);
}

return 0; 
}
