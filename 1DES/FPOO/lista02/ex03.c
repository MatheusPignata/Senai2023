#include <stdio.h>

int main() {
    float salario, descontoINSS, salarioFinal;

    // Leitura do salário do funcionário
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    // Cálculo do desconto de INSS
    if (salario <= 1212.00) {
        descontoINSS = salario * 0.075;
    } else if (salario <= 2427.35) {
        descontoINSS = salario * 0.09;
    } else if (salario <= 3641.03) {
        descontoINSS = salario * 0.12;
    } else if (salario <= 7087.22) {
        descontoINSS = salario * 0.14;
    } else {
        descontoINSS = 7087.22 * 0.14;
    }

    // Cálculo do salário final
    salarioFinal = salario - descontoINSS;

    // Exibição do desconto e do salário final
    printf("Desconto de INSS: %.2f\n", descontoINSS);
    printf("Salario final: %.2f\n", salarioFinal);

    return 0;
}

