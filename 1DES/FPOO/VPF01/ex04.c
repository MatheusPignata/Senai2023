#include <stdio.h>

int main() {
    int itens, i;

    printf("Quantos itens Jorge comprou? ");
    scanf("%d", &itens);

    char prod[itens][100];
    float custos[itens], lucro;

    printf("------------------------------------------------------\n");

    for (i = 0; i < itens; i++) {
        printf("Digite o nome do item %d: ", i + 1);
        scanf("%s", prod[i]);

        printf("Digite o custo do item %s: ", prod[i]);
        scanf("%f", &custos[i]);
    }
    
    printf("------------------------------------------------------\n");

    printf("\nDigite a margem de lucro esperada (em porcentagem): ");
    scanf("%f", &lucro);

    printf("\nLista de Produtos e Preços de Venda:\n");
    printf("------------------------------------------------------\n");

    for (i = 0; i < itens; i++) {
        float precoVenda = custos[i] * (1 + lucro / 100);

        printf("Item: %s\n", prod[i]);
        printf("Preço de Venda: R$%.2f\n", precoVenda);
        printf("\n");
    }

    return 0;
}

