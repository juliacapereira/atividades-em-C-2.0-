/*uma matriz � sim�trica em rela��o a diagonal principal se todos os elementos A( i , j) = A( j , i) para quaisquer
valores de i e j. Elabore um programa que leia uma matriz 5x5 e verifique se ela � sim�trica*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int m[5][5],i,j,simetrica;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("insira um valor para a posi��o [%d][%d]:",i,j);
            scanf("%d",&m[i][j]);
        }
    }
   for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (m[i][j] == m[j][i])
            {
                simetrica = 0;
                break; // Pode sair do la�o interno
            }
        }
        if (!simetrica)
        {
            break; // Pode sair do la�o externo
        }
    }

    // Resultado
    if (simetrica==0)
    {
        printf("\nA matriz � sim�trica.\n");
    }
    else
    {
        printf("\nA matriz n�o � sim�trica.\n");
    }

    return 0;
}

