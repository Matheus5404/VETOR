# include <stdio.h>
# define TAM 10

// Receber 10 números e armazená-los em um vetor. Ao final, exibir a soma de todos os números armazenados.

int main()
{
	int vetor[TAM];
	int i;
	int soma;
	
	for(i=0 ; i<TAM ; i++)
	{
		printf("Digite um numero para o vetor [%i]: ", i+1);
		scanf("%i", &vetor[i]);
	}
	
	printf("\n");
	
	for(i=0 ; i<TAM ; i++)
	{
		printf("%i\t", vetor[i]);
	}
	
	printf("\n\nValores com a soma do vetor: \n\n");
	
	for(i=0 ; i<TAM ; i++)
	{
		soma += vetor[i];
		printf("%i\t", soma);
	}

	return 0;
}
