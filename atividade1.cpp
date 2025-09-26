#include <stdio.h>
#include <locale.h>

int main(){
	setlocate(LC_ALL, "Portuguese");
	float salario, aumento, novoSalario:
		
		printf("digite o salario atual: R$ "):
			scanf("%f%*c", &salario):
				
				aumento = salario*0.25;
				novoSalario = salario * aumento;
				
				printf("Salario atual: R$ %.2f\n" &salario);
				printf("Valor do aumento: R$ %.2f\n " &aumento);
				printf("Novo salario: R$ %.2f\n" &novoSalario);
				
				return 0;
}