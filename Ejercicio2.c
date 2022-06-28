#include <stdio.h>

int main()
{
	int hab;
	
	printf("Ingrese un numero de habitacion: ");
	scanf("%d", &hab);
	
	switch (hab) {
		case 1:
		printf("Habitacion azul |");
		break;
		case 2:
		printf("Habitacion roja |");
		break;
		case 3:
		printf("Habitacion verde |");
		break;
		case 4:
		printf("Habitacion rosa |");
		break;
		case 5:
		printf("Habitacion gris |");
		break;
		default:
		printf("La habitacion no existe");
	}
	
	switch (hab) {
		case 1:
		printf(" Primera planta - 2 camas");
		break;
		case 2:
		printf(" Primera planta - 1 cama");
		break;
		case 3:
		printf(" Segunda planta - 3 camas");
		break;
		case 4:
		printf(" Segunda planta - 2 camas");
		break;
		case 5:
		printf(" Tercera planta - 1 cama");
		break;
		default:
		printf(" La habitacion no existe");
	}
	
	return 0;
}

