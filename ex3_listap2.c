#include<stdio.h>
#include<locale.h>
/*Fazer um programa que faz a leitura de um vetor X com N reais , com tamanho máximo igual a 20 e N deverá
ser lido. Calcula o somatório de todos os elementos do vetor. Imprimir o vetor lido e o valor do somatório.
O somatório é dado por: S = S + X[i]; para i = 0, 1, 2, ..., N-1*/

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,n,S=0,x[20];
    printf("insira o tamanho do vetor: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("insira o valor de x[%d]: ",i);
        scanf("%d",&x[i]);
        S+=x[i];
    }

    printf("\nVetor x: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\nA soma total foi de %d",S);
    return 0;
}
