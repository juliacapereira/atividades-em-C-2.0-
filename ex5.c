/*Elabore um programa que leia um nome completo de no
máximo 100 caracteres e imprima as iniciais deste nome.
Exemplo: João Carlos Nascimento da Silva, será impresso
JCNDS*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100

int main()
{
    char nome[max],ini[max];
    int i, tam,j=1;
    printf("insira o nome: ");
    fflush(stdin);
    gets(nome);
    tam=strlen(nome);
    printf("%d",tam);
    for (i=0;i<tam;i++)
    {
        ini[0]=nome[0];
        if(nome[i]==' '&&nome[i+1]!=' '&&nome[i+1]!='\0'&&nome[i+1]!='\n')
            {
                ini[j]=nome[i+1];
                j++;
            }
    }
    puts(ini);
}
