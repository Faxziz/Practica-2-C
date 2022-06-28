#include <stdio.h>

#define S 43

int main()
{
	int n;
	
	for(int i=0;i < 15;i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &n);
		
		if (n > S) {
			printf("El numero es menor\n");
		} else {
			printf("El numero es mayor\n");
		}
		if (n == S){
			printf("Encontraste el numero!");
			break;
		}
	}
	
	return 0;
}

