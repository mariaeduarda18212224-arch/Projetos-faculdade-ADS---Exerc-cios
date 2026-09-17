#include<stdio.h>
main(){
	float alt, sexo, pesoid;
	
	printf("Digite a sua altura: ");
	scanf("%f", &alt);
	
	printf("Digite seu sexo (1 para homens e 0 para mulheres): ");
	scanf("%f", &sexo);
	
	if(sexo == 1){
		pesoid = (72.7 * alt) - 58;
		printf("Voce e homem!!");
	
	}else{
		pesoid = (62.1 * alt) - 44.7;
		printf("Voce e mulher!!");
	}
	printf("Peso ideal: %.2f", pesoid);
}
