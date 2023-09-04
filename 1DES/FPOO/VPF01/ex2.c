#include <stdio.h>

int main() {
    int tempo, horas, minutos, segundos;;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    tempo = tempo % 3600;
    minutos = tempo / 60;
    segundos = tempo % 60;

    printf("Tempo convertido: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}

