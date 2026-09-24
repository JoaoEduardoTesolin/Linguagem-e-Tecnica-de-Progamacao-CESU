#include <stdio.h>

int main(){
	double valorBase, valorAltura, areaTriangulo;
	
	printf("Insira o valor da base: \n");
	scanf("%lf", &valorBase);
	
	printf("Insira o valor da altura: \n");
	scanf("%lf", &valorAltura);
	
	areaTriangulo = (valorBase * valorAltura) / 2;
	
	printf("A Area do triangulo e igual a %.2lf", areaTriangulo);
	 
	return 0;
}
