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
        printf("\nA soma � %2.f e ela � menor que %2.f",soma,C);
    }
        if(C==soma)
        {
            printf("\nA soma � %2.f e ela � igual a %2.f",soma,C);
        }
    else{
        printf("\nA soma � %2.f e ela � maior que %2.f",soma,C);
    }
    return 0;
}
