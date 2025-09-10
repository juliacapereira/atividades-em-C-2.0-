#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

#define tam 10

int main()
{

    int matriz[tam][tam];
    int copia[tam][tam];
    int i, j, vivi = 0, gen,cont = 1;
    setlocale (LC_ALL, "portuguese");
    //gerando matriz aleatória

    srand(time(NULL));

    for(i = 0; i < tam; i++)
    {

        for(j = 0; j < tam; j++)
        {
            matriz[i][j] = rand() % 2;
        }

    }

    //imprimir matriz original

    printf("\nmatriz original (geração 0):\n\n");

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

    //perguntar quantas gerações você quer

    do
    {
        printf("\ndigite quantas gerações do jogo você quer ver (valores acima de 0 apenas)\n\t=> ");
        scanf("%d",&gen);

    } while(gen < 1);




    do
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
                        if(matriz[i - 1][j + 1] == 1)
                        {
                            vivi++;
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
                        copia[i][j]= 0;
                }
                else
                {
                    if(vivi == 3)
                    {
                        copia[i][j] = 1;
                    }
                    else
                        copia[i][j] = 0;
                }
            }
        }

        //imprimir a matriz cópia

        printf("geração %d\n\n",cont);

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

        //transformar a matriz original na matriz copia

        for(i = 0; i < tam; i++)
        {

            for(j = 0; j < tam; j++)
            {
                matriz[i][j] = copia[i][j];
            }

        }

        gen--;
        cont++;

        Sleep(1000);

    } while(gen > 0);

    printf("tchau, brigado\n");
}
