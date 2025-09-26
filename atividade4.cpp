#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float pes, polegadas, jardas, milhas;

    printf("\nDigite a medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes*12;
    jardas = pes/3;
    milhas = jardas/1760;

    printf("\nMedida em pes = %.2f", pes);
    printf("\nEquivale a %.2f polegadas", polegadas);
    printf("\nEquivale a %.2f jardas", jardas);
    printf("\nEquivale a %.6f milhas", milhas);

    getchar();
    return 0;
    	printf("Tatiane Vieira");

}