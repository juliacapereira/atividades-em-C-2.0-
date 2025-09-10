#include<stdio.h>
#include<stdlib.h>
#define tam 10

int main ()
{
    int v[tam],A,B,C,i,a=0,b=0,c=0;
    for (i=0;i<tam;i++)
    {
        printf ("digite um valor:");
        scanf("%d",&v[i]);
    }
    printf("qual o valor de A?");
    scanf("%d",&A);
    printf("qual o valor de B?");
    scanf("%d",&B);
    printf("qual o valor de C?");
    scanf("%d",&C);
    for(i=0;i<tam;i++)
    {
        if (v[i]==A)
        {
            a++;
        }
        if(v[i]==B)
            {
                b++;
            }

            if(v[i]==C)
            {
                c++;
            }
    }
    printf("\nC aparece %d vezes no vetor, B aparece %d vezes no vetor e A aparece %d vezes no vetor",c,b,a);
    return 0;
}
