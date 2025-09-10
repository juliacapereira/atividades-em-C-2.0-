#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

int main()
{
    setlocale(LC_ALL,"portuguese");

    int opcao, tentativa, senha, dica = 0, acertos = 0;
    int d1,d2,d3,d4,s1,s2,s3,s4;
    int senhacorreta = 1000 + rand() % 9000;

    do
    {
        printf("====================================");
        printf("\t\n-=-=Bem-Vindo ao Jogo Malígno!!!=-=-");
        printf("\t\n====================================\n\n\n");

        acertos = 0;

        printf("tecle:\n(1) para começar\n(2) para regras\n(3) para sair\n\t\naqui: ");
        scanf("%i",&opcao);

        switch(opcao)
        {

        case 1:
                srand(time(NULL));

                int senhacorreta = 1000 + rand() % 9000;

                for(tentativa = 0; tentativa<=10; tentativa++)
                {
                    system("cls");

                    if(tentativa != 0)
                    {

                        if(senha / 1000 == 0 || senha / 10000 >= 1)
                        {
                            system("cls");
                            printf("Por favor, digite 4 caracteres.\n\n");
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

                        if(d1 == s1)
                        {
                            acertos++;
                            printf("Código atual: %d ",s1);
                        }
                        else
                        {
                            printf("Código atual: _ ");
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

                        if(tentativa > 4)
                        {
                            dica = 0;
                            if((dica < 1) && (d1 != s1))
                            {

                                if (d1 %2 == 0)
                                {
                                    printf("=> DICA: O quarto digito (milhar) é par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O quarto digito (milhar) é ímpar\n");
                                }
                                dica++;
                            }
                            //if((dica < 1) && (d1 != s1))
                            if((dica < 1) && (d2 != s2))
                            {
                                if (d2 % 2 == 0)
                                {
                                    printf("=> DICA: O terceiro digito (centena) é par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O terceiro digito (centena) é ímpar\n");
                                }
                                dica++;
                            }
                            if((dica<1) && (d3!=s3))
                            {
                                if (d3 % 2 == 0)
                                {
                                    printf("=> DICA: O segundo digito (dezena) é par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O segundo digito (dezena) é ímpar\n");
                                }
                                dica++;
                            }
                            if((dica<1)&&(d4!=s4))
                            {
                                if (d4 % 2 == 0)
                                {
                                    printf("=> DICA: O primeiro digito (unidade) é par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O primeiro digito (unidade) é ímpar\n");
                                }
                                dica++;
                            }
                        }
                        printf("Você acertou %i dígito(s)!\n",acertos);
                    }
                    if(acertos == 4)
                    {
                        system("cls");
                        printf("=>PARABÉNS!!!!\n=>Você acertou o código %d %d %d %d em %d tentativas",d1,d2,d3,d4,tentativa);
                        printf("\n=>Tecle (1) para retornar ao menu\n\n\tAqui: ");
                        scanf("%d",&opcao);

                        while (opcao != 1)
                        {
                            printf ("Esse número é inválido!\nDigite (1) para voltar ");
                            scanf("%d",&opcao);
                        }
                        system("cls");
                        break;
                    }

                    if(tentativa == 10 && acertos < 4)
                    {
                        system("cls");
                        printf("SUAS TENTATIVAS ACABARAM!\nQue pena, você perdeu.\n");
                        printf("O número correto era %d\n", senhacorreta);
                        printf("\n=>Tecle (1) para voltar ao menu\n\n\tAqui: ");
                        scanf("%d",&opcao);

                        while (opcao != 1)
                        {
                            printf ("Esse número é inválido!\nDigite (1) para voltar ");
                            scanf("%d",&opcao);
                        }
                        system("cls");
                        break;
                    }

                    if(tentativa < 10)
                    {
                        printf("=>Digite uma senha de quatro números\n=>Você está na %i tentativa!: ",(tentativa + 1));
                        acertos = 0;
                        scanf("%i",&senha);
                    }
                }
            break;


        case 2:
            system("cls");
            printf("=>REGRAS DO JOGO\n");
            printf("=> Um número de 4 dígitos é gerado aleatoriamente;\n=> O jogador deve adivinhar o número em 10 tentativas;\n=> A partir da quinta tentativa, o jogo te dar dicas.\n");
            printf("\n\tTecle 1 para voltar: \n");
            scanf("%i",&opcao);

            while (opcao != 1)
            {
                printf ("Esse número é inválido!\nDigite (1) para voltar ");
                scanf("%d",&opcao);
            }
                system("cls");
                break;

        case 3:
            exit(0);
            break;

        default:
            system("cls");
            printf("Opção inexistente! tente novamente\n\n");
            system("pause");
            system("cls");
            break;
        }

    }while(opcao!=3);

    return 0;
}
