#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void)

{
	float L1, L2, L3;
	
	setlocale(LC_ALL, "Portuguese");
	
		printf("Digite o n�mero do primeiro lado: \n");
		scanf("%f", &L1);
	
		printf("Digite o n�mero do segundo lado: \n");
		scanf("%f", &L2);
	
		printf("Digite o n�mero do terceiro lado: \n");
		scanf("%f", &L3);
	
	if(L1==0 && L2==0 && L3==0)
	{
		printf("Isso n�o � um tri�ngulo. \n");
	}
	
	if (L1+L2 < L3 || L2+L3 < L1 || L3+L1 < L2)
	{
		printf("Isso n�o � um tri�ngulo. \n");
	}
	
		if (L1==L2 && L2==L3 && L3==L1)
		{
			printf("Isso � um tri�ngulo Equil�tero. \n");
		}
	
				if ((L1==L2) && (L2!=L3) && (L3!=L1))
				{
					printf("Isso � um tri�ngulo Is�celes. \n");
				}
	
				if ((L1!=L2) && (L2==L3) && (L3!=L1))
				{
					printf("Isso � um tri�ngulo Is�celes. \n");
				}
		
	            if (L1!=L2 && L2!=L3 && L3!=L1)
	            {
	        	printf("Isso � um tri�ngulo Escaleno. \n");
	            }
		
	system("pause");
	return 0;
	
}
