#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main() {

    /* Exercicio 1 - ordem inversa */
    {
        int primeiro, segundo;

        printf("Digite um numero inteiro: ");
        scanf("%d", &primeiro);

        printf("Agora digite outro numero inteiro: ");
        scanf("%d", &segundo);

        printf("Invertendo a ordem, fica: %d %d\n", segundo, primeiro);
    }

    /* Exercicio 2 - notacao cientifica */
    {
        double valor, resultado;
        int expoente;

        printf("Informe o coeficiente A: ");
        scanf("%lf", &valor);

        if (valor >= 1 && valor < 10) {
            printf("Coeficiente aceito.\n");
        } else {
            printf("Coeficiente fora do intervalo [1, 10)!\n");
        }

        printf("Informe o expoente n: ");
        scanf("%d", &expoente);

        resultado = valor * pow(10, expoente);

        printf("A x 10^n = %.0lf\n", resultado);
    }

    /* Exercicio 3 - decimal para binario */
    {
        int decimal, resto1, resto2, resto3;
        int resto4, resto5, resto6, aux;

        printf("Digite um numero inteiro para converter: ");
        scanf("%d", &decimal);

        aux = decimal;

        resto1 = aux - (aux / 2) * 2;
        aux = aux / 2;

        resto2 = aux - (aux / 2) * 2;
        aux = aux / 2;

        resto3 = aux - (aux / 2) * 2;
        aux = aux / 2;

        resto4 = aux - (aux / 2) * 2;
        aux = aux / 2;

        resto5 = aux - (aux / 2) * 2;
        aux = aux / 2;

        resto6 = aux - (aux / 2) * 2;

        printf("Em base 2, esse numero fica: %d%d%d%d%d%d%d\n",
               resto6, resto5, resto4, resto3, resto2, resto1);
    }

    /* Exercicio 4 - salario com comissao */
    {
        double salario, vendas, comissao, total;

        printf("Quanto e o seu salario base? ");
        scanf("%lf", &salario);

        printf("Quanto voce vendeu no mes? ");
        scanf("%lf", &vendas);

        comissao = vendas * 0.15;
        total = salario + comissao;

        printf("Salario com comissao: R$ %.2lf\n", total);
    }

    /* Exercicio 5 - soma, media e produto */
    {
        float valor1, valor2, valor3, valor4;
        float total, media, produto;

        printf("Primeiro valor: ");
        scanf("%f", &valor1);

        printf("Segundo valor: ");
        scanf("%f", &valor2);

        printf("Terceiro valor: ");
        scanf("%f", &valor3);

        printf("Quarto valor: ");
        scanf("%f", &valor4);

        total = valor1 + valor2 + valor3 + valor4;
        media = total / 4.0;
        produto = valor1 * valor2 * valor3 * valor4;

        printf("Soma: %.2f\n", total);
        printf("Media: %.2f\n", media);
        printf("Produto: %.2f\n", produto);
    }

    /* Exercicio 6 - idade em dias */
    {
        int total_dias, idade_anos, dias_restantes;
        int idade_meses, dias_finais;

        printf("Quantos dias de vida voce tem? ");
        scanf("%d", &total_dias);

        idade_anos = total_dias / 365;
        dias_restantes = total_dias % 365;

        idade_meses = dias_restantes / 30;
        dias_finais = dias_restantes % 30;

        printf("Isso equivale a %d ano(s), %d mes(es) e %d dia(s)\n",
               idade_anos, idade_meses, dias_finais);
    }

    /* Exercicio 7 - volume da esfera */
    {
        float raio, volume;

        printf("Digite o raio da esfera: ");
        scanf("%f", &raio);

        volume = (PI * 4.0 * pow(raio, 3)) / 3.0;

        printf("Volume calculado: %.2f\n", volume);
    }

    /* Exercicio 8 - distancia entre dois pontos */
    {
        int xInicial, yInicial, xFinal, yFinal;
        float diferencaX, diferencaY, distancia;

        printf("Coordenadas do ponto 1 (x y): ");
        scanf("%d %d", &xInicial, &yInicial);

        printf("Coordenadas do ponto 2 (x y): ");
        scanf("%d %d", &xFinal, &yFinal);

        diferencaX = xFinal - xInicial;
        diferencaY = yFinal - yInicial;

        distancia = sqrt(pow(diferencaX, 2) + pow(diferencaY, 2));

        printf("Os pontos estao a %.2f unidades de distancia\n", distancia);
    }

    return 0;
}
