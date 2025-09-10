#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    float media15=0, media100=0,i;
    for(i=0;i<=15;i++)
    {
        media15+=i;
    }
    media15/=16;
    for(i=0;i<=100;i++)
    {
        media100+=i;
    }
    media100/=101;
    printf("a media dos 15 é %f e a media dos 100 é %f",media15,media100);
    return 0;
}
