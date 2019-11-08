#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void)

{
	float L1, L2, L3;
	
	setlocale(LC_ALL, "Portuguese");
	
		printf("Digite o número do primeiro lado: \n");
		scanf("%f", &L1);
	
		printf("Digite o número do segundo lado: \n");
		scanf("%f", &L2);
	
		printf("Digite o número do terceiro lado: \n");
		scanf("%f", &L3);
	
	if(L1==0 && L2==0 && L3==0)
	{
		printf("Isso não é um triângulo. \n");
	}
	
	if (L1+L2 < L3 || L2+L3 < L1 || L3+L1 < L2)
	{
		printf("Isso não é um triângulo. \n");
	}
	
		if (L1==L2 && L2==L3 && L3==L1)
		{
			printf("Isso é um triângulo Equilátero. \n");
		}
	
				if ((L1==L2) && (L2!=L3) && (L3!=L1))
				{
					printf("Isso é um triângulo Isóceles. \n");
				}
	
				if ((L1!=L2) && (L2==L3) && (L3!=L1))
				{
					printf("Isso é um triângulo Isóceles. \n");
				}
		
	            if (L1!=L2 && L2!=L3 && L3!=L1)
	            {
	        	printf("Isso é um triângulo Escaleno. \n");
	            }
		
	system("pause");
	return 0;
	
}
