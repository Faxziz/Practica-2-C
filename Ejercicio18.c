#include <stdio.h>
#include <string.h>
#include <assert.h>

int estaOno(char a[50],char);
void testing();

int main()
{
	char a[50];
	char b;
	
	printf("Ingrese una cadena de caracteres: ");
	gets(a);
	printf("Ingrese un caracter a buscar: ");
	scanf("%c", &b);
	
	printf("1 para si, 0 para no: %d", estaOno(a,b));
	testing();
	return 0;
}

int estaOno(char a[50],char b) {
	int longg = strlen(a);
	for(int i=0;i<=longg;i++) {
		if (a[i] == b) {
			return 1;
		}
	}
	return 0;
}

void testing() {
	assert(estaOno("Enciclopedia",'a')==1);
	assert(estaOno("Doctor",'u')==0);
	assert(estaOno("Enciclopedia",'i')==1);	
}
