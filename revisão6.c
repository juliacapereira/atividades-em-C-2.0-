#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "portuguese");
    float hmes,salh,saltotal;
    printf("total de horas trabalhadas no m�s?");
    scanf("%f",&hmes);
    printf("qual o sal�rio por hora?");
    scanf("%f",&salh);

    if (hmes>160)
    {
        saltotal=((hmes-160)*(salh*1.5))+(160*salh);
    }
    else{
        saltotal=hmes*salh;
    }
    printf("o salario total � de R$%.2f",saltotal);
    return 0;
}
