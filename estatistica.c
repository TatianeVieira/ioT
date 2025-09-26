#include <stdio.h>
int main(){
	int i, codigo, veiculo, acidentes;
	int codigoMaior, codigoMenor;
	int somaVeiculos=0, somaAcidentesMenos2000=0, contMenos2000=0;
	int maiorAcidente=-1, menorAcidente=99999;
	
	for(i=1; i<=5; i++){
		printf("\nDigite o codigo da cidade %d: ",i);
		scanf("%d", &codigo);
		printf("Digite o numero de veiculos de passeio da cidade  %d: ",i);
		scanf("%d", &veiculo);
		printf("Digite o numero de acidentes com vitimas da cidade  %d: ",i);
		scanf("%d", &acidentes);
		
		if(acidentes>menorAcidente){
			maiorAcidente=acidentes;
			codigoMaior=codigo;
		}
		if(acidentes<menorAcidente){
			menorAcidente=acidentes;
			codigoMenor=codigo;
		}
		somaVeiculos+=acidentes;
		
		if(veiculo<2000){
			somaAcidentesMenos2000+=acidentes;
			contMenos2000++;
		}
	}
	printf("\nCidade com maior indice  de acidentes: %d (acidente:%d)\n", codigoMaior, maiorAcidente);
	printf("Cidade com menor indice de acidentes: %d (acidentes: %d)\n", codigoMenor, menorAcidente);
	printf("\nMedia de veiculos nas 5 cidades : %.2f\n",somaVeiculos/5.0);
	
	if(contMenos2000>0){
		printf("Media de acidentes nas cidades com menos de 2000 veiculos: %.2f\n", somaAcidentesMenos2000/(float)contMenos2000);
	}else{
		printf("Nao ha cidades com menos de 2000 veiculos.\n");
	}
	return 0;
}