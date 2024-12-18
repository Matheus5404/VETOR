# include <stdio.h>

// 4. Receber 10 números e armazená-los em um vetor. Ao final, exibir a quantidade de números positivos e negativos informados.

int main()
{
	int vetor[6];
	int i, j;
	int positivos=0, negativos=0, nulos;
	
	for(i=0 ; i<6 ; i++)
	{
		printf("Digite um numero do vetor[%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	
	for(j=0 ; j<6 ; j++)
	{
		vetor[i] = vetor[j];
		
		if(vetor[i] == 0)
		{
			printf("\nNumero nulo ");
			nulos++;
		}
		else
		{
			if(vetor[i] > 0)
			{
				printf("\nNumero Positivo");
				positivos++;
			}
			else
			{
				printf("\nNumero Negativo");
				negativos++;
			}
		}
	}
	
	printf("\nQuantidade de numeros nulos: %i", nulos);
	printf("\nQuantidade de numeros positivos: %i", positivos);
	printf("\nQuantidade de numeros negativos: %i", negativos);
	
	return 0;
}
