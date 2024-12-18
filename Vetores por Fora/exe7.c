# include <stdio.h>
# define TAMANHO 10

// 7. Declarar um vetor de 10 posições já inicializado com os números de 1 a 10 e copiá-los para outro vetor.

int main()
{
	int vetor1[TAMANHO];
	int vetor2[TAMANHO];
	int i;
	
	printf("Vetor de 10 posicoes: \n\n");
	
	for(i=0 ; i<TAMANHO ; i++)
	{
		vetor1[i] = i+1;
		printf("Vetor 1 [%i]: %i\n", i, vetor1[i]);
	}
	
	printf("\nTrasnferindo para o segundo vetor:\n\n");
	
	for(i=0 ; i<TAMANHO ; i++)
	{
		vetor2[i] = vetor1[i];
		printf("Vetor 2 [%i]: %i\n", i, vetor2[i]);
	}
	
	return 0;
}
