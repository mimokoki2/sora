#include<stdio.h>
#include<locale.h>
int main()
{
	
	int a = 100;
	setlocale(LC_ALL, "Portuguese");
	

	printf("N�meros pares na faixa de 100 a 200\n");
	while (a < 200)
	{
		a = a + 2;
		printf("%d\n", a);
	}
	
	
	return 0;
}
