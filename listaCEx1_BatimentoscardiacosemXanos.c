#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int  main (void)

{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int Ano, Batidas;
	
	printf("Digite a quantidade de anos: \n");
	scanf("%d", &Ano);
	
	Batidas=31536000*Ano;
		
	printf("O número de batidas durante este período anual é de: %d\n", Batidas);
	
	system("pause");
	}
