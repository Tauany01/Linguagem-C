#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void)

{
	float Saldo, Reajuste;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite o saldo da sua poupan�a: \n\n");
	scanf("%f", &Saldo);
	
	Reajuste=(Saldo*0.02)+Saldo;
	
	printf("O total da sua poupan�a com reajuste �: \n");
	printf("\n%f", Reajuste);
	printf("\n");
	
	system("pause");
	return 0;
}
