#include <stdio.h>
#include <math.h>

int main()
{
	double terna;
	
	for(int a=0; a <= 20; a++) {
		for(int b=0; b <= 30; b++) {
			terna = sqrt(pow(a,2) + pow(b,2));
			printf("La terna de %d y %d da: %lf\n", a,b,terna);
			}
		}
	
	return 0;
}

