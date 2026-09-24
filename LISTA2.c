#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.141592

int main() {

    /* 1 - Ano de nascimento */
    int idadeAtual, anoAtual, anoNasc;

    printf("Quantos anos voce tem agora: ");
    scanf("%d", &idadeAtual);

    printf("Em que ano voce esta: ");
    scanf("%d", &anoAtual);

    anoNasc = anoAtual - idadeAtual;

    printf("O ano de nascimento do usuario e %d\n", anoNasc);


    /* 2 - Conversao de km/h para m/s */
    float velKmh, velMs;

    printf("Qual a sua velocidade em km/h: ");
    scanf("%f", &velKmh);

    velMs = (velKmh * 1000.0) / 3600.0;

    printf("Sua velocidade convertida para m/s e de %.2f m/s\n", velMs);


    /* 3 - Conversao de reais para dolar */
    float valorReal, valorDolar, taxaDolar;

    printf("Entre com o valor em reais: ");
    scanf("%f", &valorReal);

    printf("A cotacao do dolar esta 1 dolar = 5,22 reais\n");

    printf("Insira o valor da cotacao do dolar: ");
    scanf("%f", &taxaDolar);

    valorDolar = valorReal * (1.0 / taxaDolar);

    printf("O valor em dolares e de: %.2f\n", valorDolar);


    /* 4 - Conversao de Celsius para Fahrenheit */
    float tempCelsius, tempFahr;

    printf("Qual a temperatura em celsius: ");
    scanf("%f", &tempCelsius);

    tempFahr = tempCelsius * 1.8 + 32.0;

    printf("O valor convertido para Fahrenheit e de %.2f\n", tempFahr);


    /* 5 - Conversao de graus para radianos */
    double graus, radianos;

    printf("Entre com o valor de graus: ");
    scanf("%lf", &graus);

    radianos = (graus * PI) / 180.0;

    printf("Seu valor convertido para radianos e igual a %.2lf\n", radianos);


    /* 6 - Antecessor e sucessor */
    int numero, numSucessor, numAntecessor;

    printf("Entre com o valor de n: ");
    scanf("%d", &numero);

    numAntecessor = numero - 1;
    numSucessor = numAntecessor + 2;

    printf("O numero %d, seu antecessor %d e seu sucessor %d\n",
           numero, numAntecessor, numSucessor);


    /* 7 - Divisao da heranca */
    float parte1, parte2, parte3, valorHeranca;

    valorHeranca = 780000;

    parte1 = valorHeranca * 46 / 100;
    parte2 = valorHeranca * 32 / 100;
    parte3 = valorHeranca * 22 / 100;

    printf("O valor que cada um recebera e de:\n");
    printf("Pessoa 1: %.2f\n", parte1);
    printf("Pessoa 2: %.2f\n", parte2);
    printf("Pessoa 3: %.2f\n", parte3);


    /* 8 - Conversao de segundos para horas, minutos e segundos */
    int tempoTotal, qtdHoras, qtdMinutos, qtdSegundos;

    printf("Quanto foi o tempo do evento em segundos: ");
    scanf("%d", &tempoTotal);

    qtdHoras = tempoTotal / 3600;
    qtdMinutos = (tempoTotal / 60) % 60;
    qtdSegundos = tempoTotal % 60;

    printf("O tempo do evento ao todo foi de:\n");
    printf("%d Horas\n", qtdHoras);
    printf("%d Minutos\n", qtdMinutos);
    printf("%d Segundos\n", qtdSegundos);


    /* 9 - Distancia e consumo da viagem */
    int tempoViagem, velMedia, distancia;
    float consumoLitros;

    printf("Qual foi o tempo gasto em horas do total da viagem: ");
    scanf("%d", &tempoViagem);

    printf("Qual foi a velocidade media em km/h durante a viagem: ");
    scanf("%d", &velMedia);

    distancia = tempoViagem * velMedia;

    consumoLitros = (float) distancia / 12;

    printf("A distancia percorrida foi de %d km\n", distancia);
    printf("Foram usados %.2f litros de combustivel ao todo na viagem\n", consumoLitros);


    /* 10 - Maior entre tres numeros (sem if) */
    int num1, num2, num3, maiorParcial, maiorFinal;

    printf("Insira tres valores para saber qual e o maior: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    maiorParcial = (num1 + num2 + abs(num2 - num1)) / 2;
    maiorFinal = (maiorParcial + num3 + abs(num3 - maiorParcial)) / 2;

    printf("O maior entre %d, %d e %d = %d\n", num1, num2, num3, maiorFinal);

    return 0;
}
