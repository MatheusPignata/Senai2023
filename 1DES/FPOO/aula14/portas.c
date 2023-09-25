#include <stdio.h>
#include <math.h>

int main() {
    int N;

    while (1) {
        // Leitura do número de portas e descendentes
        scanf("%d", &N);

        if (N == 0) {
            break; // Encerra o programa quando N for 0
        }

        int i;
        printf("Portas abertas:");

        for (i = 1; i * i <= N; i++) {
            printf(" %d", i * i);
        }

        printf("\n");
    }

    return 0;
}
