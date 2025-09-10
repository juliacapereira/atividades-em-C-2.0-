#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>
#define tam 10

int main()
{
    setlocale (LC_ALL, "portuguese");
    int matriz[tam][tam];
    int copia[tam][tam];
    char gen[10];
    int i, j, vivi = 0,cont = 1, num;

    srand(time(NULL));

    for(i = 0; i < tam; i++)
    {

        for(j = 0; j < tam; j++)
        {
            matriz[i][j] = rand() % 2;
        }

    }

    printf("\nmatriz original (gera��o 0):\n\n");

    for (i = 0; i < tam; i++)
    {

        for(j = 0; j < tam; j++)
        {
            if(matriz[i][j] == 1)
            {
                printf("V ");
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }

    int flag=1;
    do
    {
        printf("\ndigite quantas gera��es do jogo voc� quer ver (valores acima de 0 apenas)\n\t=> ");
        fflush(stdin);
        gets(gen);
        if(isdigit(gen))
        {
            num=atoi(gen);
            if(num>=1)
            {
                flag=0;
            }

        }

    } while(flag);
    printf("\n\n\tLUCIA %d",num);
    exit(0);

    if(isdigit(gen))
    {
        num=atoi(gen);
        while(num > 0)
        {
            system("cls");

            //checar vizinhos de um elemento

            for(i = 0; i < tam; i++)
            {
                for(j = 0; j < tam; j++)
                {
                    vivi = 0;

                    //coluna 1

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


                    //coluna 2
                    if(matriz[i - 1][j] == 1 && i - 1 >= 0)
                    {
                        vivi++;
                    }

                    if(matriz[i + 1][j] == 1 && i + 1 <= tam - 1)
                    {
                        vivi++;
                    }

                    //coluna 3
                    if(j + 1 <= tam - 1)
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

            printf("gera��o %d\n\n",cont);

            for (i = 0; i < tam; i++)
            {

                for(j = 0; j < tam; j++)
                {
                    if(copia[i][j] == 1)
                    {
                        printf("V ");
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

                for(j = 0; j < tam; j++)
                {
                    matriz[i][j] = copia[i][j];
                }

            }
            num--;
            cont++;
            Sleep(1000);
        }
    }
    else
    {
        while(!isdigit(gen))
        {
            printf("\ndigite quantas gera��es do jogo voc� quer ver (apenas n�meros)\n\t=> ");
            fflush(stdin);
            gets(gen);
        }
    }
    printf("C�digo finalizado, obrigado por jogar!!!!\n");
    return 0;
}
