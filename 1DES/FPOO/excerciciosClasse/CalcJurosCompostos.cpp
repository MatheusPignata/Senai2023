#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() { 
	// Configurando a localiza��o para exibir mensagens em portugu�s
    setlocale(LC_ALL, "Portuguese");
    
    float capital, taxaJuros, montante, juros;
    int quantidadeMeses;

    // Leitura do capital, taxa de juros e quantidade de meses
    printf("Digite o valor do capital inicial: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros mensal: ");
    scanf("%f", &taxaJuros);

    printf("Digite a quantidade de meses: ");
    scanf("%d", &quantidadeMeses);
    
    montante = capital;

    // C�lculo dos juros compostos e exibi��o da tabela
    printf("M�s\t Capital\t Juros\t Montante\n");
    printf("----\t -------\t -----\t ---------\n");

	for(int i = 1; i <= quantidadeMeses; i++){
		
		montante = (capital * (taxaJuros/100));
        printf("%3d\t %7.2f\t %5.2f\t %9.2f\n", i, capital, taxaJuros, montante);
	}

//    montante = capital;
//    for (int i = 1; i <= quantidadeMeses; i++) {
//        juros = montante * taxaJuros;
//        montante = montante + juros;
//        printf("%3d\t %7.2f\t %5.2f\t %9.2f\n", i, capital, juros, montante);
//        capital = montante;  // O capital do pr�ximo m�s � igual ao montante atual
//    }

    return 0;
}







