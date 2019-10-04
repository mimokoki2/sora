#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main()
{
	
	int gen;
	int idade;
	int f;
	int g = 0;
	int contador;
	int media = 0;
	
	setlocale(LC_ALL, "Portuguese");
  
  for(contador = 1; contador <= 10; contador++)
  {
	
	
	printf("1 - Mulher\n");
	printf("2 - Homem\n");
	printf("------------------------\n");
	printf("                     opção:");
	scanf("%d", &gen);
	if (gen == 1) g = g + gen;
	printf("                     idade:");
	scanf("%d", &idade);
	printf("    \n");
	if (idade <= 0) exit(0);
	media = media + idade;
	
	
		


	}
  	media = media / 10;
  	printf("o numero de mulheres é :%d\n", g);
	printf("a media das idade é de :%d", media);
  
	return 0;
}
