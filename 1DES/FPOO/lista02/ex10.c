#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Verificação da situação do aluno
    if (media >= 6) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 4) {
        printf("Situacao: Recuperação\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}

