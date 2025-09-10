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
    char nome[50];
    float preco;

} Prod;

typedef struct vendas
{
    int codvenda;
    Prod produto_vendido;
    float valorvenda;
    int unid[MAX];

} Vendeu;

void registrar(int *qtd, Prod produtos[])
{
    int repetir, i;

    do
    {
        repetir = 0;
        system("cls");

        printf("registrando produto!!\n");

        printf("digite o nome do produto %i\naqui: ",(*qtd) + 1);
        fflush(stdin);
        gets(produtos[*qtd].nome);

        do
        {
            repetir = 0;

            printf("digite o codigo do produto %i\naqui: ",(*qtd) + 1);
            scanf("%d", &produtos[*qtd].codprod);

            for(i = 0; i < (*qtd); i++)
            {
                if(produtos[i].codprod == produtos[*qtd].codprod)
                {
                    printf("este c�digo de produto j� est� sendo usado!\n");
                    system("pause");
                    repetir = 1;
                }
            }
        } while(repetir == 1);

        printf("digite o estoque do produto %i\naqui: ",(*qtd) + 1);
        scanf("%d", &produtos[*qtd].estoque);

        printf("digite o pre�o do produto %i\naqui: R$",(*qtd) + 1);
        scanf("%f", &produtos[*qtd].preco);

        (*qtd)++;

        printf("voc� tem %i produtos registrados\ndeseja registrar outro produto?\n", *qtd);
        printf("\t=> tecle (1) para sim, tecle (2) para sair\n\t=> aqui:");
        scanf("%i", &repetir);

    } while(repetir == 1);
}

int listarest(Prod produtos[], int *qtd)
{
    int i, cont = 1;

    system("cls");

    if(*qtd == 0)
    {
        printf("n�o h� produtos dispon�veis!\n\n");
        system("pause");
        return 0;
    }

    system("cls");
    printf("\nprodutos em estoque:\n");

    for(i = 0; i < (*qtd); i++)
    {
        if(produtos[i].estoque > 0)
        {
            printf("=> produto %i:\n",cont);
            printf("\t=> nome: %s\n\t=> estoque: %i\n\t=> c�digo: %i\n\t=> pre�o: R$%.2f\n\n", produtos[i].nome, produtos[i].estoque, produtos[i].codprod, produtos[i].preco);
            cont++;
        }
    }

    printf("fim da lista\n\n");

    system("pause");
}

int listarfalta(Prod produtos[], int *qtd)
{
    int i, cont = 1;

    system("cls");

    if(*qtd == 0)
    {
        printf("n�o h� produtos dispon�veis!\n\n");
        system("pause");
        return 0;
    }

    printf("produtos em falta:\n");

    for(i = 0; i < (*qtd); i++)
    {
        if(produtos[i].estoque == 0)
        {
            printf("\n=>produto %i:\n", cont);
            printf("\t=> nome: %s\n\t=> c�digo: %i\n\t=> pre�o: R$%.2f\n\n", produtos[i].nome, produtos[i].codprod, produtos[i].preco);
            cont++;
        }
    }

    printf("\nfim da lista!\n");
    system("pause");
}

int listarvendas(Prod produtos[], int *qtdv, Vendeu vendas[])
{
    int i, cont = 0, v=0;

    system("cls");

    if(*qtdv == 0)
    {
        printf("voc� n�o vendeu nada!!!!!!!!\n\n");
        system("pause");
        return 0;
    }
    for(i=0; i< *qtdv;i++)
    {
        v=vendas[i].valorvenda/vendas[i].produto_vendido.preco;
        printf("Venda %d:\n", i + 1);
        printf("\tProduto: %s\n", vendas[i].produto_vendido.nome);
        printf("\tC�digo do Produto: %d\n", vendas[i].produto_vendido.codprod);
        printf("\tC�digo da Venda: %d\n", vendas[i].codvenda);
        printf("\tQuantidade Vendida: %d\n", v);
        printf("\tValor Total: R$%.2f\n\n", vendas[i].valorvenda);
    }
    system("pause");
}

int venderproduto(Prod produtos[], int *qtdr, Vendeu vendas[], int *qtdv)
{
    system("cls");

    int i, ler = 0, unid, repetir = 0;

    //caso voc� n�o tenha produtos registrados

    if(*qtdr == 0)
    {
        printf("pera la amigao\n\n");
        system("pause");
        return 0;
    }

    //caso voc� tenha
    do
    {
        do
        {
            system("cls");
            //caso voc� digite um n�mero que n�o est� na lista
            if(ler > *qtdr)
            {
                printf("digitou errado!!!!!\n\n");
            }

            //caso voc� digite

            printf("quais dos produtos a seguir voc� deseja vender?\n");
            for(i = 0; i < (*qtdr); i++)
            {
                printf("\t=> (%i): %s", i + 1, produtos[i].nome);

                if(produtos[i].estoque == 0)
                {
                    printf(" [EM FALTA]");
                }
                printf("\n");
            }
            printf("\n\naperte (0) para sair deste menu\n");
            printf("\n\taqui: ");
            scanf("%i", &ler);

            if(ler == 0)
            {
                return 0;
            }

            if(produtos[ler - 1].estoque == 0)
            {
                printf("sinto muito! este produto est� indispon�vel\n");
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
            printf("=>quantas unidades de %s voc� quer vender? (%i) dispon�veis\n\t=>aqui: ", produtos[ler].nome, produtos[ler].estoque);
            scanf("%d", &unid);
        } while(unid > produtos[ler].estoque);

        vendas[ler].unid[ler]+=unid;
        vendas[*qtdv].valorvenda = unid * produtos[ler].preco;
        //teste pra ver se guarda na posi��o do produto a quantidade que foi vndida mesmo depois de vender 2 vezes o produto (printf("%d",vendas[ler].unid[ler]);)

        do
        {
            repetir = 0;

            printf("=>digite o c�digo da venda n� %i\n\t=>aqui: ",(*qtdv) + 1);
            scanf("%i", &vendas[*qtdv].codvenda);

            for(i = 0; i < *qtdv; i++)
            {
                if(vendas[*qtdv].codvenda == vendas[i].codvenda)
                {
                    printf("este c�digo de produto j� est� sendo usado!!\n");
                    system("pause");

                    repetir = 1;
                }
            }
        } while(repetir == 1);

        (*qtdv)++;

        produtos[ler].estoque -= unid;

        printf("=>deseja vender outro produto?\n(1) sim\n(2) n�o\n\t=>aqui: ");
        scanf("%i", &repetir);

    }while (repetir == 1);
}

int maisvendido(Prod produtos[], int *qtdv, Vendeu vendas[])
{
    int i, maior=0,pos,j=1;
    system("cls");
    for(i=0;i<(*qtdv);i++)
    {
        if(vendas[i].unid[i]>maior)
        {
            maior=vendas[i].unid[i];
            pos=i;
        }
    }
    printf("=>O produto mais vendido foi o %s\n=>Com %i unidades vendidas ", produtos[pos].nome,vendas[pos].unid[pos]);

    for(i=0;i<(*qtdv);i++)
    {
        if(strcmp(vendas[i].produto_vendido.nome,produtos[pos].nome)==0)
        {
            printf("\n=>O c�digo da %d� venda deste produto � %d",j,vendas[i].codvenda);
            j++;
        }
    }
    printf("\n");
    system("pause");
}
//int vendasporprod

void relatorios(Prod produtos[], int qtdr, int qtdv, Vendeu vendas[])
{
    int ler;

    system("cls");
    printf("qual relat�rio voc� quer ver?\n\n\t(1) para listar os produtos em estoque\n\t(2) para listar os produtos em falta\n\t(3) para listar as vendas\n\t(4) para mostrar o mais vendido e suas informa��es\n\taqui: ");
    scanf("%i", &ler);

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
        maisvendido(produtos, &qtdv, vendas);
        break;

//    case5:

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

        printf("\to que voc� quer fazer?\n\n");
        printf("\t(1) para registrar um novo produto\n\t(2) para registrar uma nova venda\n\t(3) para acessar os relat�rios \n");
        printf("\t(4) para sair do programa\n\taqui: ");
        scanf("%i", &ler);

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
            printf("digitou errado!!\n\n");
            system("pause");
        }

    }while(1);
}
