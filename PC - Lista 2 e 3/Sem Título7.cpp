#include<stdio.h>
main(){
	int v1, v2, c=0;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &v2);
	
	if(v1==v2){
		c = v1 + v2;
		
	}else{
		c = v1 * v2;
		
	}
	printf("Valor do C: %d", c);
	
}
