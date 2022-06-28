#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int contenida(char a[50], char b[50]);

int main()
{
	char a[50];
	char b[50];
	
	printf("Ingrese una palabra: ");
	gets(a);
	printf("Ingrese otra palabra: ");
	gets(b);
	
	printf("Si la segunda palabra esta contenida en la primera, devuelve 1, sino, 0: %d", contenida(a,b));
	return 0;
}

int contenida(char a[50], char b[50]) {
	int ret;
	
	ret = strstr(a,b);
	
	if (ret) return 1;
	return 0;
}
