#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"Portuguese");
  int normal,invertido,aux;
  printf("Digite um numero:");
  scanf("%d",&normal);
  
  while (normal<=0){
  	printf("Digite um numero maior que zero:");
  	scanf("%d",&normal);
  }
  invertido=0;
  aux=normal;
  
  while (aux>0){
  	invertido=(invertido*10)+(aux%10);
  	aux=aux/10;
  }
  
  printf("\nNumero normal: %d\n Numero invertido: %d\n",normal,invertido);
  if (normal==invertido)
  printf("Esse número é palíndromo\n\n");
  else printf("Esse número não é palíndromo\n\n");
  
  system ("pause");
  return 0;
 }
 
