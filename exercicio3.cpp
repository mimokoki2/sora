//Exibir todos os numeros pares na faixa de 100 a 200
#include<stdio.h>
#include<locale.h>
int main()
{
	
	int a = 100;
	setlocale(LC_ALL, "Portuguese");
	

	printf("Números pares na faixa de 100 a 200\n");
	while (a < 200)
	{
		a = a + 2;
		printf("%d\n", a);
	}
	
	
	return 0;
}
