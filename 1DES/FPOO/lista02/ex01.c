#include <stdio.h>
#include <locale.h>
int main(){
	float preco;
	//Entrada
	printf("Digite o pre?o do produto: ");
	scanf("%f",&preco);
	//Processamento com condicionais "if" ou "se" ou "caso"
	if(preco > 1000){
		preco = preco - preco * 8 / 100;
	}
	//Saida
	printf("O pre?o final ? R$ %.2f",preco);
}
