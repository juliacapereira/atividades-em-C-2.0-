/*Leia um vetor de 20 posi��es e em seguida um valor X qualquer. Seu programa dever� fazer uma busca do
valor de X no vetor lido e informar a posi��o em que foi encontrado ou se n�o foi encontrado.*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int v[20],x,i,n=0;
    for (i=0;i<20;i++)
    {
        printf("insira o valor para a posi��o %d: ",i);
        scanf("%d",&v[i]);
    }
    printf("\ninsira um valor a ser buscado: ");
    scanf("%d",&x);
    for (i=0;i<20;i++)
    {
        if(v[i]==x)
        {
            printf("\n%d foi encontrado na posi��o %d\n",x,i);
            n++;
        }
    }
    if (n==0)
    {
        printf("\n%d n�o foi encontrado no vetor",x);
    }
    return 0;
}
