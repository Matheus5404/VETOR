# include <stdio.h>
# define INTEIRO 100

// 6. Preencher automaticamente um vetor com todos os 100 n�meros inteiros e depois exibir os numeros pares e impares para o usu�rio.

int main()
{
	int vetor[INTEIRO];
	int i;
	
	printf("Vetor de 100 numeros: ");
	printf("\n");
	
	for(i=1 ; i<INTEIRO+1 ; i++)
	{
		printf("%i ", i);
	}
	
	printf("\n\nVetor de numeros pares: ");
	printf("\n");
	
	for(i=0 ; i<INTEIRO+1 ; i+=2)
	{
		vetor[INTEIRO] / 2;
		printf("%i ", i);
	}
	
	printf("\n\nVetor de numeros impares: ");
	printf("\n");
	
	for(i=1 ; i<INTEIRO ; i+=2)
	{
		vetor[INTEIRO] / 2;
		printf("%i ", i);
	}

	return 0;
}
