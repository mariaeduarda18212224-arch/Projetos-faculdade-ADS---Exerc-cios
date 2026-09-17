#include<stdio.h>
main(){
	int n1, n2, x;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1%2==0){
		printf("Numero par!! \n");
	}else{
		printf("Numero impar!!\n");
	}
	if(n2%2==0){
		printf("Segundo par!! \n");
	}else{
		printf("Segundo impar!!\n");
	}
	
	if(n1%2==0 && n2%2==0){
		x = n1 + n2;	
	}else if(n1 % 2 !=0 && n2 % 2 !=0){
		x = n1 - n2;
	}else if(n1 % 2 ==0 && n2 % 2 !=0){
		x = n1 * n2;
	}else{
		x = (float)n1 / n2;
	}
	
	printf("Resultado: %.2d\n", x);
}
