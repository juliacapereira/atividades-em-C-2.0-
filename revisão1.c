#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "portuguese");
    float A,B,C,soma=0;
    printf("Digite um numero:");
    scanf("%f",&A);
    printf("\nDigite um numero:");
    scanf("%f",&B);
    soma=A+B;
    printf("\nDigite um numero:");
    scanf("%f",&C);
    if (C>soma)
    {
        printf("\nA soma é %2.f e ela é menor que %2.f",soma,C);
    }
        if(C==soma)
        {
            printf("\nA soma é %2.f e ela é igual a %2.f",soma,C);
        }
    else{
        printf("\nA soma é %2.f e ela é maior que %2.f",soma,C);
    }
    return 0;
}
