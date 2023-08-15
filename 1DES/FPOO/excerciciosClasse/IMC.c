#include <stdio.h>
#include <locale.h>

int main() {
    // Configurando a localização para exibir mensagens em português
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;
    char nome[100];

    // Leitura do nome, peso e altura
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    // Cálculo do IMC
    imc = peso / (altura * altura);

    // Exibição do IMC e interpretação
    printf("%s, seu IMC é: %.2f\n", nome, imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc < 24.9) {
        printf("Seu peso está dentro da faixa saudável.\n");
    } else if (imc < 29.9) {
        printf("Você está com sobrepeso.\n");
    } else if (imc < 34.9) {
        printf("Você está com obesidade grau 1.\n");
    } else if (imc < 39.9) {
        printf("Você está com obesidade grau 2.\n");
    } else {
        printf("Você está com obesidade grau 3.\n");
    }

    return 0;
}

