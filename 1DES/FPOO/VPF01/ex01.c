#include <stdio.h>

int main(){
	float n1, n2, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	if(media >= 6){
		printf("Sua media eh %.2f, voce esta aprovado!", media);
	}else{
		printf("Sua media eh %.2f, voce esta reprovado!", media);
	}
	
	return 0;
}
