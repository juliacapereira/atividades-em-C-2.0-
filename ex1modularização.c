/*Elabore um programa que possua uma fun��o que recebe um valor
inteiro e verifica se o valor � par. A fun��o deve retornar 1 se o
n�mero for par e 0 se for �mpar e o resultado dever� ser impresso no
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
