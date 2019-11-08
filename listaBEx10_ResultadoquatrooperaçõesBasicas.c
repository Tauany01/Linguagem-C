#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)

{
	float N1, N2, AD, SUB, MULT, DIV;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite o primeiro número: \n\n");
	scanf("%f", &N1);
	
	printf("Digite o segundo número: \n\n");
	scanf("%f", &N2);
	
	AD=N1+N2;
	SUB=N1-N2;
	MULT=N1*N2;
	DIV=N1/N2;
	
	printf("A adição desses números é: \n");
	printf("\n%f", AD);
	printf("\n\n");
	
	printf("A subtração desses números é: \n");
	printf("\n%f", SUB);
	printf("\n\n");
	
	printf("A multiplicação desses números é: \n");
	printf("\n%f", MULT);
	printf("\n\n");
	
	printf("A divisão desses números é: \n");
	printf("\n%f", DIV);
	printf("\n\n");
	
	system("pause");
	return 0;
}
