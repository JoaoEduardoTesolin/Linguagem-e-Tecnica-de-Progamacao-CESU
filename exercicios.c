#include <stdio.h>

int main(){

    /* EXERCICIO 1 - MEDIA */

    char aluno[10];
    float nota1, nota2, nota3, mediaFinal;

    printf("Qual o seu nome?\n");
    scanf("%s", aluno);

    printf("Coloque suas 3 notas\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    mediaFinal = (nota1 + nota2 + nota3) / 3;

    if(mediaFinal >= 7 && mediaFinal <= 10){
        printf("\033[34mAPROVADO\033[0m\n");
    }
    else if(mediaFinal >= 4 && mediaFinal < 7){
        printf("\033[32mEXAME\033[0m\n");
    }
    else{
        printf("\033[31mREPROVADO\033[0m\n");
    }


    /* EXERCICIO 2 - CONVERSAO DE TEMPERATURA */

    int escolha;
    float celsius, fahrenheit;

    printf("\nSe quer em celsius digite 1\n");
    printf("Se quer em Fahrenheit digite 2\n");
    scanf("%d", &escolha);

    switch(escolha){

        case 1:
            printf("Entre com o valor de Fahrenheit\n");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32) * 5/9;

            printf("O valor em celsius eh de %.2f\n", celsius);
            break;

        case 2:
            printf("Entre com o valor de Celsius\n");
            scanf("%f", &celsius);

            fahrenheit = (celsius * 9/5) + 32;

            printf("O valor em Fahrenheit eh de %.2f\n", fahrenheit);
            break;
    }


    /* EXERCICIO 3 - SAQUE */

    int valorSaque, restante;
    int quantidade100, quantidade50, quantidade10;
    int quantidade5, quantidade2, quantidade1;

    printf("\nEntre com o valor que deseja sacar: ");
    scanf("%d", &valorSaque);

    quantidade100 = valorSaque / 100;
    restante = valorSaque % 100;

    quantidade50 = restante / 50;
    restante = restante % 50;

    quantidade10 = restante / 10;
    restante = restante % 10;

    quantidade5 = restante / 5;
    restante = restante % 5;

    quantidade2 = restante / 2;
    restante = restante % 2;

    quantidade1 = restante;

    printf("\n100:%d  50:%d  10:%d  5:%d  2:%d  1:%d\n",
           quantidade100, quantidade50, quantidade10,
           quantidade5, quantidade2, quantidade1);

    return 0;
}
