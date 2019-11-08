	#include <stdio.h>
	#include <stdlib.h>

int main(void)
{
	float N5, N8, N12, Media;
	
	printf("Digite o Numero 5: \n");
	printf("\n");
	scanf("%f", &N5);
	
	printf("\n");
	
	printf("Digite o Numero 8: \n");
	printf("\n");
	scanf("%f", &N8);
	
	printf("\n");
	
	printf("Digite o Numero 12: \n");
	printf("\n");
	scanf("%f", &N12);
	
	Media=(N5+N8+N12)/3;
	
	printf("A media aritmetica desses numeros e: \n");
	printf("\n");
	printf("\n%f", Media);
	
	printf("\n");
	
	system("pause");
	return 0; 
}
