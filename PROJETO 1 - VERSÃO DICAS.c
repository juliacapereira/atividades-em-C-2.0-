#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define tam 10
#define senhacorreta 3982


int main ()
{
    setlocale (LC_ALL,"portuguese");

    int senha,tentativa,opcao = 0,dica=0;
    int d1,d2,d3,d4,s1,s2,s3,s4;
    int acertos=0;
    //int senhacorreta= 1000 + rand() % 9000;

    do

    {
            printf("====================================");
            printf("\t\n-=-=Bem-Vindo ao Jogo Maligno!!!=-=-");
            printf("\t\n====================================\n\n\n");

            printf("tecle:\n(1) para come�ar\n(2) para regras\n(3) para sair\n\t\naqui: ");
            scanf("%d",&opcao);

            switch(opcao)
            {

                case 1:
                    system("cls");
                        for(tentativa = 0; tentativa <= 9; tentativa++)
                        {
                        if(tentativa != 0)
                        {
                             printf("\nvoc� acertou %i d�gito(s)!\n",acertos);
                        }
                        printf("=>Digite uma senha de quatro n�meros\n=>Voc� est� na %d tentativa!: ",(tentativa + 1));
                        acertos = 0;
                        scanf("%d",&senha);

                        //confere se a pessoa digitou 4 n�meros

                        if(senha / 1000 == 0 || senha / 10000 >= 1)
                        {
                            printf("ATEN��O!!!!!!!!!\nQuantidade de caracteres errada!\n");
                            system("pause");
                            tentativa--;

                        }

                        //comparar o que voc� digitou com a senha

                        d1 = senhacorreta / 1000;
                        d2 = (senhacorreta / 100) % 10;
                        d3 = (senhacorreta / 10) % 10;
                        d4 = senhacorreta % 10;

                        s1 = senha / 1000;
                        s2 = (senha / 100) % 10;
                        s3 = (senha / 10) % 10;
                        s4 = senha % 10;

                         if(tentativa>4)
                            {
                                dica=0;
                                if((dica<1)&&(d1!=s1))
                                {

                                    if (d1%2==0)
                                    {
                                        printf("\n=> DICA: O quarto digito (milhar) � par\n");
                                        dica++;
                                    }
                                    else
                                    {
                                        printf("\n=> DICA: O quarto digito (milhar) � �mpar\n");
                                        dica++;
                                    }
                                    /*if (d1<s1)
                                    {
                                        printf("\n=> DICA: O quarto digito (milhar) � menor que %d",s1);
                                    }
                                    else
                                    {
                                        printf("\n=> DICA: O quarto digito (milhar) � menor que %d",s1);
                                    }*/
                                }
                                if((dica<1)&&(d2!=s2))
                                {
                                    if (d2%2==0)
                                    {
                                        printf("\n=> DICA: O terceiro digito (centena) � par\n");
                                        dica++;
                                    }
                                    else
                                    {
                                        printf("\n=> DICA: O terceiro digito (centena) � �mpar\n");
                                        dica++;
                                    }
                                }
                                if((dica<1)&&(d3!=s3))
                                {
                                    if (d3%2==0)
                                    {
                                        printf("\n=> DICA: O segundo digito (dezena) � par\n");
                                        dica++;
                                    }
                                    else
                                    {
                                        printf("\n=> DICA: O segundo digito (dezena) � �mpar\n");
                                        dica++;
                                    }
                                }
                                if((dica<1)&&(d4!=s4))
                                {
                                    if (d4%2==0)
                                    {
                                        printf("\n=> DICA: O primeiro digito (unidade) � par\n");
                                        dica++;
                                    }
                                    else
                                    {
                                        printf("\n=> DICA: O primeiro digito (unidade) � �mpar\n");
                                        dica++;
                                    }
                                }
                            }
                            if(d1 == s1)
                            {
                                acertos++;
                                printf("%d ",s1);
                            }
                            else
                            {
                                printf("_ ");
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
                                printf("%d ",s4);
                            }
                             else
                            {
                                printf("_ ");
                            }

                        /*system("cls");*/



                        //se acertou

                            if(acertos == 4)
                            {
                                system("cls");
                                printf("=>PARAB�NS!!!!\n=>Voc� acertou o c�digo %d %d %d %d em %d tentativas",d1,d2,d3,d4,tentativa+1);

                                printf("\n=>Tecle 1 para sair do jogo\n=>Ou 2 para voltar � tela inicial\n\tAqui: ");
                                scanf("%d",&opcao);

                                if(opcao == 1)
                                {
                                    system("cls");
                                    exit(0);
                                }
                                /*else
                                {
                                    if(opcao == 2)
                                    {
                                        tentativa=10;
                                    }
                                }*/
                            }

                        //se errou

                            if(tentativa == 9 && acertos < 4)
                            {
                                system("cls");
                                printf("SUAS TENTATIVAS ACABARAM!\nQue pena, voc� perdeu.\n");
                                printf("O n�mero correto era %d\n", senhacorreta);
                            }

                        }
                    break;

                //outras op��es do menu

                case 2:

                    system("cls");
                    printf("REGRAS DO JOGO:\n=> Um n�mero de 4 d�gitos � gerado aleatoriamente;\n=> O jogador deve adivinhar o n�mero em 10 tentativas;\n=> A partir da quinta tentativa, o jogo te dar� dicas.\n\n\tTecle (1) para voltar: ");
                    scanf("%d",&opcao);
                    if (opcao==1)
                    {
                     system("cls");
                    }
                    break;

                case 3:
                    system("cls");
                    exit(0);
                    break;

                default:
                    system("cls");
                    printf ("N�mero inv�lido.\n\n\n");


            }

    } while(opcao > 2 || opcao == 1);



return 0;
}
