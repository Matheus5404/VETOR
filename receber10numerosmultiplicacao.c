#include <stdio.h> 
#define TAM 3

//3. Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir o dobro de cada um dos n�meros.

int main()
{
	int vetor[TAM];
	int i, dobro;
	
	for(i=0 ; i<TAM; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%i", &vetor[i]);
	}
	printf("\nO dobro de cada numero sera de: \n");
	for(i=0; i<TAM; i++)
	{
		dobro = vetor[i] * 2;
		printf("%i ", dobro);
	}
	return 0;
}
