#include <stdio.h>

char final(char comandos[], int N) {
    char direcao = 'N';
    
    int i;

    for (i = 0; i < N; i++) {
        if (comandos[i] == 'E') {
            if (direcao == 'N') {
                direcao = 'O';
            } else if (direcao == 'O') {
                direcao = 'S';
            } else if (direcao == 'S') {
                direcao = 'L';
            } else if (direcao == 'L') {
                direcao = 'N';
            }
        } else if (comandos[i] == 'D') {
            if (direcao == 'N') {
                direcao = 'L';
            } else if (direcao == 'L') {
                direcao = 'S';
            } else if (direcao == 'S') {
                direcao = 'O';
            } else if (direcao == 'O') {
                direcao = 'N';
            }
        }
    }

    return direcao;
}

int main() {
    int N;
    char comandos[1001];

    FILE *entrada = fopen("esquerda.in.txt", "r");
    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    FILE *saida = fopen("esquerda.out.txt", "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de sa?da");
        fclose(entrada);
        return 1;
    }

    while (1) {
        fscanf(entrada, "%d", &N);
        if (N == 0) {
            break;
        }

        fscanf(entrada, "%s", comandos);

        char direcao_final = final(comandos, N);
        fprintf(saida, "%c\n", direcao_final);
    }

    fclose(entrada);
    fclose(saida);

    return 0;
}
