#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)

{
	float Base, Altura, P, A;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite a base do ret�ngulo: \n\n");
	scanf("%f", &Base);
	
	printf("Digite a altura do ret�ngulo: \n\n");
	scanf("%f", &Altura);
	printf("\n");
	
	P=Base+Altura;
	A=Base*Altura;
	
	printf("O per�metro deste ret�ngulo � de: \n");
	printf("\n%f", P);
	printf("\n");
	
	printf("A �rea deste ret�ngulo � de: \n");
	printf("\n%f", A);
	printf("\n");
	
	system("pause");
	return 0;
		
}
