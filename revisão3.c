#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int A,B,C;
    printf("Insira um n�mero:");
    scanf("%d",&A);
    printf("\nInsira um n�mero:");
    scanf("%d",&B);
    printf("\nInsira um n�mero:");
    scanf("%d",&C);
    if (A>C&&A>B)
    {
        if (C>B)
        {
            printf("\no maior valor � %d",A);
            printf("\no segundo maior � %d",C);
            printf("\no �ltimo � %d",B);
        }
            else
            {
            printf("\no maior valor � %d",A);
            printf("\no segundo maior � %d",B);
            printf("\no �ltimo � %d",C);
            }
        }
        if (C>A&&C>B)
        {
            if(A>B)
            {
            printf("\no maior valor � %d",C);
            printf("\no segundo maior � %d",A);
            printf("\no �ltimo � %d",B);
            }
            else
            {
            printf("\no maior valor � %d",C);
            printf("\no segundo maior � %d",B);
            printf("\no �ltimo � %d",A);
            }
        }
    if (B>A&&B>C)
    {
        if (C>A)
        {
            printf("\no maior valor � %d",B);
            printf("\no segundo maior � %d",C);
            printf("\no �ltimo � %d",A);
        }
        else
        {
            printf("\no maior valor � %d",B);
            printf("\no segundo maior � %d",A);
            printf("\no �ltimo � %d",C);
        }
    }

    return 0;
}
