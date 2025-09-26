#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade <= 11) {
        printf("Voce e uma Crianca.\n");
    } else if (idade >= 12 && idade <= 18) {
        printf("Voce e um Adolescente.\n");
    } else if (idade >= 19 && idade <= 24) {
        printf("Voce e um Jovem.\n");
    } else if (idade >= 25 && idade <= 59) {
        printf("Voce e um Adulto.\n");
    } else {
        printf("Voce e um Idoso.\n");
    }

    return 0;
}