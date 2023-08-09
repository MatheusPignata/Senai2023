#include <stdio.h>

int main() {
    char peca;
    float preco, desconto, precoFinal;

    // Leitura da peça e do preço
    printf("Digite a peca vendida (c para camisa, b para bermuda, l para calca): ");
    scanf(" %c", &peca);

    printf("Digite o preco da peca: ");
    scanf("%f", &preco);

    // Cálculo do desconto e do preço final
    if (peca == 'c') {
        desconto = 0.20; // 20% de desconto para camisa
    } else if (peca == 'b') {
        desconto = 0.10; // 10% de desconto para bermuda
    } else if (peca == 'l') {
        desconto = 0.15; // 15% de desconto para calça
    } else {
        desconto = 0; // Nenhum desconto para peça inválida
    }

    precoFinal = preco * (1 - desconto);

    // Exibição do valor final da venda
    printf("Valor final da venda: %.2f\n", precoFinal);

    return 0;
}

