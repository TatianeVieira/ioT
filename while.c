#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 1;
	int y = 10;
	while (y>x)
	{
		printf("Valor de Y = $d \n", y);
		y=y-2;
	}
	printf("\nValor de Y depois que sair da estrutura = $d", y);
}