#include <stdio.h>

int main (){
char palabra1[10];
char palabra2[10];
FILE *Fichero1; 
Fichero1= fopen("C:\\archivo\\Fichero1", "w+"); 

printf("Introduzca las palabras: \n" ); //Escribimos las palabras que queremos poner en nuestro fichero 
scanf("%s %s", palabra1, palabra2); 

 // determinamos una condicion que nos permita encontrar el final del fichero y en caso de que no encuentre dicho final retrocede

fprintf(Fichero1, "%s \n", palabra1); 
fprintf(Fichero1, "%s", palabra2);



fclose(Fichero1);


 
return 0; 
}
