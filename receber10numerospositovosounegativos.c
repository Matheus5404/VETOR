#include <stdio.h>
#define QUANT  6

//4. Receber 10 números e armazená-los em um vetor. Ao final, exibir a quantidade de números positivos informados.

int main()
{
	int num[QUANT], positivos=0, nulos=0, negativos=0;
	int i;
	
	for(i=0 ; i<QUANT ; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%i", &num[i]);
	}
	for(i=0 ; i<QUANT ; i++)
	{
		if(num[i] > 0)
		{
			printf("\nNumero Positivo");
			positivos++;
		}
		else
		{
			if(num[i] < 0)
			{
				printf("\nNumero Negativo");
				negativos++;
			}
			else
			{
				printf("\nNumero Nulo");
			}
		}
	}
	printf("\nA quantidade  de numeros positivos informado: %i", positivos);
	printf("\nA quantidade  de numeros negativos informado: %i", negativos);	
	
	return 0;
	
}
