#include <stdio.h>
#include <math.h>

int main(){
	double salario=1000.0;
	double percentual=0.015;
	int ano;
	
	salario+=salario*percentual;
	
	for(ano=2020; ano<=2025; ano++){
		percentual+=2;
		salario+=salario*percentual;
	}
	printf("Salario atual em 2025: R$ %.2f\n", salario);
	return 0;
}