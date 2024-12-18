#include <stdio.h>

/*9. Receber 10 n�meros e armazen�-los em um vetor. Copiar os n�meros em outro vetor na ordem inversa e mostrar na tela todas as posi��es 
em que se tem o mesmo n�mero nos dois vetores. Exemplo:
1     2     3     1     2     3     1     2     3     1
1     3     2     1     3     2     1     3     2     1
Posi��es: 0, 3, 6, 9 */

int main()
{
	int vetor1[10];
	int vetor2[10];
	int i, j;
	
	// Recebendo 10 n�meros e armazenando no vetor1
	printf("Digite 10 numeros:\n");
	for(i=0; i<10; i++)
	{
		scanf("%i", &vetor1[i]);
	}
	
	// Copiando os n�meros para o vetor2 em ordem inversa
	for(i=0, j=9 ; i<10; i++, j--)
	{
		vetor2[j] = vetor1[i];
	}
	
	// Exibindo os n�meros do vetor1 e vetor2
	printf("\nVetor 1 na ordem normal:\n ");
	for(i=0; i<10;  i++)
	{
		printf("%i\t", vetor1[i]);
	}
	printf("\n");
	
	printf("Vetor 2 na ordem inversa:\n ");
	for(i=0; i<10; i++)
	{
		printf("%i\t", vetor2[i]);
	}
	printf("\n");
	
	// Verificando e mostrando as posi��es onde os numeros sao iguais nos dois vetores
	printf("\nPosicoes com numeros iguais nos dois vetores: ");
	for(i=0; i<10; i++)
	{
		if(vetor1[i] == vetor2[i])
		{
			printf("%i", i);
		}
	}
	
	return 0;
}
