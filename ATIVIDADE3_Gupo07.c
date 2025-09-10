#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 50
#define VENDAS 100

typedef struct produtos
{
    int codprod, estoque;
    char nome[51];
    float preco;

} Prod;

typedef struct vendas
{
    int codvenda;
    Prod produto_vendido;
    float valorvenda;

} Vendeu;

void registrar(int *qtd, Prod produtos[])
{
    int repetir, i,tam;

    do
    {
        tam=0;
        repetir = 0;
        system("cls");

        printf("Registrando produto!!\n");

        do
        {
            printf("Digite o nome do produto %d\naqui: ",(*qtd) + 1);
            fflush(stdin);
            gets(produtos[*qtd].nome);
            tam=strlen(produtos[*qtd].nome);
        }while(tam>50);

        do
        {
            repetir = 0;

            printf("Digite o codigo do produto %d\nAqui: ",(*qtd) + 1);
            scanf("%d", &produtos[*qtd].codprod);

            for(i = 0; i < (*qtd); i++)
            {
                if(produtos[i].codprod == produtos[*qtd].codprod)
                {
                    printf("Este código de produto já está sendo usado!\n");
                    system("pause");
                    repetir = 1;
                }
            }
        } while(repetir == 1);

        do
        {
            printf("Digite o estoque do produto %d\nAqui: ",(*qtd) + 1);
            scanf("%d", &produtos[*qtd].estoque);
        } while (produtos[*qtd].estoque<0);

        do
        {
            printf("Digite o preço do produto %d\nAqui: R$",(*qtd) + 1);
            scanf("%f", &produtos[*qtd].preco);
        } while(produtos[*qtd].preco<=0);

        (*qtd)++;

        printf("Você tem %d produtos registrados\nDeseja registrar outro produto?\n", *qtd);
        printf("\t=> tecle (1) para sim, tecle (2) para sair\n\t=> Aqui:");
        scanf("%d", &repetir);

    } while(repetir == 1);
}

int listarest(Prod produtos[], int *qtd)
{
    int i, cont = 1;

    system("cls");

    if(*qtd == 0)
    {
        printf("Não há produtos disponíveis!\n\n");
        system("pause");
        return 0;
    }

    printf("\nProdutos em estoque:\n");

    for(i = 0; i < (*qtd); i++)
    {
        if(produtos[i].estoque > 0)
        {
            printf("=> Produto %d:\n",cont);
            printf("\t=> Nome: %s\n\t=> Estoque: %d\n\t=> Código: %d\n\t=> Preço: R$%.2f\n\n", produtos[i].nome, produtos[i].estoque, produtos[i].codprod, produtos[i].preco);
            cont++;
        }
    }

    printf("Fim da lista\n\n");

    system("pause");
}

int listarfalta(Prod produtos[], int *qtd)
{
    int i, cont = 1;

    system("cls");

    if(*qtd == 0)
    {
        printf("Não há produtos disponíveis!\n\n");
        system("pause");
        return 0;
    }

    printf("Produtos em falta:\n");

    for(i = 0; i < (*qtd); i++)
    {
        if(produtos[i].estoque == 0)
        {
            printf("\n=>Produto %d:\n", cont);
            printf("\t=> Nome: %s\n\t=> Código: %d\n\t=> Preço: R$%.2f\n\n", produtos[i].nome, produtos[i].codprod, produtos[i].preco);
            cont++;
        }
    }

    printf("\nFim da lista!\n");
    system("pause");
}

int listarvendas(Prod produtos[], int *qtdv, Vendeu vendas[])
{
    int i, cont = 0, v=0;

    system("cls");

    if(*qtdv == 0)
    {
        printf("Você não vendeu nada!!!!!!!!\n\n");
        system("pause");
        return 0;
    }
    for(i=0; i< *qtdv;i++)
    {
        v=vendas[i].valorvenda/vendas[i].produto_vendido.preco;
        printf("=> Venda %d:\n", i + 1);
        printf("\t=>Produto: %s\n", vendas[i].produto_vendido.nome);
        printf("\t=>Código do Produto: %d\n", vendas[i].produto_vendido.codprod);
        printf("\t=>Código da Venda: %d\n", vendas[i].codvenda);
        printf("\t=>Quantidade Vendida: %d\n", v);
        printf("\t=>Valor Total: R$%.2f\n\n", vendas[i].valorvenda);
    }
    system("pause");
}

int venderproduto(Prod produtos[], int *qtdr, Vendeu vendas[], int *qtdv)
{
    system("cls");

    int i, ler = 0, unid, repetir = 0;

    if(*qtdr == 0)
    {
        printf("Você não tem produtos registrados!!!!!!!\n\n");
        system("pause");
        return 0;
    }

    do
    {
        do
        {
            system("cls");

            if(ler > *qtdr)
            {
                printf("Digitou errado!!!!!\n\n");
            }

            printf("Quais dos produtos a seguir você deseja vender?\n");
            for(i = 0; i < (*qtdr); i++)
            {
                printf("\t=> (%d): %s", i + 1, produtos[i].nome);

                if(produtos[i].estoque == 0)
                {
                    printf(" [EM FALTA]");
                }
                printf("\n");
            }
            printf("\n\nAperte (0) para sair deste menu\n");
            printf("\n\tAqui: ");
            scanf("%d", &ler);

            if(ler == 0)
            {
                return 0;
            }

            if(produtos[ler - 1].estoque == 0)
            {
                printf("Sinto muito! este produto está indisponível\n");
                system("pause");
                ler = 0;
            }

        } while(ler > *qtdr || ler < 1);
        ler--;

        system("cls");

        printf("REALIZANDO VENDA\n\n");

        vendas[*qtdv].produto_vendido = produtos[ler];

        do
        {
            printf("=> Quantas unidades de %s você quer vender? (%d) disponíveis\n\t=> Aqui: ", produtos[ler].nome, produtos[ler].estoque);
            scanf("%d", &unid);
        } while(unid > produtos[ler].estoque||unid<1);

        vendas[*qtdv].valorvenda = unid * produtos[ler].preco;

        do
        {
            repetir = 0;

            printf("=> Digite o código da venda n° %d\n\t=>aqui: ",(*qtdv) + 1);
            scanf("%d", &vendas[*qtdv].codvenda);

            for(i = 0; i < *qtdv; i++)
            {
                if(vendas[*qtdv].codvenda == vendas[i].codvenda)
                {
                    printf("Este código de venda já está sendo usado!!\n");
                    system("pause");

                    repetir = 1;
                }
            }
        } while(repetir == 1);

        (*qtdv)++;

        produtos[ler].estoque -= unid;

        printf("=> Deseja vender outro produto?\n(1) sim\n(2) não\n\t=> Aqui: ");
        scanf("%d", &repetir);

    }while (repetir == 1);
}

int maisvendido(Prod produtos[], int *qtdv, int *qtdr, Vendeu vendas[])
{
    int i,j,c=1, maior=0,vend=0,soma=0,codigo;

    system("cls");

    if((*qtdv)==0)
    {
        printf("Não há vendas registradas!!!!!\n");
        system("pause");
        return 0;
    }

    for(i=0;i<(*qtdr);i++)
    {
        soma=0;
        for(j=0;j<(*qtdv);j++)
        {
            if(produtos[i].codprod==vendas[j].produto_vendido.codprod)
            {
                vend=vendas[j].valorvenda/produtos[i].preco;
                soma+=vend;
            }
        }
        if(soma>maior)
        {
            maior=soma;
            codigo=produtos[i].codprod;
        }
    }

    for(i=0;i<(*qtdv);i++)
    {
        if(produtos[i].codprod==codigo)
        {
            printf("=> O produto mais vendido é %s", produtos[i].nome);
            printf("=> O código do produto é %d", produtos[i].codprod);
            printf("\n=> Com %d unidades", maior);
        }
        if(vendas[i].produto_vendido.codprod==codigo)
        {
            printf("\n=> O código da %dº venda é %d",c,vendas[i].codvenda);
            c++;
        }
    }

    printf("\n");

    system("pause");
}

int vendasporproduto(Prod produtos[], int *qtdv, int *qtdr, Vendeu vendas[])
{
    int i,j,c, maior=0,vend=0,soma=0;

    system("cls");

    if((*qtdv)==0)
    {
        printf("Não há vendas registradas!!!!!\n");
        system("pause");
        return 0;
    }
    for(i=0;i<(*qtdr);i++)
    {
        soma=0;
        c=0;
        printf("=> O %dº produto é %s",i+1,produtos[i].nome);
        for(j=0;j<(*qtdv);j++)
        {
            if(produtos[i].codprod==vendas[j].produto_vendido.codprod)
            {
                c++;
                vend=vendas[j].valorvenda/produtos[i].preco;
                soma+=vend;
                printf("\n=> O %dº código de venda é %d",c,vendas[j].codvenda);
                printf("\n=> Na %dº venda foram vendidas %d unidades",c,vend);
            }
        }
        if(c==0)
        {
            printf("\n=> Esse produto ainda não foi vendido!!!");
        }
        printf("\n=> %d unidades foram vendidas ao total",soma);
        printf("\n\n");
    }
    printf("\n");
    system("pause");
}

int valortotal(Prod produtos[], int *qtdv, int *qtdr, Vendeu vendas[])
{
    int i,j,c, primeira_venda;
    float soma=0;

    system("cls");

    if((*qtdv)==0)
    {
        printf("Não há vendas registradas!!!!!\n");
        system("pause");
        return 0;
    }

    for(j=0;j<(*qtdv);j++)
    {
        soma+=vendas[j].valorvenda;
    }

    printf("=> O valor total obtido com as vendas foi de R$%.2f",soma);

        for(i=0;i<(*qtdv);i++)
        {
            j = 0;
            primeira_venda = 0;
            while (j < i && !primeira_venda)
            {
                if(vendas[j].produto_vendido.codprod == vendas[i].produto_vendido.codprod)
                {
                    primeira_venda = 1;
                }
            j++;
            }

            if(!primeira_venda)
            {

                c = 0;
                printf("\n\n");
                printf("=> O %dº produto a ser vendido foi %s",i+1,vendas[i].produto_vendido.nome);
                printf("\n=> O código desse produto é %d",vendas[i].produto_vendido.codprod);

                for (j = 0; j < (*qtdv); j++)
                {
                    if(vendas[j].produto_vendido.codprod == vendas[i].produto_vendido.codprod)
                    {
                        c++;
                        printf("\n=> O %dº código de venda é %d",c,vendas[j].codvenda);
                        printf("\n=> Na %dº venda foi vendido R$%.2f",c,vendas[j].valorvenda);
                    }
                }
            }
        }
    printf("\n\n");
    system("pause");
}

void relatorios(Prod produtos[], int qtdr, int qtdv, Vendeu vendas[])
{
    int ler;

    system("cls");
    printf("Qual relatório você quer ver?\n\n\t(1) para listar os produtos em estoque\n\t(2) para listar os produtos em falta\n\t(3) para listar as vendas");
    printf("\n\t(4) para mostrar o mais vendido e suas informações\n\t(5) total de vendas por produto\n\t(6) valor total obtido\n\tAqui: ");
    scanf("%d", &ler);

    switch(ler)
    {
    case 1:
        listarest(produtos, &qtdr);
        break;

    case 2:
        listarfalta(produtos, &qtdr);
        break;

    case 3:
        listarvendas(produtos, &qtdv, vendas);
        break;

    case 4:
        maisvendido(produtos, &qtdv, &qtdr, vendas);
        break;

    case 5:
        vendasporproduto(produtos,&qtdv, &qtdr, vendas);
        break;

    case 6:
        valortotal(produtos,&qtdv, &qtdr, vendas);
        break;

    default:
        printf("Digitou errado!!\n\n");
        system("pause");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int ler, qtdr = 0, qtdv = 0;
    Prod produtos[MAX];
    Vendeu vendas[VENDAS];

    do
    {
        system("cls");
        printf(".-.-. .-.-. .-..--. .-..-   .-. .-.   .-.\n");
        printf("| |.-.| | | | ~~  | | ~.-.| | | |   | | \n");
        printf("| |  ~  | | | | _   | |   .~| | | |   | |\n");
        printf("| |     | | | |`-'  | |    .| | | |   | |\n");
        printf("| |     | | | | __  | |     | | | | _ | |\n");
        printf("`-'     `-' -'--' `-'     `-' -'-'`-'\n");

        printf("\tO que você quer fazer?\n\n");
        printf("\t(1) para registrar um novo produto\n\t(2) para registrar uma nova venda\n\t(3) para acessar os relatórios \n");
        printf("\t(4) para sair do programa\n\tAqui: ");
        scanf("%d", &ler);

        switch(ler)
        {
        case 1:
            registrar(&qtdr, produtos);
            break;

        case 2:
            venderproduto(produtos, &qtdr, vendas, &qtdv);
            break;

        case 3:
            relatorios(produtos, qtdr, qtdv, vendas);
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Digitou errado!!\n\n");
            system("pause");
        }

    }while(1);
}
