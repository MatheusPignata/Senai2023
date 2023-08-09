#include <stdio.h>

int main() {
    char nomeMercadoria[100];
    float preco, novoPreco;

    // Leitura do nome da mercadoria
    printf("Digite o nome da mercadoria: ");
    fgets(nomeMercadoria, sizeof(nomeMercadoria), stdin);

    // Leitura do preço da mercadoria
    printf("Digite o preco da mercadoria: ");
    scanf("%f", &preco);

    // Cálculo do novo preço com base no aumento
    if (preco < 1000) {
        novoPreco = preco * 1.05; // Aumento de 5%
    } else {
        novoPreco = preco * 1.07; // Aumento de 7%
    }

    // Exibição do nome da mercadoria e do novo preço
    printf("Nome da mercadoria: %s", nomeMercadoria);
    printf("Novo preco da mercadoria: %.2f\n", novoPreco);

    return 0;
}

