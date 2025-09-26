#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float deposito, taxa, rendimento, total;

    printf("\nDigite o valor do deposito: R$ ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros (em %): ");
    scanf("%f", &taxa);

    rendimento = deposito * taxa / 100;
    total = deposito + rendimento;

    printf("\nValor do depósito = R$ %.2f", deposito);
    printf("\nTaxa de juros = %.2f%%", taxa);
    printf("\nRendimento = R$ %.2f", rendimento);
    printf("\nTotal após rendimento = R$ %.2f", total);

    getchar();
    return 0;
    	printf("Tatiane Vieira");

}