/*Fazer um programa em C para ler um vetor de inteiros positivos de 15 posições, no máximo. Imprimir a
quantidade de números pares e a quantidade de múltiplos de 5*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int A[15],p=0,m=0,tam,i;
    printf("digite o tamanho: ");
    scanf("%d",&tam);
    for(i=0;i<tam;i++)
    {
        printf("insira um valor para posição %d: ",i);
        scanf("%d",&A[i]);
        printf("\n");
        if(A[i]%2==0)
        {
            p++;
        }
        if (A[i]%5==0)
        {
            m++;
        }
    }
    printf("\n Há %d numeros pares e %d numeros multiplos de 5",p,m);
    return 0;
}
