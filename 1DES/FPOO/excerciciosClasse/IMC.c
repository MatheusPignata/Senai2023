#include <stdio.h>
#include <locale.h>

int main() {
    // Configurando a localiza��o para exibir mensagens em portugu�s
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

    // C�lculo do IMC
    imc = peso / (altura * altura);

    // Exibi��o do IMC e interpreta��o
    printf("%s, seu IMC �: %.2f\n", nome, imc);

    if (imc < 18.5) {
        printf("Voc� est� abaixo do peso.\n");
    } else if (imc < 24.9) {
        printf("Seu peso est� dentro da faixa saud�vel.\n");
    } else if (imc < 29.9) {
        printf("Voc� est� com sobrepeso.\n");
    } else if (imc < 34.9) {
        printf("Voc� est� com obesidade grau 1.\n");
    } else if (imc < 39.9) {
        printf("Voc� est� com obesidade grau 2.\n");
    } else {
        printf("Voc� est� com obesidade grau 3.\n");
    }

    return 0;
}

