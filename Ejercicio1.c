#include <stdio.h>
#include <assert.h>


int main()
{
	int dado;
	
	printf("Ingrese un numero de cara del dado: ");
	scanf("%d", &dado);
	
	switch (dado) {
		case 1:
		printf("6");
		break;
		case 2: 
		printf("5");
		break;
		case 3:
		printf("4");
		break;
		case 4:
		printf("3");
		break;
		case 5:
		printf("2");
		break;
		case 6:
		printf("1");
		default:
		printf("Numero incorrecto");
		break;
	}
	
	return 0;
}

