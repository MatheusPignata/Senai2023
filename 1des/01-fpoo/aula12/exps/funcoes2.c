#include <stdio.h>
#include <locale.h>

//Exemplo de fun��o
char *frase1(){
	return "Bom dia!";
}

//Exemplo de procedimento
void frase2(){
	printf("Bom dia!");
}

//Esta � a fun��o principal do programa
int main(){
	printf("%s\n", frase1());
	frase2();
	return 0;
}
