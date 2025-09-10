#include<stdio.h>
#include<stdlib.h>
#define tam 10

int main ()
{
    int v[tam],menor=1000, maior=-9999,i;
    for (i=0;i<tam;i++)
    {
        printf ("digite um valor:");
        scanf("%d",&v[i]);
        if (v[i]>maior)
        {
            maior=v[i];
        }
        if (v[i]<menor)
        {
            menor=v[i];
        }
    }
    printf("o maior numero eh %d e o menor eh %d", maior,menor);
    return 0;
}
