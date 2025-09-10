/*Ler 2 vetores de 10 posições cada um e criar um terceiro que a soma dos 2 vetores lidos*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int A[10],B[10],C[10],i,tam;
    do
    {
        printf("insira o tamanho dos vetores: ");
        scanf("%d",&tam);
    } while(tam>10||tam<0);

    for(i=0;i<tam;i++)
    {
        printf("Insira o valor para a posição %d do vetor A: ",i);
        scanf("%d",&A[i]);
        printf("\nInsira o valor para a posição %d do vetor B: ",i);
        scanf("%d",&B[i]);
        printf("\n");
        C[i]=A[i]+B[i];
    }
    printf("\nVetor soma (c); ");
    for(i=0;i<tam;i++)
    {
        printf("%d ",C[i]);
    }
    return 0;
}
