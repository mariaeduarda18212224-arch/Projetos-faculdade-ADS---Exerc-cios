#include<stdio.h>
main()
{
	float n1, n2, media;
	
	printf("Digite sua nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite sua nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	
	if(media >= 6){
		printf("Aprovado com media %.2f", media);
	}
	else{
	printf("Reprovado com media %.2f", media);
	}
	
}
