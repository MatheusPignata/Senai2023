#include <stdio.h>

int main(){
	
	float salario, irrf;
	
	do{
		printf("Digite o salario: ");
		scanf("%f", &salario);
	}while(salario <= 0);
	
	if(salario < 2112){
		irrf = 0;
	}else if(salario < 2826.66){
		irrf = salario * 7.5 / 100 - 158.40;
	}else if(salario < 3751.06){
		irrf = salario * 15 / 100 - 340.30;
	}else if(salario < 4664.68){
		irrf = salario * 22.5 / 100 - 651.73;
	}else{
		irrf = salario * 27.5 / 100 - 884.96;
	}
	
	printf("%.2f", irrf);
	
	return 0;
}
