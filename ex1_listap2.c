#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,N;
    float X[20],Y[20],Z[20];

    printf("Insira o tamanho desejado:");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        printf("Insira o %d valor do vetor X:",i+1);
        scanf("%f",&X[i]);
        printf("Insira o %d valor do vetor Y:",i+1);
        scanf("%f",&Y[i]);
        Z[i]=X[i]*Y[i];
    }
    printf("\nVetor X: ");
    for(i=0;i<N;i++)
    {
        printf("%.2f ",X[i]);
    }
    printf("\nVetor Y: ");
    for(i=0;i<N;i++)
    {
        printf("%.2f ", Y[i]);
    }
    printf("\nVetor Z: ");
    for(i=0;i<N;i++)
    {
        printf("%.2f ",Z[i]);
    }
    return 0;
}
