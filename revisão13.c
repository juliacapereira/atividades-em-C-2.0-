#include<stdio.h>
#include<stdlib.h>
#define tam 5
int main()
{
    int A[tam],B[tam],C[tam],cont=0,media=0,i;
    for(i=0;i<tam;i++)
    {

        printf("Qual sua idade?");
        scanf("%d",&A[i]);
        if (A[i]>50)
        {
            cont++;
        }
         printf("Qual sua altura em cm?");
        scanf("%d",&B[i]);
        if (A[i]>=10&&A[i]<=20)
        {
            media+=B[i];
        }
         printf("Qual seu peso?");
        scanf("%d",&C[i]);
    }
    media/=10;
    printf("Ha %d idosos e a media de altura eh %d",cont,media);
    return 0;
}
