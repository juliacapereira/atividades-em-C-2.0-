#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "portuguese");
    float hmes,salh,saltotal;
    printf("total de horas trabalhadas no mês?");
    scanf("%f",&hmes);
    printf("qual o salário por hora?");
    scanf("%f",&salh);

    if (hmes>160)
    {
        saltotal=((hmes-160)*(salh*1.5))+(160*salh);
    }
    else{
        saltotal=hmes*salh;
    }
    printf("o salario total é de R$%.2f",saltotal);
    return 0;
}
