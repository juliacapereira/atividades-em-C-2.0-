#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 10
int main ()
{
    int i,A[tam];
    float media=0;
    for(i=0;i<tam;i++)
    {
        printf("Insira um valor:");
        scanf("%d",&A[i]);
        media+=A[i];
    }
    media/=10;
    printf("A media é de %f",media);
    return 0;
}
