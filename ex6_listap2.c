/*Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de
números negativos e a soma dos números positivos desse vetor*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int i, j=0, s=0, A[10];
    for(i=0;i<10;i++)
    {
        printf("Insira um valor p posição %i: ",i);
        scanf("%d",&A[i]);
        if(A[i]<0)
        {
            j++;
        }
        if(A[i]>=0)
        {
            s+=A[i];
        }
    }
    printf("A soma dos numeros positivos é %d e a quantidade de numeros negativos é %d",s,j);
    return 0;
}
