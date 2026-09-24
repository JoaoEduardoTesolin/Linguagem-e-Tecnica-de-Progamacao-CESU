#include <stdio.h>

int main(){
	float primeiroNumero, segundoNumero, resultadoSoma;
	
	printf("Qual o valor do primeiro numero ");
	scanf("%f", &primeiroNumero);
	
	printf("Qual o valor do segundo numero que quer que seja somado ");
	scanf("%f", &segundoNumero);
	
	resultadoSoma = primeiroNumero + segundoNumero;
	
	printf("A soma entre esses dois numeros e igual a %.2f", resultadoSoma);
	
	return 0;
}
