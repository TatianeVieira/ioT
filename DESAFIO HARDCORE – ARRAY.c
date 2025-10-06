#include <stdio.h>

int main() {
    float valorUnitario[10];
    int quantidadeVendida[10];
    float valorTotal[10];
    float totalGeral = 0, comissao, salarioFinal;
    int i, maisVendido = 0;
    float maiorQuantidade = 0;

    printf("=== LOJA DE ARTESANATO ===\n");

    for (i = 0; i < 10; i++) {
        printf("\nDigite o valor unitario do objeto %d: R$ ", i + 1);
        scanf("%f", &valorUnitario[i]);
        printf("Digite a quantidade vendida do objeto %d: ", i + 1);
        scanf("%d", &quantidadeVendida[i]);

        valorTotal[i] = valorUnitario[i] * quantidadeVendida[i];
        totalGeral += valorTotal[i];

        if (quantidadeVendida[i] > maiorQuantidade) {
            maiorQuantidade = quantidadeVendida[i];
            maisVendido = i;
        }
    }
    comissao = totalGeral * 0.05;
    salarioFinal = 545.00 + comissao;

    printf("\n=== RELATORIO DE VENDAS ===\n");
    printf("Obj\tQtd\tValor Unit.\tValor Total\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\tR$ %.2f\t\tR$ %.2f\n", i + 1, quantidadeVendida[i], valorUnitario[i], valorTotal[i]);
    }

    printf("\nValor total das vendas: R$ %.2f", totalGeral);
    printf("\nComissao (5%%): R$ %.2f", comissao);
    printf("\nSalario final do vendedor: R$ %.2f", salarioFinal);

    printf("\n\nObjeto mais vendido: %d", maisVendido + 1);
    printf("\nQuantidade vendida: %.0f\n", maiorQuantidade);

    printf("Tatiane Vieira");

    return 0;
}