#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3;
	float p1,p2,p3;
	float mediaPonderada;
	
	printf("Digite a primeira nota e o seu peso: ");
	scanf("%f %f", &n1, &p1);
	
	printf("Digite a segunda nota e o seu peso:");
		scanf("%f %f", &n2, &p2);
		
	printf("Digite a terceira nota e o seu peso: ");
	scanf("%f %f", &n3, &p3);
	
	mediaPonderada = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);
	printf("\nA media ponderada é = %.2f", mediaPonderada);
	
	getchar();
	return 0;
	printf("Tatiane Vieira");
}