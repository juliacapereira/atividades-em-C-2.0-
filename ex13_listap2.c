/*Elabore um programa que leia um nome completo de no m�ximo 100 caracteres e imprima as iniciais deste
nome. Exemplo: Jo�o Carlos Nascimento da Silva, ser� impresso JCNDS*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    char n[101];
    int i,tam;
    do
    {
        printf("insira seu nome: ");
        fflush(stdin);
        gets(n);
        tam=strlen(n);
    }while(tam>100);
    printf("%c",n[0]);
    for(i=0;i<tam;i++)
    {
        if(n[i]==' '&&n[i+1]!=' '&&n[i+1]!='\0')
        {
         printf("%c",n[i+1]);
        }
    }
return 0;
}
