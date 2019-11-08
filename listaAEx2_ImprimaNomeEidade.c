#include <stdio.h>
#include <stdlib.h>

 int main(void)
{
	char nome [100];
	char idade [2];
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	
	printf("\n\n");
		
	printf("Digite sua idade: \n");
	scanf("%s",&idade);
	
	printf("\n");
	
	printf("\n%s", nome);
	printf("\n%s", idade);
	
	printf("\n\n");
    
	system("pause"); 
	return 0;
	
}
