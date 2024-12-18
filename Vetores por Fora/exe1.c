# include <stdio.h>

// 1. Receber 10 números e armazená-los em um vetor. Ao final, exibir os 10 números na ordem que foram recebidos.

int main ()
{
	int vetor[5];
	int i, j;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Digite um numero do vetor[%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	
	for(j=0 ; j<5 ; j++)
	{
		vetor[i] = vetor[j];
		printf("\nVetor[%i]: %i ", j, vetor[i]);
	}
	
	return 0;
}
