#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void)

{
	float N1, N2, N3, Media;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite o primeiro número: \n\n");
	scanf("%f", &N1);
	
	printf("Digite o segundo número: \n\n");
	scanf("%f", &N2);
	
	printf("Digite o terceiro número: \n\n");
	scanf("%f", &N3);
	
	Media=(N1+N2+N3)/3;
	
	printf("A média desses número é: \n");
	printf("\n%f", Media);
	printf("\n");
	
	system ("pause");
	return 0;
	
}
