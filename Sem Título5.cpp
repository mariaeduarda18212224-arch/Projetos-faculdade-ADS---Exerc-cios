#include<stdio.h>
main()
{
	int n1, n2, n3, soma;
	
	printf("Digite um numero para A: ");
	scanf("%d", &n1);
	
	printf("Digite um numero para B: ");
	scanf("%d", &n2);
	
	printf("Digite um numero para C: ");
	scanf("%d", &n3);
	
	soma = n1 + n2;
	
	if(soma < n3){
		printf("C e menor");
	}else{
		printf("Maior");
	}
	
	
	
}
