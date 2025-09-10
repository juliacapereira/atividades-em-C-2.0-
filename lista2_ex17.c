/*17. Elabore um programa que contenha uma função recebe 3 valores float (n1, n2, n3) e retornar o (x*x)+y+z. Os
valores devem ser lidos no programa principal, o resultado também deve ser impresso no principal.
Construa essa função de duas maneiras diferentes, respeitando os cabeçalhos abaixo:
a. float calculo(float x,float y, float z)*/
#include<stdio.h>

float calculo(float x,float y, float z)
{
    float res;
    res=(x*x)+y+z;
    return res;
}
int main()
{
    float n1,n2,n3,res=0;
    printf("Insira um valor:");
    scanf("%f",&n1);
    printf("Insira um valor:");
    scanf("%f",&n2);
    printf("Insira um valor:");
    scanf("%f",&n3);
    res=calculo(n1,n2,n3);
    printf("%.4f",res);
    return 0;
}
