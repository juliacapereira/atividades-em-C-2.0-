/*Elabore um programa que contenha duas fun��es:
� Uma fun��o que l� um n�mero real
� E uma fun��o que a partir do n�mero real lido retorna a parte
fracion�ria do mesmo*/
#include<stdio.h>
#include<stdlib.h>

float ler ()
{
    float A;
    printf("Insira um numero:");
    scanf("%f",&A);
    return A;
}
float partefrac(float B)
{
    int valor;
    float resto;
    valor=(int)B;
    resto=B-valor;
    return resto;
}
int main()
{
    float num;
    float frac;
    num=ler();
    frac=partefrac(num);
    printf("%.2f",frac);
}

/*float ler() {
    float A;
    printf("Insira um numero: ");
    scanf("%f", &A);
    return A;
}

// Fun��o que retorna a parte fracion�ria de um n�mero real
float parteFracionaria(float B) {
    int parteInteira = (int)B;
    float fracionaria = B - parteInteira;
    return (fracionaria >= 0) ? fracionaria : -fracionaria; // sempre positiva
}

int main() {
    float num, frac;

    num = ler();
    frac = parteFracionaria(num);

    printf("Parte fracionaria de %.2f � %.2f\n", num, frac);

    return 0;
}*/
