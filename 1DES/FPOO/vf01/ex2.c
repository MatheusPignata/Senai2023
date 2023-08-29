#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    char cidade[100];
    int numCandidatos, i;

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o n�mero de candidatos a prefeito: ");
    scanf("%d", &numCandidatos);

    char nomes[numCandidatos][100];
    int votos[numCandidatos], brancos, nulos, totalVotos = 0;

    for (i = 0; i < numCandidatos; i++) {
        printf("\nDigite o nome do candidato %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite o total de votos para o candidato %s: ", nomes[i]);
        scanf("%d", &votos[i]);

        totalVotos += votos[i];
    }

    printf("\nDigite o total de votos em branco: ");
    scanf("%d", &brancos);

    printf("Digite o total de votos nulos: ");
    scanf("%d", &nulos);

    // C�lculo das porcentagens
    printf("\nResultados da Elei��o em %s:\n", cidade);
    printf("============================\n");

    for (i = 0; i < numCandidatos; i++) {
        float porcentagem = (float) votos[i] / totalVotos * 100;
        printf("Candidato %s - %.2f%% dos votos\n", nomes[i], porcentagem);
    }

    printf("Votos em Branco: %.2f%%\n", (float) brancos / totalVotos * 100);
    printf("Votos Nulos: %.2f%%\n", (float) nulos / totalVotos * 100);

    // Verifica��o de validade da elei��o
    int maiorVotos = votos[0];
    int eleito = 0;
    int segundo = -1;

    for (i = 1; i < numCandidatos; i++) {
        if (votos[i] > maiorVotos) {
            segundo = eleito;
            eleito = i;
            maiorVotos = votos[i];
        } else if (votos[i] > votos[segundo] && votos[i] != maiorVotos) {
            segundo = i;
        }
    }

    if ((float) brancos / totalVotos < 0.5 && (float) nulos / totalVotos < 0.5) {
        if ((float) maiorVotos / totalVotos > 0.5) {
            printf("\nElei��o V�lida!\n");
            printf("Candidato Eleito: %s\n", nomes[eleito]);
        } else if (segundo != -1) {
            printf("\nSegundo Turno Necess�rio!\n");
            printf("=============================\n");
            printf("Candidatos para Segundo Turno: %s e %s\n", nomes[eleito], nomes[segundo]);

            // Segunda contagem de votos para o segundo turno
            int votosSegundo[numCandidatos];
            int totalVotosSegundo = 0;

            for (i = 0; i < numCandidatos; i++) {
                if (i == eleito || i == segundo) {
                    printf("Digite o total de votos para o candidato %s no segundo turno: ", nomes[i]);
                    scanf("%d", &votosSegundo[i]);
                    totalVotosSegundo += votosSegundo[i];
                }
            }

            if (totalVotosSegundo == 0) {
                printf("Nenhum voto registrado no segundo turno. A elei��o � inv�lida.\n");
            } else {
                printf("Resultados do Segundo Turno:\n");
                printf("=============================\n");

                for (i = 0; i < numCandidatos; i++) {
                    if (i == eleito || i == segundo) {
                        float porcentagem = (float) votosSegundo[i] / totalVotosSegundo * 100;
                        printf("Candidato %s - %.2f%% dos votos\n", nomes[i], porcentagem);
                    }
                }

                // Determinar o vencedor do segundo turno
                if (votosSegundo[eleito] > votosSegundo[segundo]) {
                    printf("\nCandidato %s venceu o segundo turno e � eleito prefeito!\n", nomes[eleito]);
                } else if (votosSegundo[eleito] < votosSegundo[segundo]) {
                    printf("\nCandidato %s venceu o segundo turno e � eleito prefeito!\n", nomes[segundo]);
                } else {
                    printf("\nEmpate no segundo turno. Novas elei��es devem ser realizadas.\n");
                }
            }
        } else {
            printf("\nElei��o Inv�lida!\n");
        }
    } else {
        printf("\nElei��o Inv�lida!\n");
    }

    return 0;
}

