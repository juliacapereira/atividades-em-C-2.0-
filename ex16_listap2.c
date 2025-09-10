/*Elabore uma função que recebe dois valores inteiros: a e b, e escreve os números pares no intervalo de "a"
a "b", inclusive ambos se estes forem pares. A rotina deve funcionar mesmo que "a" seja maior que "b".
Os valores a e b devem ser lidos no programa principal.
Ex1: a=2 e b= 7, escrever 2,4,6; Ex2: a= 10 b=5, escrever: 6,8,10.
*/
#include<stdio.h>
#include<locale.h>
void escreve (int n,m)
{
    int i;
    if(n>m)
    {
        for(i=m;i<=n;i++)
        {
            if (i%2==0)
            {
                printf("%d ",i);
            }
        }
    }
    if(n<m)
    {
       for(i=n;i<=m;i++)
        {
            if (i%2==0)
            {
                printf("%d ",i);
            }
        }
    }
}
int main()
{
    int a,b;
    setlocale(LC_ALL,"portuguese");
    printf("insira um valor para a: ");
    scanf("%d",&a);
    printf("insira um valor para b: ");
    scanf("%d",&b);
    escreve(a,b);
    return 0;
}


