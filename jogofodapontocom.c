#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <locale.h>
#define tam 10
#define tem 10

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[tam][tem];
    int copia[tam][tem];
    int i, j, vivi = 0, gen,cont = 1;
    int sozinho;

    srand(time(NULL));

    for(i = 0; i < tam; i++)
    {

        for(j = 0; j < tem; j++)
        {
            matriz[i][j] = rand() % 2;
        }
    }

    printf("\naperte 1 para que o jogo rode sozinho\n\t=> ");
    scanf("%i",&sozinho);

    do
    {
        printf("\ndigite quantas gera��es do jogo voc� quer ver (valores acima de 0 apenas)\n\t=> ");
        scanf("%d",&gen);

    } while(gen < 1);

    while(gen > 0)
    {
        system("cls");

        printf("\ngera��o %i:\n\n", cont - 1);

        for (i = 0; i < tam; i++)
        {

            for(j = 0; j < tem; j++)
            {
                if(matriz[i][j] == 1)
                {
                    printf("8 ");
                }
                else
                {
                    printf("- ");
                }
            }
            printf("\n");
        }

        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");

        for(i = 0; i < tam; i++)
        {
            for(j = 0; j < tem; j++)
            {
                vivi = 0;

                if(j - 1 >= 0)
                {
                    if(matriz[i - 1][j - 1] == 1 && i - 1 >= 0)
                    {
                        vivi++;
                    }
                    if(matriz[i][j - 1] == 1)
                    {
                        vivi++;
                    }
                    if(matriz[i + 1][j - 1] == 1 && i + 1 <= tam - 1)
                    {
                        vivi++;
                    }
                }



                if(matriz[i - 1][j] == 1 && i - 1 >= 0)
                {
                    vivi++;
                }

                if(matriz[i + 1][j] == 1 && i + 1 <= tam - 1)
                {
                    vivi++;
                }


                if(j + 1 <= tem - 1)
                {
                    if(i != 0)
                    {
                        if(matriz[i - 1][j + 1] == 1)
                        {
                            vivi++;
                        }
                    }
                    if(matriz[i][j + 1] == 1)
                    {
                        vivi++;
                    }
                    if(matriz[i + 1][j + 1] == 1)
                    {
                        vivi++;
                    }
                }

                if(matriz[i][j] == 1)
                {
                    if(vivi > 1 && vivi < 4)
                    {
                        copia[i][j] = 1;
                    }
                    else
                    {
                        copia[i][j]= 0;
                    }
                }
                else
                {
                    if(vivi == 3)
                    {
                        copia[i][j] = 1;
                    }
                    else
                    {
                        copia[i][j] = 0;
                    }
                }
            }
        }

        printf("gera��o %i: \n\n",cont);

        for (i = 0; i < tam; i++)
        {

            for(j = 0; j < tem; j++)
            {
                if(copia[i][j] == 1)
                {
                    printf("8 ");
                }
                else
                {
                    printf("- ");
                }
            }
            printf("\n");
        }
        printf("\n");

        for(i = 0; i < tam; i++)
        {

            for(j = 0; j < tem; j++)
            {
                matriz[i][j] = copia[i][j];
            }

        }

        gen--;
        cont++;
        if(sozinho == 1)
        {
            Sleep(700);
        }
        else
        {
            system("pause");
        }

    }
    printf("C�digo finalizado, obrigado por jogar!!!!\n");
    return 0;
}
