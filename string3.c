/*Faça um programa que leia o nome e sobrenome de uma
pessoa o programa deve escrever o nome e o sobrenome numa
única string. Deverá ser impresso, a nova string, o tamanho
dela a primeira e a última letra da string*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 100

int main()
{
    char nome[max],sobrenome[max],nomesob[max];
    int tam,i;

    printf("Insira o nome");
    fflush(stdin);
    gets(nome);
    printf("\ninsira o sobrenome");
    fflush(stdin);
    gets(sobrenome);
    tam=strlen(nome);
    tam+=strlen(sobrenome);
    strcpy(nomesob,nome);
    strcat(nomesob,sobrenome);
    puts(nomesob);
}
