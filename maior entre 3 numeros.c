#include <stdio.h>

int main(){
	int numero1, numero2, numero3;
	
	printf("Entre com o valor de a\n");
	printf("Entre com o valor de b\n");
	printf("Entre com o valor de c\n");
	
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	scanf("%d", &numero3);
	
	if( numero1 > numero2 && numero1 > numero3){
		printf("o maior eh A");
	}
	
	if(numero2 > numero1 && numero2 > numero3){
		printf("o maior eh B");
	}
	
	if (numero3 > numero1 && numero3 > numero2){
		printf("o maior eh C");
	}
	return 0;
}
