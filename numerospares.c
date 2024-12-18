#include <stdio.h>

// 5.Preencher automaticamente um vetor com todos os números pares entre 1 e 100 e depois exibir os números para o usuário.


int main()
{
	int i;
	int vetor[50];
	int num_par = 0;
	
	for(i=2; i<=100; i+=2)
	{
		vetor[num_par] = i;
		num_par++;
	}
	
	printf("\nNumeros pares entre 1 e 100:\n");
	
	for(i=0; i<50; i++)
	{
		printf("%i, ", vetor[i]);
	}
	
	return 0;
}
