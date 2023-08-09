#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, num6;
    int maior;

    // Leitura dos números
    printf("Digite seis numeros inteiros:\n");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);

    // Encontrando o maior número usando comparações
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6) {
        maior = num1;
    } else if (num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6) {
        maior = num2;
    } else if (num3 > num4 && num3 > num5 && num3 > num6) {
        maior = num3;
    } else if (num4 > num5 && num4 > num6) {
        maior = num4;
    } else if (num5 > num6) {
        maior = num5;
    } else {
        maior = num6;
    }

    // Exibição do maior número
    printf("O maior numero digitado eh: %d\n", maior);

    return 0;
}

