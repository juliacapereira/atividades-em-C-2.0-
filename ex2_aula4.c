/*Elabore um programa que leia um n�mero e imprima todos os n�meros divis�veis por 4 que sejam menores que este n�mero lido*/
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
            printf("\n\o numero %d � divis�vel por 4 e menor que %d", i, N);
        }
        else
        {
            printf("\no numero %d n�o � divis�vel por 4", i);
        }
    }
    return 0;
}
