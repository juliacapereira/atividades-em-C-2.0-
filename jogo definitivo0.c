#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main()
{
    setlocale(LC_ALL,"portuguese");

    int opcao, tentativa, senha, acertos, dica=0;
    int d1,d2,d3,d4,s1,s2,s3,s4;
    int senhacorreta;
    srand(time(NULL));

    do
    {
        printf("\t\t\t\t\t====================================\n");
        printf("\t\t\t\t\t-=-=Bem-Vindo ao Jogo Malígno!!!=-=-\n");
        printf("\t\t\t\t\t====================================\n\n\n");

        acertos = 0;

        printf("\t\t\t\t\tTecle:\n\t\t\t\t\t(1) para começar\n\t\t\t\t\t(2) para regras\n\t\t\t\t\t(3) para sair\n\t\t\t\t\t\tAqui: ");
        scanf("%d",&opcao);
        switch(opcao)
        {

        case 1:

            senhacorreta = 1000 + rand() % 9000;

                for(tentativa = 0; tentativa<=10; tentativa++)
                {
                    system("cls");

                    if(tentativa!=0)
                    {
                        if(senha / 1000 == 0 || senha / 10000 >= 1)
                        {
                            system("cls");
                            printf("\t\t\t\t\tPor favor, digite 4 caracteres.\n");
                            tentativa--;
                        }
                        if(senha < 0)
                        {
                            system("cls");
                            printf("\t\t\t\t\tPor favor, use números positivos.\n");
                            tentativa--;
                        }

                        d1 = senhacorreta / 1000;
                        d2 = (senhacorreta / 100) % 10;
                        d3 = (senhacorreta / 10) % 10;
                        d4 = senhacorreta % 10;

                        s1 = senha / 1000;
                        s2 = (senha / 100) % 10;
                        s3 = (senha / 10) % 10;
                        s4 = senha % 10;

                        if(senha / 1000 > 0 && senha / 10000 == 0)
                        {
                        if(d1 == s1)
                        {
                            acertos++;
                            printf("\t\t\t\t\t\Código atual: %d ",s1);
                        }
                        else
                        {
                            printf("\t\t\t\t\t\Código atual: _ ");
                        }
                        if(d2 == s2)
                        {
                            acertos++;
                            printf("%d ",s2);
                        }
                         else
                        {
                            printf("_ ");
                        }
                        if(d3 == s3)
                        {
                            acertos++;
                            printf("%d ",s3);
                        }
                         else
                        {
                            printf("_ ");
                        }
                        if(d4 == s4)
                        {
                            acertos++;
                            printf("%d \n",s4);
                        }
                         else
                        {
                            printf("_ \n");
                        }
                        }

                        if(tentativa > 4)
                        {
                            dica=0;
                            if((dica<1)&&(d1!=s1))
                            {
                                if(d1%2==0)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O quarto digito (milhar) é par\n");
                                    dica++;
                                }
                                else
                                {
                                    printf("\t\t\t\t\t\=> DICA: O quarto digito (milhar) é ímpar\n");
                                    dica++;
                                }
                                if(d1<=5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O quarto digito (milhar) é menor que ou igual a 5\n");
                                    dica++;
                                }
                                if(d1>5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O quarto digito (milhar) é maior que 5\n");
                                    dica++;
                                }
                            }

                            if((dica<1)&&(d2!=s2))
                            {
                                if (d2%2==0)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O terceiro digito (centena) é par\n");
                                    dica++;
                                }
                                else
                                {
                                    printf("\t\t\t\t\t\=> DICA: O terceiro digito (centena) é ímpar\n");
                                    dica++;
                                }
                                if(d2<=5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O terceiro digito (centena) é menor que ou igual a 5\n");
                                    dica++;
                                }
                                if(d2>5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O terceiro digito (centena) é maior que 5\n");
                                    dica++;
                                }
                            }

                             if((dica<1)&&(d3!=s3))
                            {
                                if (d3%2==0)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O segundo digito (dezena) é par\n");
                                    dica++;
                                }
                                else
                                {
                                    printf("\t\t\t\t\t\=> DICA: O segundo digito (dezena) é ímpar\n");
                                    dica++;
                                }
                                if(d3<=5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O segundo digito (dezena) é menor que ou igual a 5\n");
                                    dica++;
                                }
                                if(d3>5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O segundo digito (dezena) é maior que 5\n");
                                    dica++;
                                }
                            }

                            if((dica<1)&&(d4!=s4))
                            {
                                if (d4%2==0)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O primeiro digito (unidade) é par\n");
                                    dica++;
                                }
                                else
                                {
                                    printf("\t\t\t\t\t\=> DICA: O primeiro digito (unidade) é ímpar\n");
                                    dica++;
                                }
                                if(d4<=5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O primeiro digito (unidade) é menor que ou igual a 5\n");
                                    dica++;
                                }
                                if(d4>5)
                                {
                                    printf("\t\t\t\t\t\=> DICA: O primeiro digito (unidade) é maior que 5\n");
                                    dica++;
                                }
                            }

                        }

                        printf("\t\t\t\t\t\Você acertou %d dígito(s)!\n",acertos);
                    }
                    if(acertos == 4)
                    {
                        system("cls");
                        printf("\t\t\t\t\t\=>PARABÉNS!!!!\n\t\t\t\t\t\=>Você acertou o código %d em %d tentativas",senhacorreta,tentativa);
                        printf("\n\t\t\t\t\t\=>Tecle (1) para retornar ao menu\n\t\t\t\t\t\t\Aqui: ");
                        scanf("%d",&opcao);

                        while (opcao != 1)
                        {
                            printf("\n\t\t\t\t\t\=>Esse número é inválido!\n\t\t\t\t\t\=>Digite (1) para voltar: ");
                            scanf("%d",&opcao);
                        }
                        system("cls");
                        break;
                    }

                    if(tentativa == 10 && acertos < 4)
                    {
                        system("cls");
                        printf("\t\t\t\t\t\SUAS TENTATIVAS ACABARAM!\n\t\t\t\t\t\Que pena, você perdeu.\n");
                        printf("\t\t\t\t\t\O código correto era %d\n", senhacorreta);
                        printf("\n\t\t\t\t\t\=>Tecle (1) para voltar ao menu\n\t\t\t\t\t\t\Aqui: ");
                        scanf("%d",&opcao);

                        while (opcao != 1)
                        {
                            printf("\n\t\t\t\t\t\=>Esse número é inválido!\n\t\t\t\t\t\=>Digite (1) para voltar: ");
                            scanf("%d",&opcao);
                        }
                        system("cls");
                        break;
                    }

                    if(tentativa < 10)
                    {
                        printf("\t\t\t\t\t\=>Digite uma senha de quatro números\n\t\t\t\t\t\=>Você está na %d tentativa!: ",(tentativa + 1));
                        acertos = 0;
                        scanf("%d",&senha);
                    }
                }
            break;


        case 2:
            system("cls");
            printf("\t\t\t\t\t\=>REGRAS DO JOGO:\n");
            printf("\t\t\t\t\t\=>Um número de 4 dígitos é gerado aleatoriamente;\n\t\t\t\t\t\=>O jogador deve adivinhar o número em 10 tentativas;\n\t\t\t\t\t\=>O jogador não deve usar números negativos;\n\t\t\t\t\t\=>O jogador não deve usar qualquer caractere que não seja númerico;\n\t\t\t\t\t\=>Após a quinta tentativa, o jogo irá te dar dicas.\n");
            printf("\n\t\t\t\t\t\t\Tecle 1 para voltar:");
            scanf("%d",&opcao);

            while (opcao!=1)
            {
                printf("\n\t\t\t\t\t\=>Esse número é inválido!\n\t\t\t\t\t\=>Digite (1) para voltar: ");
                scanf("%d",&opcao);
            }
                system("cls");
                break;

        case 3:
            exit(0);
            break;

        default:
            system("cls");
            printf("\t\t\t\t\t\Opção inexistente! Tente novamente\n\n");
            break;
        }
    }while(opcao!=3);
    return 0;
}
