/*Elabore um programa que contenha duas funções:
• Uma função que lê um número real
• E uma função que a partir do número real lido retorna a parte
fracionária do mesmo*/
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

// Função que retorna a parte fracionária de um número real
float parteFracionaria(float B) {
    int parteInteira = (int)B;
    float fracionaria = B - parteInteira;
    return (fracionaria >= 0) ? fracionaria : -fracionaria; // sempre positiva
}

int main() {
    float num, frac;

    num = ler();
    frac = parteFracionaria(num);

    printf("Parte fracionaria de %.2f é %.2f\n", num, frac);

    return 0;
}*/
