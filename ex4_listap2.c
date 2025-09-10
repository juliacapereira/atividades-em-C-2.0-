#include<stdio.h>
#include<locale.h>
/*Elaborar um programa que leia um vetor de no máximo 15 elementos inteiros. O programa deverá imprimir
o vetor e informar quantos números são maiores que 30.*/
int main()
{
    int i,n,vet[15],m=0;
    printf("insira o tam do vetor: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("insira o valor p vet[%d]: ",i);
        scanf("%d",&vet[i]);
        if(vet[i]>30)
        {
            m++;
        }
    }
    printf("O vetor vet e ");
    for(i=0;i<n;i++)
    {
        printf("%d ",vet[i]);
    }
    printf("\n ha %d numeros acima de 30",m);
    return 0;

}
