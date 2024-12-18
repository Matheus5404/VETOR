# include <stdio.h>

// 2. Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem inversa da que foram recebidos.

int main()
{
	int vetor[5];
	int i, j;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Digite um numero do vetor[%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	
	printf("\nVetor com os valores na ordem inversa:");
	
	// Lembre-se sempre dessa ordem inversa
	for(j=5-1 ; j>=0 ; j--)
	{
		vetor[i] = vetor[j];
		printf("\nVetor[%i]: %i",j, vetor[i]);
	}
	
	return 0;
}
