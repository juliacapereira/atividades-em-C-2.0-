#include<stdio.h>
#include<stdlib.h>
#define tam 10
int main ()
{
    int vet[tam],i,vet2[tam];
    for (i=0;i<tam;i++)
    {
        printf("digite um valor:");
        scanf("%d",&vet[i]);
        vet2[i]=vet[i]*vet[i];
    }
    for (i=0;i<tam;i++)
    {
        printf("\nB[%d]=%d",i,vet2[i]);
    }
}
