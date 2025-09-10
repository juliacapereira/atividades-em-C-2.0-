/*Elabore um programa que leia uma string de no máximo 20 caracteres e um caractere. O programa deverá
determinar o número de vezes que esse caractere aparece na string.*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    char a[21],b;
    int tam,i,n=0;
    do
    {
        printf("Insira a string: ");
        gets(a);
        tam=strlen(a);
    }while(tam>20);

    printf("insira a letra que deseja procurar: ");
    fflush(stdin);
    b=getchar();

    for(i=0;i<tam;i++)
    {
        if(a[i]==b)
        {
            n++;
        }
    }
    printf("\nA letra %c aparece %d vezes",b,n);
return 0;
}
