#include<stdio.h>
main(){
	float nlab, nsemes, nexame, mediaf, p1=2, p2=3, p3=5;
	
	printf("Digite a nota de Laboratorio: ");
	scanf("%f", &nlab);
	
	printf("Digite a nota  Semestral: ");
	scanf("%f", &nsemes);
	
	printf("Digite a nota do Exame final: ");
	scanf("%f", &nexame);
	
	mediaf = ((nlab*2) + (nsemes*3) + (nexame*5))/ (p1 + p2 + p3);
	
	printf("\nA media final e: %.2f", mediaf);
	
	if(mediaf >= 8.0 && mediaf <=10.0){
		printf("\nA");
	}else if(mediaf < 8.0 && mediaf >=7.0){
		printf("\nB");
	}else if(mediaf < 7.0 && mediaf >=6.0){
		printf("\nC");
	}else if(mediaf < 6.0 && mediaf >=5.0){
		printf("\nD");
	}else{
		printf("\nE");
	}
}
