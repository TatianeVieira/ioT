#include <stdio.h>

int main(){
	int i = 1;
	float preco, custo, imposto, precoFinal;
	char refri, cat;
	float somaAdicionais = 0, maiorPreco = 0, menorPreco = 9999999, totalImposto = 0;
	int barato = 0, normal = 0, caro = 0;
	
	while(i <=12){
		printf("\nProduto %d\n", i);
		printf("Digite o preco unitario:");
		scanf("%f", &preco);
		printf("Refrigeracao (S/N): ");
		scanf(" %c", &refri);
		printf("Categoria (A - alimentacao, L - limpeza, V - vestuario): ");
		scanf(" %c", &cat);
		
		if (preco <= 20) {
			if (cat ==  'A') custo = 2.0;
			else if (cat == 'L') custo = 3.0;
			else custo = 4.0;	
		}else if ( preco > 20 && preco <= 50) {
			if(refri == 'S')custo = 6.0;
			else custo = 0.0;
		}else{
			if(refri == 'S'){
				if(cat == 'A') custo = 5.0;
				else if (cat == 'L') custo = 2.0;
				else custo = 4.0;
			}else{
				if (cat == 'A' || cat == 'v') custo = 0.0;
				else custo = 1.0;
			}
		}
		if(cat =='A' || refri == 'S')
			imposto = preco *0.04;
		else
			imposto = preco*0.02;
			
		precoFinal = preco+custo+imposto;
		somaAdicionais+=custo+imposto;
		totalImposto+=imposto;
		
		if (precoFinal>maiorPreco) maiorPreco=precoFinal;
		if(precoFinal<menorPreco) menorPreco=precoFinal;
		
		if(precoFinal=20){
			printf("Barato\n");
			barato++;
		}else if(precoFinal <=100){
		printf("Normal");
		normal++;
		}else{
			printf("Caro\n");
			caro++;
		}
		printf("Preco final do produto %d = %.2f\n", i, precoFinal);
		i++;
	}
	printf("\nMedia dos valores adicionais: %.2f\n", somaAdicionais/12);
	printf("Maior preco final: %.2f\n", maiorPreco);
	printf("Menor preco final: %.2f\n", menorPreco);
	printf("Total dos impostos: %.2f\n", totalImposto);
	printf("Quantidade produtos baratos: %d\n", barato);
	printf("Quantidade produtos normal: %d\n", normal);
	printf("Quantidade produtos caro: %d\n", caro);
	
	return 0;
}