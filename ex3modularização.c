/*Elabore uma função que recebe dois valores inteiros: a e b, e escreve os números pares no intervalo de "a"
a "b", inclusive ambos se estes forem pares. A rotina deve funcionar mesmo que "a" seja maior que "b".
Os valores a e b devem ser lidos no programa principal.
Ex1: a=2 e b= 7, escrever 2,4,6; Ex2: a= 10 b=5, escrever: 6,8,10.*/
#include<stdio.h>
#include<stdlib.h>

void impressao(int a, int b)
{
    int i, maior=b,menor=a;
    if(a>b)
    {
        maior=a;
        menor=b;
    }
    for(i=menor;i<=maior;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int a,b;
    printf("Insira um valor para a:");
    scanf("%d",&a);
    printf("Insira um valor para b:");
    scanf("%d",&b);
    impressao(a,b);
    return 0;
}
