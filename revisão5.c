#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int A,B,C,ano=2025,mes=03,dia=29;
    printf("Em qual ano você nasceu?");
    scanf("%d",&A);
    printf("Em qual mês você nasceu? (em numero)");
    scanf("%d",&B);
    printf("Qual dia vc nasceu?");
    scanf("%d",&C);
    if (B>mes)
    {
        ano=ano-A-1;
        if(dia>C)
        {
            mes=mes+B-1;
            dia=dia-C;
        }
            else
            {
                mes=mes-B;
                dia=C-dia;
            }
    }
    else
    {
        ano=ano-A;
        if(dia>C)
        {
            mes=mes+B-1;
            dia=dia-C;
        }
            else
            {
                mes=mes-B;
                dia=C-dia;
            }
    }
    printf("Você está vivo há %d anos, %d meses e %d dias", ano,mes,dia);
    return 0;


}
