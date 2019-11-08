#include <stdio.h>
#include <stdlib.h>

    int main (void)

{
	char nome[100];	
	char endereco[100];
	int telefone [15];
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	
	printf("\n\n");

	printf("Digite seu endereco: \n");
	scanf("%s", &endereco);

	printf("\n\n");		

	printf("Digite seu numero de telefone: \n");
	scanf("%d", &telefone);
	
	printf("\n\n");
		
	printf("\n%s", nome);
	printf("\n%s", endereco);
	printf("\n%d", telefone);
	
	printf("\n\n");
		
	system ("pause");
	return 0;
	
}
