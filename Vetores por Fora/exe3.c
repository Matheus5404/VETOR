# include <stdio.h>

// 3. Receber 10 números e armazená-los em um vetor. Ao final, exibir o dobro de cada um dos números.

int main()
{
	int vetor[5];
	int i, j;
	int dobro;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Digite um numero do vetor[%i]: ", i);
		scanf("%i", &vetor[i]);
	}
	
	printf("\nO dobro de cada numero:\n");
	
	for(j=0 ; j<5 ; j++)
	{
		vetor[i] = vetor[j];
		dobro = vetor[i] * 2;
		printf("Vetor[%i]: %i\n",j , dobro);
	}
	
	return 0;
}
