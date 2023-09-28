#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
    FILE *entrada, *saida;
    char str[80];
    int n, soma = 0;
    float media;
    
    entrada = fopen("dados.txt", "r");

	if(entrada == NULL){
		printf("Erro, nao foi possivel abrir o arquivo\n");
	}
	
	while(fscanf(entrada, "%d", &n) == 1){
		soma += n;
	}
	
	media = soma/10.0;
	
	fclose(entrada);

	entrada = fopen("dados.txt", "r");
	saida = fopen("resultado.txt", "w");
	
	fprintf(saida, "Conteudo do arquivo: ");
	while(fgets(str, sizeof(str), entrada) != NULL){
		fprintf(saida, "%s", str);
	}
	
	fprintf(saida, "\nSoma: %d", soma);
	fprintf(saida, "\nMedia: %.1f", media);
	
	fclose(saida);
	fclose(entrada);

    return 0;
}
