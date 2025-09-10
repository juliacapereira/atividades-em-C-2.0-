/*Elabore um programa que possua uma função que recebe um valor
inteiro e verifica se o valor é par. A função deve retornar 1 se o
número for par e 0 se for ímpar e o resultado deverá ser impresso no
programa principal*/
#include<stdio.h>
#include<stdlib.h>

int conferepar (int A)
{
    if(A%2==0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num,c;
    printf("Insira um valor:");
    scanf("%d",&num);
    c=conferepar(num);
    printf("%d",c);
}
