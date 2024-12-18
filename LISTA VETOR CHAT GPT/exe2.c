# include <stdio.h>
# define TAM 6

// Receber 10 números e armazená-los em um vetor. Ao final, exibir o maior e o menor número do vetor.

int main()
{
	int vetor[TAM];
	int i;
	int maior, menor;
	
	printf("Vetor de 6 numeros: \n\n");
	for(i=0 ; i<TAM ; i++)
	{
		printf("Digite um numero do vetor [%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	
	// NAO ESQUECE DESSA POR*#
	maior = vetor[0];
	menor = vetor[0];
	
	for(i=0 ; i<TAM ; i++)
	{
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
		else
		{
			if(vetor[i] < menor)
			{
				menor = vetor[i];
			}
		}
	}
	
	printf("\nO maior numero do vetor: %i", maior);
	printf("\nO menor numero do vetor: %i", menor);
	
	return 0;
}
