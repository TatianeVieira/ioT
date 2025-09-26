#include <stdio.h>
#include <locale.h>

int main() {
	    setlocale(LC_ALL, "Portuguese");
	    
	    float n1, n2, n3, media;
	    
	    printf("Digite tres notas: ");
	    scanf("%f %f %f", &n1, &n2, &n3);
	    
	    media = (n1+n2+n3)/3;
	    
	    printf("\nA média é = %.2f", media);
	     
	    return 0;
	    	printf("Tatiane Vieira");

	}