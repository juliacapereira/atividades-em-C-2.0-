#include<stdio.h>
#include<stdlib.h>
#define tam 6
int main()
{
    int A[tam],i,soma=0;
    for(i=0;i<tam;i++)
    {
        printf("Insira o valor para A[%d]",i);
        scanf("%d",&A[i]);
    }
    soma=A[0]+A[1]+A[5];
    A[4]=100;
    printf("a soma eh %d",soma);
    for (i=0;i<tam;i++)
    {
        printf("\nA[%d]=%d",i,A[i]);
    }
    return 0;
}
