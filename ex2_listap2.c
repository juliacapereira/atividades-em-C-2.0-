#include<stdio.h>
#include<locale.h>
/*Fazer um programa que faz a leitura de um vetor X com N inteiros, com tamanho máximo igual a 20 e N
deverá ser lido. Multiplica cada elemento do vetor por um valor K (K também deverá ser lido). Imprimir o
vetor lido, o valor da variável K e o vetor multiplicado por K.
O produto por K é dado por: Y[i] = X[i] * K; para i = 0, 1, 2, ..., N-1*/

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,N,k,X[20];
    printf("Insira o tam do vet:");
    scanf("%d",&N);
    printf("Insira o valor para k:");
    scanf("%d",&k);
    for(i=0;i<N;i++)
    {
        printf("Insira o valor para posição X[%d]:",i);
        scanf("%d",&X[i]);
    }
    printf("\nVetor original: ");
    for(i=0;i<N;i++)
    {
        printf("%d ",X[i]);
    }
    printf("\nValor de k: %d",k);
    printf("\nVetor multiplicado por k: ");
    for(i=0;i<N;i++)
    {
        printf("%d ",(X[i]*k));
    }
    return 0;

}
