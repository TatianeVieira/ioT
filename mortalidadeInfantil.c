#include <stdio.h>
 int main() {
 	int n, i;
 	char sexo;
 	int meses;
 	int totalF = 0, totalM=0;
 	int mortasF=0, mortasM=0;
 	int mortas24=0;
 	
 	printf("Digite o numero de criancas nascidas no periodo: ");
 	scanf("%d", &n);
	
	for (i=1; i<=n; i++) {
		printf("Digite o sexo %da crianca: ",i);
		scanf(" %c",&sexo);
		printf("Digite o tempo de vida (em meses) da crianca: ",i);
		scanf("%d", &meses);
		
		if(sexo=='F' || sexo=='f') {
			totalF++;
			if(meses==0){
				mortasF++;
			}
		}else if(sexo=='M' || sexo=='m'){
			totalM++;
			if(meses==0){
				mortasM++;
			}
		}
		if(meses<=24){
			mortas24++;
		}
	}
	printf("\nPercentual de criancas de sexo feminino mortas: %.2f%%\n",  totalF>0?(mortasF*100.0/totalF):0);
	printf("\nPercentual de criancas de sexo masculino mortas: %.2f%%\n",  totalM>0?(mortasM*100.0/totalM):0);
	printf("\nPercentual de criancas que viveram 24 meses ou menos: %.2f%%\n", (mortas24*100.0/n));
	return 0;
 }