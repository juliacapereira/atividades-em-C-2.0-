/*uma matriz é simétrica em relação a diagonal principal se todos os elementos A( i , j) = A( j , i) para quaisquer
valores de i e j. Elabore um programa que leia uma matriz 5x5 e verifique se ela é simétrica*/
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
            printf("insira um valor para a posição [%d][%d]:",i,j);
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
                break; // Pode sair do laço interno
            }
        }
        if (!simetrica)
        {
            break; // Pode sair do laço externo
        }
    }

    // Resultado
    if (simetrica==0)
    {
        printf("\nA matriz é simétrica.\n");
    }
    else
    {
        printf("\nA matriz não é simétrica.\n");
    }

    return 0;
}

