#include <stdio.h>
#include <stdlib.h>

struct nombre{
		int edad;
		char *nombre;
		char *apellidos;
	};
	
void datos(struct nombre paco){
	paco.edad=60;
	printf("%d",paco.edad);
}

int main() {
	struct nombre paco;
	datos(paco);
	return 0;
}
