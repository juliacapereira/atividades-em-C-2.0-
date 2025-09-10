#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "portuguese");
    int i,N,soma=0,media,A[100];
    printf("Quantos alunos há?");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("\nInsira a nota:");
        scanf("%d",&A[i]);
        soma=soma+A[i];
    }
    media=soma/N;
    printf("\nA média foi de %d",media);
}
