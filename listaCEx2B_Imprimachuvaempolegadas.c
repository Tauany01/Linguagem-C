#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	
int main (void)

{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float polegada;
	float milimetro;
	
	milimetro=25.4/10;	
	
	printf("Digite a quantidade em polegada: \n");
	scanf("%f",&polegada);
	
	milimetro = milimetro*polegada;
	
	printf("O valor em milimetros é: %f\n",milimetro);
	
	system("pause");
	return 0;
}

