#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define tam 10
#define senhacorreta 3982


int main ()
{
    setlocale (LC_ALL,"portuguese");

    int senha,tentativa,opcao = 0;
    int d1,d2,d3,d4,s1,s2,s3,s4;
    int acertos=0;
    //int senhacorreta= 1000 + rand() % 9000;

    do

    {
            printf("====================================");
            printf("\t\n-=-=Bem-Vindo ao Jogo Maligno!!!=-=-");
            printf("\t\n====================================\n\n\n");

            printf("tecle:\n(1) para começar\n(2) para regras\n(3) para sair\n\t\naqui: ");
            scanf("%i",&opcao);

            switch(opcao)
            {

                case 1:
                    system("cls");
                        for(tentativa = 0; tentativa <= 9; tentativa++)
                        {
                        if(tentativa != 0)
                            printf("você acertou %i dígito(s)!\n",acertos);
                        printf("=>digite uma senha de quatro números\n=>você está na %i tentativa!: ",(tentativa + 1));
                        acertos = 0;
                        scanf("%i",&senha);

                        //confere se a pessoa digitou 4 números

                        if(senha / 1000 == 0 || senha / 10000 >= 1)
                        {
                            printf("quantidade de caracteres errada!\n");
                            system("pause");
                            tentativa--;

                        }

                        //comparar o que você digitou com a senha

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
                                printf("%d _ _ _",d1);
                            }
                            if(d2 == s2)
                            {
                                acertos++;
                                printf("_ %d _ _",d2);
                            }
                            if(d3 == s3)
                            {
                                acertos++;
                                printf("_ _ %d _",d3);
                            }
                            if(d4 == s4)
                            {
                                acertos++;
                                printf("_ _ _ %d",d4);
                            }

                        system("cls");

                        //se acertou

                            if(acertos == 4)
                            {
                                system("cls");
                                printf("=>Parabéns viu\n");
                                printf("%d %d %d %d",d1,d2,d3,d4);

                                printf("=>tecle 1 para sair do jogo\n=>2 para voltar à tela inicial\n\taqui: ");
                                scanf("%i",&opcao);

                                if(opcao == 1)
                                {
                                    system("cls");
                                    exit(0);
                                }
                                else
                                {
                                    if(opcao == 2)
                                    {

                                    }
                                }
                            }

                        //se errou

                            if(tentativa == 9 && acertos < 4)
                            {
                                system("cls");
                                printf("voce nao desvendou o enigma\nseu lixo\n");
                                printf("O número correto era %i\n", senhacorreta);
                            }

                        }
                    break;

                //outras opções do menu

                case 2:

                    system("cls");
                    printf("REGRAS DO JOGO:\n=> Um número de 4 dígitos é gerado aleatoriamente;\n=> O jogador deve adivinhar o número em 10 tentativas;\n=> A partir da quinta tentativa, o jogo te dará dicas.\n\n\tTecle (3) para voltar: ");
                    scanf("%i",&opcao);
                    if (opcao==3)
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
                    printf ("Número inválido.\n\n\n");


            }

    } while(opcao > 2);



return 0;
}
