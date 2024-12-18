# include <stdio.h>
# define TAM 10

// Receber 10 números e armazená-los em um vetor. Criar um novo vetor contendo apenas os números pares do primeiro vetor e exibi-lo.

int main()
{
	int vetor[TAM];
	int i;
	
	printf("Vetor de 10 numeros:\n\n");
	
	for(i=0 ; i<TAM ; i++)
	{
		printf("Digite um numero do vetor [%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	
	printf("\n");
	
	printf("\nVetor de numeros pares:\n\n");
	
	for(i=1 ; i<TAM ; i+=2)
	{
		printf("%i\t", vetor[i]);
	}
	
	printf("\nVetor de numeros impares:\n\n");
	
	for(i=0 ; i<TAM ; i+=2)
	{
		printf("%i\t", vetor[i]);
	}

	return 0;
}
