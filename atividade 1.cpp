#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, novosal;
		
		printf("digite o salario do funcionario: R$ ");
			scanf("%f%*c", &sal);
				
		scanf("%f%*c", &sal);
		
		novosal=sal+sal*25/100;
		
		printf("\nNovo salario = %0.2f", novosal);
		
		getchar();
		return 0;
			printf("Tatiane Vieira");

}