#include <stdio.h>

// 6.Declarar um vetor de 10 posições já inicializado com os números de 1 a 10 e copiá-los para outro vetor.

int main()
{
	int i;
	int vetor1[10] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10};
	int vetor2[10];
	
	for(i=0 ; i<10 ; i++)
	{
		vetor2[i] = vetor1[i];
	}
	printf("\nNumeros do vetor 2: \n");
	for(i=0 ; i<10 ; i++)
	{
		printf("\n [%i]", vetor2[i]);
	}
	
	return 0;
}
