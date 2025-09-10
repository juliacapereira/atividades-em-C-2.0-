/*Uma palavra é palíndromo se ela não se altera quando lida da direita para esquerda. Por exemplo, RAIAR é
palíndromo. Escreva um programa que verifique se uma palavra dada é palíndroma*/
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
        printf("É palindroma!!!!");
    }
    else
    {
        printf("nao é palindroma!!!!!");
    }
return 0;


}
