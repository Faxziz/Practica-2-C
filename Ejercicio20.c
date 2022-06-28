#include <stdio.h>
#include <string.h>

int main()
{
	char a[50];
	int temp;
	
	printf("Ingrese una cadena: ");
	gets(a);
	
	int longg = strlen(a);
	
	for(int i=0;i < longg/2;i++) {
		temp = a[i];
		a[i] = a[longg - 1 - i];
		a[longg - 1 - i] = temp;
	}
	printf("La cadena invertida es: %s", a);
	return 0;
}

