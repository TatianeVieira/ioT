#include <stdio.h>

int main(){
	int anoAtual, ano = 2021;
	float salario = 1000.0, percentual = 0.015;
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	while (ano <= anoAtual){
		salario += salario + percentual;
		
		if (ano>= 2022) {
			salario += 2;
		}
		ano++;
	}
	printf("Novo salario em %d = %.2f\n", anoAtual, salario);
	return 0;
}