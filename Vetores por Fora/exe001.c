# include <stdio.h>
# define TAMANHO 10

// 01. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o menor, e seu valor.

int main()
{
	int vetor[TAMANHO];
	int i, numero;
	int menor;
	
	for(i=0 ; i<TAMANHO ; i++)
	{
		// Armazena 10 numeros
		printf("Digite um numero: ");
		scanf("%i", &numero);
		
		vetor[i] = numero;
		
		// OBS: quando usar valor = menor sempre deixe ele igual a "0"
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
	
	printf("\nO menor valor do Vetor: %i", menor);
	
	return 0;
}
