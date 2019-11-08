#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, raio, areaCilindro, qtdadeLitros, qtdadeLatas, custo;
	printf ("\nDigite a valor da altura em metros: ");
	scanf("%f",&altura);
	printf("\nDigite o valor do raio em metros: ");
	scanf ("%f",&raio);
	areaCilindro=3.14*raio*raio+2*3.14*raio*altura;
	printf("\nA area do cilindro é de %.2f metros quadrados", areaCilindro);
	qtdadeLitros=areaCilindro/3;
	printf("\nA quantide de litros necessaria é de %.2f", qtdadeLitros);
	qtdadeLatas=qtdadeLitros/5;
	printf("\nA quantidade de latas necessaria é de %.2f", qtdadeLatas);
	custo=qtdadeLatas*20;
	printf("\nO valor total das tintas é de R$ %.2f\n",custo);
	system("PAUSE");
	
}
