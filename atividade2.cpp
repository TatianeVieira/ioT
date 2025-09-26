#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salBase, gratificacao, imposto, salarioFinal;

    printf("\nDigite o salario base do funcionario: ");
    scanf("%f", &salBase);

    gratificacao = salBase * 5 / 100;
    imposto = salBase * 7 / 100;
    salarioFinal = salBase + gratificacao - imposto;

    printf("\nSalário base = R$ %.2f", salBase);
    printf("\nGratificação (5%%) = R$ %.2f", gratificacao);
    printf("\nImposto (7%%) = R$ %.2f", imposto);
    printf("\nSalário a receber = R$ %.2f", salarioFinal);

    getchar();
    return 0;
    	printf("Tatiane Vieira");

}