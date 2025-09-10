#include<stdio.h>
#include<stdlib.h>

void somadiv(int x,int *y)
 {
     int i;
     for(i=1;i<=x;i++)
     {
         if(x%i==0)
         {
             *y+=i;
         }
     }
 }

 int main()
 {
     int a, soma=0;
     printf("insira um valor para A: ");
     scanf("%d",&a);
     somadiv(a,&soma);
     printf("a soma dos divisores de %d eh %d",a,soma);
     return 0;
 }
