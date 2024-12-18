# include <stdio.h>
# define TAMANHO 10

// 02. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual é o menor e que seus valores.

int main()
{
	int vetor[TAMANHO];
	int i, numero;
	int maior = 0, menor;
	
	for(i=0 ; i<TAMANHO ; i++)
	{
		// Recebe os 10 numeros
		printf("Digite um numero: ");
		scanf("%i", &numero);
		
		vetor[i] = numero;
		
		// Maior valor do vetor
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
		
		// Menor valor do vetor
		if(i == 0)
		{
			menor = vetor[i];
		}
		else
		{
			if(vetor[i] < menor)
			{
				menor = vetor[i];
			}
		}
	}
	
	printf("\nO maior valor do Vetor: %i", maior);
	printf("\nO menor valor do Vetor: %i", menor);
	
	return 0;
}
