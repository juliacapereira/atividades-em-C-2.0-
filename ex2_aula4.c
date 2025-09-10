/*Elabore um programa que leia um número e imprima todos os números divisíveis por 4 que sejam menores que este número lido*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    int N,i;
    printf("Digite um numero:");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        if(i%4==0)
        {
            printf("\n\o numero %d é divisível por 4 e menor que %d", i, N);
        }
        else
        {
            printf("\no numero %d não é divisível por 4", i);
        }
    }
    return 0;
}
