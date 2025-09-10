/*Elabore um programa que leia uma string de no máximo 10
caracteres. O programa deverá imprimir a string sem suas
vogais
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char A[11], letra,B[11];
    int i, tam,j=0;
    printf("insira sua string: ");
    fflush(stdin);
    gets(A);
    tam=strlen(A);
    printf("%d",tam);
    for(i=0;i<tam;i++)
    {
        letra=A[i];
        //printf("%s",&letra);
        if((toupper(A[i])!='A')&&(toupper(A[i])!='E')&&(toupper(A[i])!='I')&&(toupper(A[i])!='O')&&(toupper(A[i])!='U'))
        {
            B[j]=letra;
            j++;
        }
    }
    puts(B);
}
