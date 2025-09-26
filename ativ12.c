#include <stdio.h>

int main() {
    int dia, mes;

    printf("Digite o mes de nascimento (1 a 12): ");
    scanf("%d", &mes);

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Data invalida!\n");
        return 0;
    }
    if ((mes == 1  && dia >= 21) || (mes == 2  && dia <= 19))
        printf("Signo: Aquario\n");
    else if ((mes == 2  && dia >= 20) || (mes == 3  && dia <= 20))
        printf("Signo: Peixes\n");
    else if ((mes == 3  && dia >= 21) || (mes == 4  && dia <= 20))
        printf("Signo: Aries\n");
    else if ((mes == 4  && dia >= 21) || (mes == 5  && dia <= 20))
        printf("Signo: Touro\n");
    else if ((mes == 5  && dia >= 21) || (mes == 6  && dia <= 20))
        printf("Signo: Gemeos\n");
    else if ((mes == 6  && dia >= 21) || (mes == 7  && dia <= 22))
        printf("Signo: Cancer\n");
    else if ((mes == 7  && dia >= 23) || (mes == 8  && dia <= 22))
        printf("Signo: Leao\n");
    else if ((mes == 8  && dia >= 23) || (mes == 9  && dia <= 22))
        printf("Signo: Virgem\n");
    else if ((mes == 9  && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Signo: Libra\n");
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Signo: Escorpiao\n");
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Signo: Sagitario\n");
    else
        printf("Signo: Capricornio\n");
    return 0;
}