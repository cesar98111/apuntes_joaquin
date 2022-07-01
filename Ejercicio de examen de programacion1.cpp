#include <stdio.h>

struct concurso{
 	 char*concursantes[];  //con i recorremos las componentes de los structs y con j recorremos los datos internos de concursantes y de jueces
 	 char*jueces[]; 
 	 int calificacion; 

 };

 
 void datos( int n; struct nota[] concurso){
    int i; 
    int j; 
    
    for (i=0; i<=n; i++){
    	for( j=0; j<=n; j++){
    		printf("Introduzca el nombre del concursante:\n "); 
    		scanf("%s", nota[i].concursantes[j]);
    		printf("Introduzca el nombre del juez:\n"); 
    		scanf("%s", nota[i].jueces[j]);
	}
}

}


int main(){
    int	n=5;
	struct concurso nota[n]; 
	int i=0;
	int j=0; 
    datos(nota, n);
    
}
