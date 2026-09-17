#include<stdio.h>
main()
{
	int n1, n2, maior=0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n1);
	
	printf("Digite outro numero inteiro mas diferente: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		n1 = maior;
		printf("O primeiro e maior que o segundo ", n1);
	}else{
		
		printf("O segundo e maior ");
	}
	
	
}
