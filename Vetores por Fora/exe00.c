# include <stdio.h>

// 00. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, e seu valor.


int main ()
{
	int vetor[10];
	int i, numero;
	int maior = 0;
	
	for(i=0 ; i<10 ; i++)
	{
		// Armazenar 10 valores digitados
		printf("Digite um numero: ");
		scanf("%i", &numero);
		
		vetor[i] = numero;
		
		// Maior elemento e seu valor
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
	}
	
	printf("\nMaior valor do Vetor: %i", maior);
	
	return 0;
}
