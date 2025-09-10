/*Elabore um programa que leia uma string de no máximo 10 caracteres. O programa deverá imprimir a
string sem suas vogais.*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char st[11],b;
    int i,tam;
    do
    {
        printf("insira sua string; ");
        fflush(stdin);
        gets(st);
        tam=strlen(st);
    }while(tam>10);
    for(i=0;i<tam;i++)
    {
        if(tolower(st[i])!='a'&&tolower(st[i])!='e'&&tolower(st[i])!='i'&&tolower(st[i])!='o'&&tolower(st[i])!='u')
        {
            printf("%c ",st[i]);
        }
    }
    return 0;

}
