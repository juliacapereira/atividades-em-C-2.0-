/*Uma palavra � pal�ndromo se ela n�o se altera quando lida da direita para esquerda. Por exemplo, RAIAR �
pal�ndromo. Escreva um programa que verifique se uma palavra dada � pal�ndroma*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char p[21];
    float m;
    int i,tam,n,c=0;
    setlocale(LC_ALL,"portuguese");
    printf("insira a palavra: ");
    fflush(stdin);
    fgets(p,20,stdin);
    tam=strlen(p);
    tam--;
    m=tam/2;
    n=(int)m;
    for(i=0;i<=n;i++)
    {
        if(p[i]!=p[tam-i-1])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("� palindroma!!!!");
    }
    else
    {
        printf("nao � palindroma!!!!!");
    }
return 0;


}
