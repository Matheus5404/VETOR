# include <stdio.h>
# define TAM 10	

// Receber 10 n�meros e armazen�-los em um vetor. Calcular e exibir a m�dia dos n�meros armazenados e mostrar quais n�meros est�o acima dessa m�dia.

int main()
{
	int vetor[TAM];
	int i;
	float media, soma;
	
	printf("Vetor de 10 numeros:\n\n");
	
	for(i=0 ; i<TAM ; i++)
	{
		printf("Digite um numero do vetor [%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	
	printf("\nNumeros acima da media\n");
	
	for(i=0 ; i<TAM ; i++)
	{	
		if(vetor[i] >= 6)
		{
			printf("%i\t", vetor[i]);
		}
	}
	
	//A soma e a media de todos os numeros calculados
	for(i=0 ; i<TAM ; i++)
	{
		soma += vetor[i];
	}
	
	media = soma/10;
	
	printf("\n\nA soma de todos os numeros: %.2f ", soma);
	printf("\n\nA media dos numeros: %.2f ", media);
	
	return 0;
}
