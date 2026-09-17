#include<stdio.h>
main(){
	float salario, reajuste, salariofinal;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if(salario<=800){
		reajuste = salario*50/100;
		salariofinal=salario+reajuste;
		
	}else(salario>800);{
		reajuste = salario * 30/100;
		salariofinal=salario+reajuste;
	}
	printf("Reajuste de: %.2f ", reajuste);
	printf("Salario final %.2f", salariofinal);
	
}
