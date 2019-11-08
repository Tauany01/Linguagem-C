#include <stdio.h>
#include <stdlib.h>

int main (void)

{
	int NumeroA;
	int NumeroB;
	int Resultado;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &NumeroA);
	
	printf("\n\n");
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &NumeroB);
	
	printf("\n\n");
	
	Resultado = NumeroA - NumeroB;
	printf("O resultado da subtracao e: \n");
	printf("%d", Resultado);
	
	printf("\n\n");
	
	system("pause");
	return 0;
}
