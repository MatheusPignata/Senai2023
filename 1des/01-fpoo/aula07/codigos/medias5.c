#include <stdio.h>
#include <locale.h>
#include <string.h>
//Solu��o onde o usu�rio escolhe quantos dias
int main(){
	//Configura��es e declara��o de vari�veis
	setlocale(LC_ALL, "");
	char nome[30], continuar[3];//Nome do usu�rio e o continuar "sim" ou "n�o"
	float sis, dia; //Leitura das medidas de press�o
	float mediaSis = 0, mediaDia = 0; //Acumuladores iniciados com Zero
	int i, dias; //Contador e total de dias
	
	do{
		//Entradas
		printf("Digite o nome do atleta/cliente: ");
		scanf("%s",&nome);
		printf("Digite quantos dias foram feitas medidas de press�o: ");
		scanf("%d",&dias);
		printf("Digite as %d medidas de press�o sist�lica e diast�lica:\n", dias);
		printf("Sys. Dia.\n");
		for(i = 0; i < dias; i++){
			scanf("%f %f", &sis, &dia);
			mediaSis += sis; //Acumula��o
			mediaDia += dia; //Acumula��o
		}
		//Processamento
		mediaSis /= dias;
		mediaDia /= dias;
		//Sa�da
		printf("A m�dia de press�o do(a) atleta %s\n", nome);
		printf("Sis: %.2f\tDia: %.2f\n", mediaSis, mediaDia);
		//Pergunta se deseja continuar ou encerrar
		printf("Digite sim para continuar ou n�o para sair: ");
		scanf("%s",&continuar);
	}while(strcmp(continuar,"sim") == 0);
    return 0;
}
