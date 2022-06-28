#include <stdio.h>
#include <string.h>

int pangrama(char a[50]);

int main()
{
	char a[50];
	
	printf("Ingrese una cadena de caracteres: ");
	gets(a);
	printf("1 para decir que trata de pangrama, 0 para no: %d", pangrama(a));
	return 0;
}

int pangrama(char a[50]) {
	char alfabeto[26] = "abcdefghijklmnopqrstuvwxyz";
	int contador = 0;
	for(int i=0;a[i] != '\0';i++) {
		for(int j=0;alfabeto[j] != '\0';j++) {
			if (alfabeto[j] == a[i]) {
				contador++;
			}
		}
	}
	if (contador == 26) return 1;
	return 0;
}
