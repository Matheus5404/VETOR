# include <stdio.h>
# define TAM 6

/*  9. Receber 10 números e armazená-los em um vetor. Copiar os números em outro vetor na ordem inversa 
    e mostrar na tela todas as posições em que se tem o mesmo número nos dois vetores. Exemplo:
    1     2     3     1     2     3     1     2     3     1
    1     3     2     1     3     2     1     3     2     1
    Posições: 0, 3, 6, 9        */

int main()
{
	int vetor1[TAM];
	int vetor2[TAM];
	int i, j;
	
	// Receber 10 números e armazená-los em um vetor
	printf("Vetor de 6 numeros:\n\n");
	
	for(i=0 ; i<TAM ; i++)
	{
		vetor1[i] = i+1;
		printf("Digite um numero para o vetor [%i]: ", i);
		scanf("%i", &vetor1[i]);
	}
	
	printf("\nTabela com os 6 numeros digitados:\n\n");
	
	for(i=0 ; i<TAM ; i++)
	{
		printf("%i\t ", vetor1[i]);
	}
	
	// Copiar os números em outro vetor na ordem inversa
	printf("\n\nVetor de 6 numeros na ordem inversa:\n\n");
	
	for(i=TAM-1 ; i>=0 ; i--)
	{
		vetor2[i] = vetor1[i];
		printf("%i\t", vetor2[i]);
	}
	
	printf("\n\n");
	printf("Posicoes iguais: \n\n");
	
	for(i=0 ; i<TAM ; i++)
	{
		if(vetor1[i] == vetor2[TAM - 1 -i])
		{
			printf("%i\t", i);	
		}	
	}
	
	return 0;
}
