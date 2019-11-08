#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)

{
	float Base, Altura, P, A;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite a base do retângulo: \n\n");
	scanf("%f", &Base);
	
	printf("Digite a altura do retângulo: \n\n");
	scanf("%f", &Altura);
	printf("\n");
	
	P=Base+Altura;
	A=Base*Altura;
	
	printf("O perímetro deste retângulo é de: \n");
	printf("\n%f", P);
	printf("\n");
	
	printf("A área deste retângulo é de: \n");
	printf("\n%f", A);
	printf("\n");
	
	system("pause");
	return 0;
		
}
