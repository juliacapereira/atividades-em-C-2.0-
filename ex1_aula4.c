/*Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos:
[0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    int N, tf=0, ft=0, sf=0, oh=0;
    do
    {
        printf("DIGITE UM NÚMERO:");
        scanf("%d",&N);
        if(N<=25)
        {
            tf++;
        }
            else
            {
                if(N<=50)
                {
                    ft++;
                }
                    else
                    {
                        if(N<=75)
                        {
                            sf++;
                        }
                            else
                            {
                                if(N<=100)
                                {
                                    oh++;
                                }
                            }
                    }
            }
    }while(N>=0);
    system("cls");
    printf("Há %d números entre 0 e 25, há %d números entre 26-50, há %d n entre 51-75 e %d entre 76-100", tf, ft, sf, oh);
    return 0;
}
