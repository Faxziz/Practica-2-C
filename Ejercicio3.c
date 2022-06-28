#include <stdio.h>
#include <math.h>

int main()
{	
	double calculo1 = 0;
	double calculo2 = 0;
	double calculo3 = 0;
	double calculo4 = 0;
	
	for(int i=1;i <= 100; i++) {
		calculo1 += 1/i;
	}
	
	for(int i=1;i <= 30; i++) {
		calculo2 += 1/(pow(i,2));
	}
	
	for(int i=1;i <= 25;i++) {
		calculo3 += 1/(pow(i,i));
	}
	
	for(int i=2;i<=10;i++) {
		calculo4 += (i+1)*i;
	}
	
	printf("La sumatoria 1 da: %lf\n", calculo1);
	printf("La sumatoria 2 da: %lf\n", calculo2);
	printf("La sumatoria 3 da: %lf\n", calculo3);
	printf("La sumatoria 4 da: %lf\n", calculo4);
	
	return 0;
}

