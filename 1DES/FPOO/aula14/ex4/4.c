#include <stdio.h>

int main() {
	
    FILE *entrada, *saida;
    char str[80];
    int n;
    
    entrada = fopen("suco.in.txt", "r");

	if(entrada == NULL){
		printf("Erro, nao foi possivel abrir o arquivo\n");
	}
	
	while(fscanf(entrada, "%d", &n) == 1){
//		printf("%d ", n);
	}
	
	
	fclose(entrada);
	
	
	printf("%d", n);

//	entrada = fopen("dados.txt", "r");
//	saida = fopen("resultado.txt", "w");
//	
//	fprintf(saida, "Conte?do do arquivo: ");
//	while(fgets(str, sizeof(str), entrada) != NULL){
//		fprintf(saida, "%s", str);
//	}
//	
//	fprintf(saida, "\nSoma: %d", soma);
//	fprintf(saida, "\nM?dia: %.1f", media);
//	
//	fclose(saida);
//	fclose(entrada);

    return 0;
}
