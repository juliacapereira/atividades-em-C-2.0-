#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    float hraula,auladada,INSS,sbruto,descinss,sfinal;
    printf("Qual o valor da hora aula?");
    scanf("%f",&hraula);
    printf("Qual o n�mero de aulas por m�s?");
    scanf("%f",&auladada);
    printf("Qual o percentual de desconto por m�s?");
    scanf("%f",&INSS);

    sbruto=(hraula*auladada);
    descinss=(sbruto*INSS)/100;
    sfinal=sbruto-descinss;

    printf("O sal�rio final � de R$%.2f",sfinal);
    return 0;
}
