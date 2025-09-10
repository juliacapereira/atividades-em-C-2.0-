#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int A,B,C;
    printf("Insira um número:");
    scanf("%d",&A);
    printf("\nInsira um número:");
    scanf("%d",&B);
    printf("\nInsira um número:");
    scanf("%d",&C);
    if (A>C&&A>B)
    {
        if (C>B)
        {
            printf("\no maior valor é %d",A);
            printf("\no segundo maior é %d",C);
            printf("\no último é %d",B);
        }
            else
            {
            printf("\no maior valor é %d",A);
            printf("\no segundo maior é %d",B);
            printf("\no último é %d",C);
            }
        }
        if (C>A&&C>B)
        {
            if(A>B)
            {
            printf("\no maior valor é %d",C);
            printf("\no segundo maior é %d",A);
            printf("\no último é %d",B);
            }
            else
            {
            printf("\no maior valor é %d",C);
            printf("\no segundo maior é %d",B);
            printf("\no último é %d",A);
            }
        }
    if (B>A&&B>C)
    {
        if (C>A)
        {
            printf("\no maior valor é %d",B);
            printf("\no segundo maior é %d",C);
            printf("\no último é %d",A);
        }
        else
        {
            printf("\no maior valor é %d",B);
            printf("\no segundo maior é %d",A);
            printf("\no último é %d",C);
        }
    }

    return 0;
}
