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
        printf("\t\n-=-=Bem-Vindo ao Jogo Mal�gno!!!=-=-");
        printf("\t\n====================================\n\n\n");

        acertos = 0;

        printf("tecle:\n(1) para come�ar\n(2) para regras\n(3) para sair\n\t\naqui: ");
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
                            printf("C�digo atual: %d ",s1);
                        }
                        else
                        {
                            printf("C�digo atual: _ ");
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
                                    printf("=> DICA: O quarto digito (milhar) � par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O quarto digito (milhar) � �mpar\n");
                                }
                                dica++;
                            }
                            //if((dica < 1) && (d1 != s1))
                            if((dica < 1) && (d2 != s2))
                            {
                                if (d2 % 2 == 0)
                                {
                                    printf("=> DICA: O terceiro digito (centena) � par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O terceiro digito (centena) � �mpar\n");
                                }
                                dica++;
                            }
                            if((dica<1) && (d3!=s3))
                            {
                                if (d3 % 2 == 0)
                                {
                                    printf("=> DICA: O segundo digito (dezena) � par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O segundo digito (dezena) � �mpar\n");
                                }
                                dica++;
                            }
                            if((dica<1)&&(d4!=s4))
                            {
                                if (d4 % 2 == 0)
                                {
                                    printf("=> DICA: O primeiro digito (unidade) � par\n");
                                }
                                else
                                {
                                    printf("=> DICA: O primeiro digito (unidade) � �mpar\n");
                                }
                                dica++;
                            }
                        }
                        printf("Voc� acertou %i d�gito(s)!\n",acertos);
                    }
                    if(acertos == 4)
                    {
                        system("cls");
                        printf("=>PARAB�NS!!!!\n=>Voc� acertou o c�digo %d %d %d %d em %d tentativas",d1,d2,d3,d4,tentativa);
                        printf("\n=>Tecle (1) para retornar ao menu\n\n\tAqui: ");
                        scanf("%d",&opcao);

                        while (opcao != 1)
                        {
                            printf ("Esse n�mero � inv�lido!\nDigite (1) para voltar ");
                            scanf("%d",&opcao);
                        }
                        system("cls");
                        break;
                    }

                    if(tentativa == 10 && acertos < 4)
                    {
                        system("cls");
                        printf("SUAS TENTATIVAS ACABARAM!\nQue pena, voc� perdeu.\n");
                        printf("O n�mero correto era %d\n", senhacorreta);
                        printf("\n=>Tecle (1) para voltar ao menu\n\n\tAqui: ");
                        scanf("%d",&opcao);

                        while (opcao != 1)
                        {
                            printf ("Esse n�mero � inv�lido!\nDigite (1) para voltar ");
                            scanf("%d",&opcao);
                        }
                        system("cls");
                        break;
                    }

                    if(tentativa < 10)
                    {
                        printf("=>Digite uma senha de quatro n�meros\n=>Voc� est� na %i tentativa!: ",(tentativa + 1));
                        acertos = 0;
                        scanf("%i",&senha);
                    }
                }
            break;


        case 2:
            system("cls");
            printf("=>REGRAS DO JOGO\n");
            printf("=> Um n�mero de 4 d�gitos � gerado aleatoriamente;\n=> O jogador deve adivinhar o n�mero em 10 tentativas;\n=> A partir da quinta tentativa, o jogo te dar dicas.\n");
            printf("\n\tTecle 1 para voltar: \n");
            scanf("%i",&opcao);

            while (opcao != 1)
            {
                printf ("Esse n�mero � inv�lido!\nDigite (1) para voltar ");
                scanf("%d",&opcao);
            }
                system("cls");
                break;

        case 3:
            exit(0);
            break;

        default:
            system("cls");
            printf("Op��o inexistente! tente novamente\n\n");
            system("pause");
            system("cls");
            break;
        }

    }while(opcao!=3);

    return 0;
}
