#include <stdio.h>
#include <string.h>
#include <assert.h>

int cantt(char a[50], char);
void testing();

int main()
{
	char a[50];
	char b;
	
	printf("Ingrese una cadena de caracteres: ");
	gets(a);
	printf("Ingrese un caracter: ");
	scanf("%c", &b);
	
	printf("Cantidad de veces que aparece el caracter: %d", cantt(a,b));
	testing();
	return 0;
}

int cantt(char a[50], char b) {
	int contador = 0;
	int longg = strlen(a);	
	for(int i=0;i<=longg;i++) {
		if (a[i] == b) {
			contador++;
		}
	}
	return contador;
}

void testing() {
	assert(cantt("Enciclopedia",'e')==1);
	assert(cantt("Enciclopedia",'a')==1);
	assert(cantt("Enciclopedia",'u')==0);
}
	
