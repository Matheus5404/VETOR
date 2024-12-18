#include <stdio.h>
#define TAM 10

//2. Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem inversa da que foram recebidos.


int main()
{
	int i, vetor[TAM];
	
	for(i=0 ; i<TAM ; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%i", &vetor[i]);
	}
	
	for(i=TAM-1; i>=0; i--)
	{
		printf("\nNumero[%i] ", vetor[i]);
	}
	
	
	return 0;
}
