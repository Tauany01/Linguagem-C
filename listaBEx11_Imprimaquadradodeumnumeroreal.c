#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void)

{
	float N, Q;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite o número a ser calculado: \n\n");
	scanf("%f", &N);
	printf("\n");
	
	Q=N*N;
	
	printf("O quadrado deste número é: \n");
	printf("\n%f", Q);
	printf("\n\n");
	
	system ("pause");
	return 0;
}
