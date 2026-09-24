#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero1, numero2, resultado;
	
	printf("Entre com os valores do problema:\n ");
	scanf("%d %d", &numero1, &numero2);
	
	if( numero1 > 0 && numero2 > 0){
		if(numero1 % 2 == 0 && numero2 % 2 == 0){
			printf("Os dois sao multiplos de 2\n");
		}
	}
	
	else{
		if( numero1 < numero2){
			printf("a eh maior que b\n");
		}
		if ( numero2 < numero1){
			printf("b eh maior que a\n");
		}
	}	
	
	return 0;
}
