#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float x1,x2,y1,y2,d,d1;
	
	printf("\nDigite o valor de x1: ");
	scanf("%f", &x1);
	printf("\nDigite o valor de x2: ");
	scanf("%f", &x2);
	printf("\nDigite o valor de y1:");
	scanf("%f", &y1);
	printf("\nDigite o valor de y2: ");
	scanf("%f", &y2);
	
	d1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	printf("\nA distancia entre dois pontos é: %f\n", sqrt(d1));
	
	system("PAUSE");
	return 0;
}
