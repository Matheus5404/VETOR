# include <stdio.h>
# define TAMANHO 5

/* 05. Escreve um programa que recebe 10 números e armazene estes em um vetor.
Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. 
Se estiver, diga a posição que está. 
Se tiver numeros duplicados, imprimir uma mensagem.        */

// Receber 5 numeros e armazenar em um vetor 
// Verifica se tem numeros duplicados
// Digita novamente o numero para ver se esta dentro do vetor
// Se estiver a posição que o numero esta

int main()
{
	int vetor[TAMANHO];
	int i, j, numero;
	int posicao;
	int encontrado, duplicado = 0;
	
	for(i=0 ; i<TAMANHO ; i++)
	{
		do
		{
			// Recebe 5 numeros e armazena em um vetor
			printf("Digite o indice de v[%i]: ", i);
			scanf("%i", &vetor[i]);
			
			// Verificar se o numero ja foi digitado novamente
			duplicado = 0;
		
			for(j=0; j<i ; j++)
			{
				if(vetor[i] == vetor[j])
				{
					duplicado = 1;
					printf("\nNumero duplicado! Digite um numero diferente.\n");
				}
			}
			
		}while(duplicado == 1);
	}
	
	// Se for digitado dois numeros iguais, vai imprimir os numeros digitados nas respectivas posicoes
	for(i=0 ; i<TAMANHO ; i++)
	{
		for(j= i+1 ; j<TAMANHO ; j++)
		{
			if(vetor[i] == vetor[j])
			{
				duplicado = 1;
				printf("\nO numero %i esta no vetor nas posicoes %i e %i", vetor[i], i+1, j+1);
			}
		}
	}
	
	// Pede ao usuario para digitar um numero para verificar se o numero digitado anteriormente esta dentro do vetor
		do
		{
			// Se encontrado for falso, ou seja nao achou nenhum numero, digite um numero para verificar se esta no vetor
			encontrado = 0;	
			
			printf("\nDigite um numero para verificar se esta no vetor: ");
			scanf("%i", &numero);
			
			i = 0;
			
			do
			{
				if(vetor[i] == numero)
				{
					encontrado = 1;
					posicao = i+1;
				}
				
				i++;
				
			}while(i < TAMANHO && encontrado == 0);
			
			// Posicao do indice do vetor de acordo com o numero
			if(encontrado)
			{
				printf("\nO numero %i esta no vetor na posicao %i ", numero, posicao);
			}
			else
			{
				printf("\nO numero nao esta no vetor, Digite Novamente", numero);
			}
		}while(!encontrado); // ! = sinal de valor inverso
		
	return 0;
}
