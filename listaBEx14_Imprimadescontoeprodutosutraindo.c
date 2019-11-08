#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)

{
	float Produto, Desconto, Total;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite o valor do produto: \n\n");
	scanf("%f", &Produto);
	printf("\n");
	
	printf("Digite o valor do desconto desejado: \n");
	scanf("%f", &Desconto);
	printf("\n");
	
	Total=Produto-((Produto*Desconto)/100);
		
	printf("O total do produto com o desconto é de: \n");
	printf("\n%f,", Total);
	printf("\n");
	
	system("pause");
	return 0;	
	
}
