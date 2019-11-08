#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int  main (void)

{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float fahrenheit;
	float celsius;
	
	printf("Digite a temperatura em Fahrenheit: \n");
	scanf("%f", &fahrenheit);
	
	celsius=(5*fahrenheit-160)/9;
	
	printf("O valor em Celsius e: %f\n", celsius);
	
	system("pause");
	return 0;
}
