#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int  main (void)

{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int N1, N2, N3, N4, Soma;
	
	printf("Ol� usu�rio, ao digitar os n�meros, por favor, digite os n�meros diferentes um  do outro!\n\n");
	printf("Digite o primeiro n�mero: \n");
	scanf("%d", &N1);
	
	printf("Digite o segundo n�mero: \n");
	scanf("%d", &N2);
	
	printf("Digite o terceiro n�mero: \n");
	scanf("%d", &N3);
	
	printf("Digite o quarto n�mero: \n");
	scanf("%d", &N4);
	
		if (N1>N2 && N1>N3 && N1>N4)
		{
			Soma=N2+N3+N4;
		}
			if (N2>N1 && N2>N3 && N2>N4)
		{
			Soma=N1+N3+N4;
		}
		if (N3>N1 && N3>N2 && N3>N4)
		{
			Soma=N1+N2+N4;
		}
			if (N4>N1 && N4>N2 && N4>N3)
		{
			Soma=N1+N2+N3;
		}
	printf("A soma dos menores �: %d \n", Soma);
	
	system("pause");
	return 0;
	
	
}
