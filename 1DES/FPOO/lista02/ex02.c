#include <stdio.h>

int main() {
    float salarioFuncionario, salarioFinal, salarioFamilia;
    int numFilhos;

    // Leitura do salário e do número de filhos
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salarioFuncionario);

    printf("Digite o numero de filhos: ");
    scanf("%d", &numFilhos);

    // Verificação e cálculo do salário família
    if (salarioFuncionario < 2000) {
        salarioFamilia = 45 * numFilhos;
        salarioFinal = salarioFuncionario + salarioFamilia;
    }

    // Exibição do salário final
    printf("Salario familia: %.2f\n", salarioFamilia);
    printf("Salario final: %.2f\n", (salarioFuncionario + salarioFamilia));

    return 0;
}

