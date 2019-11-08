#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void)

{
	float NR, Resultado;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite um número: \n\n");
	scanf("%f", &NR);
	
	printf("\n");
	
	Resultado=NR/4;
	
	printf("O valor equivalente a 1/4 deste número é: \n");
	printf("\n%f", Resultado);
	
	printf("\n");
	
	system("pause");
	return 0;
}
