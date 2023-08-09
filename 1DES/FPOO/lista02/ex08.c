#include <stdio.h>

int main() {
    int num1, num2;
    int maior, menor;

    // Leitura dos números
    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &num1, &num2);

    // Determinando o maior número
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    // Exibição do resultado
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);

    return 0;
}

