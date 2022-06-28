#include <stdio.h>

int main()
{
	int contador = 0;
	int n;
	int calc;
	
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	
	
	if (n < 1) {
		printf("Error");
	} else {
		printf("El valor inicial es: %d", n);
		calc = n;
		for(;;) {
			n = calc;
			if (n%2 == 0) {
				calc = n/2;
			} else if (n%2 != 0) {
				calc = (n*3)+1;
			}
			
			if (calc == 1) break;
			contador++;
			
			printf("\nEl siguiente valor es: %d", calc);
		}
	}
	printf("\nValor final es 1, numero de pasos: %d", contador);
		
	return 0;
}

