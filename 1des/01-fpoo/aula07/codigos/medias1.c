#include <stdio.h>
#include <locale.h>

int main(){
	//Configura��es e declara��o de vari�veis
	setlocale(LC_ALL, "");
	char nome[30];
	float sis1, sis2, sis3, sis4, sis5;
	float dia1, dia2, dia3, dia4, dia5;
	float mediaSis, mediaDia;
	//Entradas
	printf("Digite o nome do atleta/cliente: ");
	scanf("%s",&nome);
	printf("Digite 5 as medidas de press�o sist�lica e diast�lica:\n");
	printf("Sys. Dia.\n");
	scanf("%f %f", &sis1, &dia1);
	scanf("%f %f", &sis2, &dia2);
	scanf("%f %f", &sis3, &dia3);
	scanf("%f %f", &sis4, &dia4);
	scanf("%f %f", &sis5, &dia5);
	//Processamento
	mediaSis = (sis1 + sis2 + sis3 + sis4 + sis5) / 5;
	mediaDia = (dia1 + dia2 + dia3 + dia4 + dia5) / 5;
	//Sa�da
	printf("A m�dia de press�o do(a) atleta %s\n", nome);
	printf("Sis: %.2f\tDia: %.2f\n", mediaSis, mediaDia);
    return 0;
}
