#include <stdio.h>
#define TAM 10

//1. Receber 10 números e armazená-los em um vetor. Ao final, exibir os 10 números na ordem que foram recebidos.


int main()
{
	int i, vetor[10];
	
	for(i=0 ; i<10 ; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%i", &vetor[i]);
	}
	
	printf("\nA ordem dos numeros recebidos sao de: \n");
	
	for(i=0 ; i<10 ; i++)
	{
		printf("\nNumero[%i] ", vetor[i]);
	}
	
	return 0;
}
